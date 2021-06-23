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
#define STATE_COUNT 496
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 1
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 36

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
  [10] = {.index = 3, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 1},
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 1},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 3},
  [24] = {.index = 45, .length = 3},
  [25] = {.index = 48, .length = 3},
  [26] = {.index = 51, .length = 1},
  [27] = {.index = 52, .length = 2},
  [28] = {.index = 54, .length = 3},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 3},
  [31] = {.index = 62, .length = 1},
  [32] = {.index = 63, .length = 3},
  [33] = {.index = 66, .length = 1},
  [34] = {.index = 67, .length = 1},
  [35] = {.index = 68, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_parameter, 0, .inherited = true},
  [3] =
    {field_name, 0},
  [4] =
    {field_name, 2},
    {field_table_alias, 0},
  [6] =
    {field_name, 2},
    {field_schema, 0},
  [8] =
    {field_name, 0},
    {field_table_alias, 1},
  [10] =
    {field_name, 0},
    {field_parameter, 2},
  [12] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [14] =
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [16] =
    {field_name, 0},
    {field_table_alias, 2},
  [18] =
    {field_name, 0},
    {field_parameter, 3},
  [20] =
    {field_alias, 4},
    {field_name, 0},
    {field_parameter, 2},
  [23] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [26] =
    {field_parameter, 1},
  [27] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [29] =
    {field_alias, 4},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [32] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [35] =
    {field_index_name, 3},
  [36] =
    {field_name, 0},
    {field_type, 1},
  [38] =
    {field_name, 1, .inherited = true},
  [39] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [42] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 3},
  [45] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2},
  [48] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2, .inherited = true},
  [51] =
    {field_name, 0, .inherited = true},
  [52] =
    {field_name, 0},
    {field_value, 2},
  [54] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [57] =
    {field_name, 0},
    {field_parameter, 4},
  [59] =
    {field_alias, 6},
    {field_name, 0},
    {field_parameter, 3},
  [62] =
    {field_index_name, 5},
  [63] =
    {field_alias, 7},
    {field_name, 0},
    {field_parameter, 4},
  [66] =
    {field_name, 1},
  [67] =
    {field_size, 2},
  [68] =
    {field_alias, 8},
    {field_name, 0},
    {field_parameter, 4},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_if,
  },
  [10] = {
    [0] = sym_identifier,
  },
  [34] = {
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
      if (eof) ADVANCE(434);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(216);
      if (lookahead == 'F') ADVANCE(154);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'J') ADVANCE(153);
      if (lookahead == 'K') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'j') ADVANCE(345);
      if (lookahead == 'k') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == 'v') ADVANCE(225);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(433)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(374);
      if (lookahead == 'v') ADVANCE(225);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(414)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(158);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'J') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(182);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'j') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(374);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(654);
      if (lookahead == 'C') ADVANCE(618);
      if (lookahead == 'D') ADVANCE(596);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'd') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(658);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(654);
      if (lookahead == 'C') ADVANCE(618);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(658);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(654);
      if (lookahead == 'C') ADVANCE(618);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(658);
      if (lookahead == 's') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'F') ADVANCE(630);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(636);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'G') ADVANCE(633);
      if (lookahead == 'I') ADVANCE(613);
      if (lookahead == 'J') ADVANCE(623);
      if (lookahead == 'L') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'R') ADVANCE(598);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'g') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(157);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(139);
      if (lookahead == 'J') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'j') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(413)
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'G') ADVANCE(633);
      if (lookahead == 'I') ADVANCE(613);
      if (lookahead == 'J') ADVANCE(623);
      if (lookahead == 'L') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'R') ADVANCE(598);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'g') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(528);
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
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'O') ADVANCE(612);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'D') ADVANCE(584);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'd') ADVANCE(674);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(427)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'K') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(631);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead == 'k') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'O') ADVANCE(612);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(432)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(541);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(213);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(183);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(211);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(164);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(169);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(167);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(206);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(208);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(219);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(220);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(125);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(465);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(463);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(195);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(176);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(495);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(217);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(161);
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(502);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(516);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(500);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(472);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(458);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(438);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(437);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(441);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(440);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(518);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(215);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(207);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(508);
      if (lookahead == 'N') ADVANCE(493);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(186);
      END_STATE();
    case 92:
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'R') ADVANCE(497);
      if (lookahead == 'U') ADVANCE(205);
      END_STATE();
    case 93:
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'R') ADVANCE(496);
      END_STATE();
    case 94:
      if (lookahead == 'F') ADVANCE(189);
      END_STATE();
    case 95:
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(490);
      END_STATE();
    case 97:
      if (lookahead == 'G') ADVANCE(462);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(103);
      END_STATE();
    case 99:
      if (lookahead == 'G') ADVANCE(115);
      END_STATE();
    case 100:
      if (lookahead == 'H') ADVANCE(38);
      END_STATE();
    case 101:
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == 'H') ADVANCE(192);
      END_STATE();
    case 104:
      if (lookahead == 'H') ADVANCE(41);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(191);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(185);
      END_STATE();
    case 117:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(515);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(444);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(445);
      END_STATE();
    case 128:
      if (lookahead == 'M') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 130:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 131:
      if (lookahead == 'M') ADVANCE(89);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(475);
      if (lookahead == 'U') ADVANCE(202);
      if (lookahead == 'V') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(493);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(488);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(454);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(492);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(190);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(193);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(198);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(199);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'U') ADVANCE(143);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(221);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(442);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(119);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(168);
      END_STATE();
    case 159:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 160:
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(64);
      END_STATE();
    case 161:
      if (lookahead == 'P') ADVANCE(122);
      END_STATE();
    case 162:
      if (lookahead == 'R') ADVANCE(497);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(506);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(519);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(451);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(453);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(520);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(505);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(218);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(149);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(200);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 179:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(510);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(443);
      END_STATE();
    case 182:
      if (lookahead == 'S') ADVANCE(64);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 184:
      if (lookahead == 'S') ADVANCE(204);
      END_STATE();
    case 185:
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(499);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(444);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(447);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(484);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(467);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(449);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(514);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(469);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(435);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(512);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(480);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(482);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(511);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(439);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 202:
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 203:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 204:
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 206:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 207:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 208:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 209:
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 210:
      if (lookahead == 'U') ADVANCE(159);
      END_STATE();
    case 211:
      if (lookahead == 'U') ADVANCE(126);
      END_STATE();
    case 212:
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 213:
      if (lookahead == 'V') ADVANCE(111);
      END_STATE();
    case 214:
      if (lookahead == 'X') ADVANCE(486);
      END_STATE();
    case 215:
      if (lookahead == 'X') ADVANCE(504);
      END_STATE();
    case 216:
      if (lookahead == 'X') ADVANCE(116);
      END_STATE();
    case 217:
      if (lookahead == 'Y') ADVANCE(473);
      END_STATE();
    case 218:
      if (lookahead == 'Y') ADVANCE(470);
      END_STATE();
    case 219:
      if (lookahead == 'Y') ADVANCE(461);
      END_STATE();
    case 220:
      if (lookahead == 'Y') ADVANCE(460);
      END_STATE();
    case 221:
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 222:
      if (lookahead == '_') ADVANCE(305);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 237:
      if (lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 238:
      if (lookahead == 'b') ADVANCE(412);
      END_STATE();
    case 239:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 282:
      if (lookahead == 'f') ADVANCE(508);
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 283:
      if (lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 284:
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 285:
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 286:
      if (lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 287:
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 288:
      if (lookahead == 'g') ADVANCE(490);
      END_STATE();
    case 289:
      if (lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 290:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 291:
      if (lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 292:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 293:
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 294:
      if (lookahead == 'h') ADVANCE(269);
      END_STATE();
    case 295:
      if (lookahead == 'h') ADVANCE(384);
      END_STATE();
    case 296:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 319:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 320:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 321:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 322:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 323:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == 'v') ADVANCE(288);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 403:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 404:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 405:
      if (lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 406:
      if (lookahead == 'x') ADVANCE(486);
      END_STATE();
    case 407:
      if (lookahead == 'x') ADVANCE(504);
      END_STATE();
    case 408:
      if (lookahead == 'x') ADVANCE(308);
      END_STATE();
    case 409:
      if (lookahead == 'y') ADVANCE(473);
      END_STATE();
    case 410:
      if (lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 411:
      if (lookahead == 'y') ADVANCE(461);
      END_STATE();
    case 412:
      if (lookahead == 'y') ADVANCE(460);
      END_STATE();
    case 413:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(413)
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(157);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(139);
      if (lookahead == 'J') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'j') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 414:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(414)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(374);
      if (lookahead == 'v') ADVANCE(225);
      if (lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 415:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'J') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(182);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'j') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(374);
      if (lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 416:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(654);
      if (lookahead == 'C') ADVANCE(618);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(658);
      if (lookahead == 's') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 417:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(654);
      if (lookahead == 'C') ADVANCE(618);
      if (lookahead == 'D') ADVANCE(596);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'd') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(654);
      if (lookahead == 'C') ADVANCE(618);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'm') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(158);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'G') ADVANCE(633);
      if (lookahead == 'I') ADVANCE(613);
      if (lookahead == 'J') ADVANCE(623);
      if (lookahead == 'L') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'R') ADVANCE(598);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'g') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'G') ADVANCE(633);
      if (lookahead == 'I') ADVANCE(613);
      if (lookahead == 'J') ADVANCE(623);
      if (lookahead == 'L') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'R') ADVANCE(598);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'g') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '`') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'K') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(631);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead == 'k') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(636);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'F') ADVANCE(630);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(427)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'D') ADVANCE(584);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'd') ADVANCE(674);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'O') ADVANCE(612);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'W') ADVANCE(594);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 430:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'I') ADVANCE(589);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 432:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(432)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(620);
      if (lookahead == 'O') ADVANCE(612);
      if (lookahead == 'U') ADVANCE(637);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 433:
      if (eof) ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(433)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(521);
      if (lookahead == ')') ADVANCE(522);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == ',') ADVANCE(531);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(530);
      if (lookahead == '/') ADVANCE(536);
      if (lookahead == ';') ADVANCE(529);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(532);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(216);
      if (lookahead == 'F') ADVANCE(154);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'J') ADVANCE(153);
      if (lookahead == 'K') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '^') ADVANCE(538);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'j') ADVANCE(345);
      if (lookahead == 'k') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == 'v') ADVANCE(225);
      if (lookahead == 'w') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_outer);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(465);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(80);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(561);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(546);
      if (lookahead != 0) ADVANCE(547);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(542);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(546);
      if (lookahead != 0) ADVANCE(547);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(546);
      if (lookahead == '/') ADVANCE(527);
      if (lookahead != 0) ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(546);
      if (lookahead != 0) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == '/') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == '/') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '/') ADVANCE(526);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == '/') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(561);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(561);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == '/') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(591);
      if (lookahead == 'I') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(745);
      if (lookahead == 'i') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == 'i') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
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
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 18},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 18},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 15},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 25},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 25},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 23},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 24},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 26},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 25},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 25},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 24},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 24},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 28},
  [211] = {.lex_state = 28},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 16},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 25},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 25},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 12},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 18},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 25},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 18},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 25},
  [265] = {.lex_state = 25},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 18},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 12},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 12},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 12},
  [310] = {.lex_state = 12},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 12},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 12},
  [318] = {.lex_state = 12},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 12},
  [328] = {.lex_state = 12},
  [329] = {.lex_state = 12},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 12},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 12},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 18},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 12},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 558},
  [411] = {.lex_state = 549},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 549},
  [459] = {.lex_state = 558},
  [460] = {.lex_state = 12},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 549},
  [468] = {.lex_state = 558},
  [469] = {.lex_state = 12},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 12},
  [477] = {.lex_state = 12},
  [478] = {.lex_state = 12},
  [479] = {.lex_state = 12},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 18},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
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
    [sym_program] = STATE(472),
    [sym_statement] = STATE(471),
    [sym__select_statement] = STATE(470),
    [sym_select] = STATE(289),
    [sym__delete_statement] = STATE(470),
    [sym_delete] = STATE(373),
    [sym__create_statement] = STATE(470),
    [sym_create] = STATE(462),
    [sym__insert_statement] = STATE(470),
    [sym_insert] = STATE(461),
    [sym__update_statement] = STATE(470),
    [sym_update] = STATE(420),
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
    ACTIONS(17), 5,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 31,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_primary,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
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
  [45] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 31,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_primary,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
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
  [90] = 3,
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
    ACTIONS(19), 23,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
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
  [128] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 23,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_limit,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
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
  [166] = 23,
    ACTIONS(23), 1,
      sym_keyword_select,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(83), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(284), 1,
      sym_select,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(388), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [243] = 23,
    ACTIONS(23), 1,
      sym_keyword_select,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(83), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(284), 1,
      sym_select,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(475), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [320] = 23,
    ACTIONS(23), 1,
      sym_keyword_select,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(83), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(284), 1,
      sym_select,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(466), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [397] = 22,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_keyword_distinct,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(424), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [471] = 22,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(427), 1,
      sym__function_params,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(360), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [545] = 22,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(45), 1,
      sym_keyword_distinct,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(443), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [619] = 22,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(402), 1,
      sym__function_params,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(360), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [693] = 22,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(47), 1,
      sym_keyword_distinct,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(391), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [767] = 22,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(446), 1,
      sym__function_params,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(360), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [841] = 21,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(429), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [912] = 21,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(426), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [983] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 19,
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
  [1020] = 21,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(483), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1091] = 21,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(371), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1162] = 21,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(448), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1233] = 21,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(431), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1304] = 21,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(87), 1,
      sym_literal,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(85), 2,
      sym_field,
      sym_predicate,
    STATE(445), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(106), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1375] = 4,
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
    ACTIONS(61), 19,
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
  [1412] = 3,
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
    ACTIONS(67), 19,
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
  [1446] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 19,
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
  [1480] = 6,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 5,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 16,
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
  [1520] = 4,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 18,
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
  [1556] = 9,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      sym_keyword_in,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 15,
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
  [1602] = 11,
    ACTIONS(77), 1,
      sym_keyword_or,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      sym_keyword_in,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 11,
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
  [1652] = 8,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 4,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 15,
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
  [1696] = 3,
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
    ACTIONS(95), 19,
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
  [1730] = 3,
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
    ACTIONS(99), 19,
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
  [1764] = 4,
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
    ACTIONS(107), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(103), 10,
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
  [1800] = 4,
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
    ACTIONS(107), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 10,
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
  [1836] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 6,
      sym_keyword_in,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 19,
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
  [1870] = 4,
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
    ACTIONS(107), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(111), 10,
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
  [1906] = 4,
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
    ACTIONS(107), 9,
      sym_keyword_and,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 10,
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
  [1942] = 3,
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
    ACTIONS(115), 19,
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
  [1976] = 3,
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
  [2010] = 3,
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
    ACTIONS(123), 19,
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
  [2044] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 20,
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
  [2077] = 21,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(127), 1,
      sym_keyword_count,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(331), 1,
      sym_select_expression,
    STATE(400), 1,
      sym__function_name,
    STATE(401), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(227), 2,
      sym_field,
      sym_function_call,
    STATE(274), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2146] = 4,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(63), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 19,
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
  [2181] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 20,
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
  [2214] = 4,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 19,
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
  [2249] = 21,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(127), 1,
      sym_keyword_count,
    ACTIONS(131), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      sym_keyword_distinct,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(322), 1,
      sym_select_expression,
    STATE(400), 1,
      sym__function_name,
    STATE(401), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(227), 2,
      sym_field,
      sym_function_call,
    STATE(274), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2318] = 4,
    ACTIONS(139), 1,
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
    ACTIONS(61), 17,
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
  [2352] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 19,
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
  [2384] = 4,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 17,
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
  [2418] = 20,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(131), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(393), 1,
      sym_select_expression,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(274), 2,
      sym__field_list,
      sym_literal,
    STATE(278), 2,
      sym_field,
      sym_function_call,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2484] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 18,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [2516] = 20,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(143), 1,
      sym_keyword_count,
    ACTIONS(145), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(311), 1,
      sym_order_expression,
    STATE(488), 1,
      sym__unary_function_name,
    STATE(489), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(185), 2,
      sym_field,
      sym_function_call,
    STATE(218), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2582] = 3,
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
  [2614] = 4,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 16,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2647] = 8,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 13,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2688] = 11,
    ACTIONS(77), 1,
      sym_keyword_or,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 8,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2735] = 9,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 12,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2778] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 17,
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
  [2809] = 6,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 14,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2846] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 17,
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
  [2877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 17,
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
  [2908] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 17,
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
  [2939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 17,
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
  [2970] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 17,
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
  [3001] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 17,
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
  [3032] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 17,
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
  [3063] = 6,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(105), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 10,
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
  [3099] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(107), 10,
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
  [3130] = 12,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      sym_keyword_in,
    ACTIONS(171), 1,
      sym_keyword_and,
    ACTIONS(173), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3177] = 3,
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
  [3205] = 6,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 12,
      sym_keyword_where,
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
  [3239] = 4,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 14,
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
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3269] = 6,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(105), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 11,
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
  [3303] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(183), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(105), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 10,
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
  [3333] = 9,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 10,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3373] = 3,
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
  [3401] = 10,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
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
    ACTIONS(75), 6,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3443] = 3,
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
  [3471] = 16,
    ACTIONS(197), 1,
      sym_keyword_inner,
    ACTIONS(199), 1,
      sym_keyword_join,
    ACTIONS(201), 1,
      sym_keyword_where,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(205), 1,
      sym_keyword_group_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(90), 1,
      sym_index_hint,
    STATE(152), 1,
      sym_where,
    STATE(212), 1,
      sym_group_by,
    STATE(273), 1,
      sym_order_by,
    STATE(350), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(209), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(89), 2,
      sym_join,
      aux_sym_from_repeat1,
  [3525] = 3,
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
  [3553] = 8,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 11,
      sym_keyword_where,
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
  [3591] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 15,
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
  [3619] = 6,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 11,
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
  [3652] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 3,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(105), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 11,
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
  [3681] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(105), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 11,
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
  [3709] = 8,
    ACTIONS(221), 1,
      sym_keyword_as,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(219), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(217), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [3745] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(105), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 11,
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
  [3773] = 3,
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
  [3798] = 14,
    ACTIONS(197), 1,
      sym_keyword_inner,
    ACTIONS(199), 1,
      sym_keyword_join,
    ACTIONS(201), 1,
      sym_keyword_where,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(205), 1,
      sym_keyword_group_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(167), 1,
      sym_where,
    STATE(213), 1,
      sym_group_by,
    STATE(246), 1,
      sym_order_by,
    STATE(361), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(136), 2,
      sym_join,
      aux_sym_from_repeat1,
  [3845] = 14,
    ACTIONS(197), 1,
      sym_keyword_inner,
    ACTIONS(199), 1,
      sym_keyword_join,
    ACTIONS(201), 1,
      sym_keyword_where,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(205), 1,
      sym_keyword_group_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(167), 1,
      sym_where,
    STATE(213), 1,
      sym_group_by,
    STATE(246), 1,
      sym_order_by,
    STATE(361), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(92), 2,
      sym_join,
      aux_sym_from_repeat1,
  [3892] = 11,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(191), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3933] = 14,
    ACTIONS(197), 1,
      sym_keyword_inner,
    ACTIONS(199), 1,
      sym_keyword_join,
    ACTIONS(201), 1,
      sym_keyword_where,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(205), 1,
      sym_keyword_group_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(151), 1,
      sym_where,
    STATE(205), 1,
      sym_group_by,
    STATE(243), 1,
      sym_order_by,
    STATE(336), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_left,
      sym_keyword_right,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(136), 2,
      sym_join,
      aux_sym_from_repeat1,
  [3980] = 7,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_as,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(235), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [4013] = 3,
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
  [4038] = 6,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(243), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(241), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [4068] = 13,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(143), 1,
      sym_keyword_count,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(488), 1,
      sym__unary_function_name,
    STATE(489), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(190), 2,
      sym_field,
      sym_function_call,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4112] = 13,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(481), 1,
      sym__unary_function_name,
    STATE(482), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(190), 2,
      sym_field,
      sym_function_call,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4156] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(67), 1,
      sym_predicate,
    STATE(179), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(102), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4198] = 10,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(247), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4236] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(73), 1,
      sym_predicate,
    STATE(290), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(106), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4278] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(230), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(91), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4318] = 10,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4356] = 13,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(127), 1,
      sym_keyword_count,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym__count_function,
    STATE(174), 1,
      sym__multi_param_function,
    STATE(196), 1,
      sym__unary_function,
    STATE(400), 1,
      sym__function_name,
    STATE(401), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(190), 2,
      sym_field,
      sym_function_call,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [4400] = 6,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(253), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(251), 8,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_inner,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [4430] = 11,
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
    STATE(49), 1,
      sym_identifier,
    STATE(60), 1,
      sym__literal_string,
    STATE(230), 1,
      sym_where_expression,
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
  [4470] = 10,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      sym_keyword_in,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(191), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4508] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(84), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(106), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4547] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(81), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4584] = 10,
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
    STATE(49), 1,
      sym_identifier,
    STATE(60), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(57), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4621] = 10,
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
    STATE(49), 1,
      sym_identifier,
    STATE(60), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4658] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(36), 1,
      sym_predicate,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4697] = 10,
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
    STATE(49), 1,
      sym_identifier,
    STATE(60), 1,
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
  [4734] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(82), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4771] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(74), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(102), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4810] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(37), 1,
      sym_predicate,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4849] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(71), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4886] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(72), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4923] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(75), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4960] = 10,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym__number,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(17), 1,
      sym_identifier,
    STATE(25), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(30), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4997] = 10,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym__number,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(17), 1,
      sym_identifier,
    STATE(25), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(29), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5034] = 10,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym__number,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(17), 1,
      sym_identifier,
    STATE(25), 1,
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
  [5071] = 10,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym__number,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(17), 1,
      sym_identifier,
    STATE(25), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(27), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5108] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(77), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5145] = 10,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym__number,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(17), 1,
      sym_identifier,
    STATE(25), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5182] = 10,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym__number,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(17), 1,
      sym_identifier,
    STATE(25), 1,
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
  [5219] = 10,
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
    STATE(49), 1,
      sym_identifier,
    STATE(60), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(54), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5256] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    STATE(68), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(102), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5295] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(33), 1,
      sym_predicate,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5334] = 10,
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
    STATE(49), 1,
      sym_identifier,
    STATE(60), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(59), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5371] = 10,
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
    STATE(49), 1,
      sym_identifier,
    STATE(60), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(55), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5408] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(34), 1,
      sym_predicate,
    STATE(41), 1,
      sym__literal_string,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(99), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [5447] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(277), 13,
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
  [5467] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 13,
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
  [5487] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 13,
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
  [5507] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(283), 13,
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
  [5527] = 6,
    ACTIONS(288), 1,
      sym_keyword_inner,
    ACTIONS(291), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(285), 2,
      sym_keyword_left,
      sym_keyword_right,
    STATE(136), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(294), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5554] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(296), 12,
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
  [5573] = 13,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(298), 1,
      sym_keyword_primary,
    ACTIONS(300), 1,
      sym_keyword_key,
    ACTIONS(302), 1,
      sym_keyword_constraint,
    STATE(150), 1,
      sym_identifier,
    STATE(301), 1,
      sym_constraint,
    STATE(363), 1,
      sym__primary_key,
    STATE(364), 1,
      sym_column_definition,
    STATE(365), 1,
      sym__constraint_literal,
    STATE(368), 1,
      sym__primary_key_constraint,
    STATE(372), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5614] = 10,
    ACTIONS(306), 1,
      sym_keyword_primary,
    ACTIONS(308), 1,
      sym_keyword_not,
    ACTIONS(310), 1,
      sym_keyword_auto_increment,
    ACTIONS(312), 1,
      sym_keyword_default,
    STATE(222), 1,
      sym__primary_key,
    STATE(347), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(314), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(170), 2,
      sym__not_null,
      sym__default_null,
  [5649] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(316), 12,
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
  [5668] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(320), 1,
      sym_keyword_as,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(318), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(322), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5695] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(326), 1,
      sym_keyword_as,
    STATE(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(324), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(328), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5722] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(332), 1,
      sym_keyword_as,
    STATE(200), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(330), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(334), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5749] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(338), 1,
      sym_keyword_as,
    STATE(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(336), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(340), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5776] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(344), 1,
      sym_keyword_as,
    STATE(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(342), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(346), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5803] = 8,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(348), 1,
      sym_keyword_as,
    ACTIONS(350), 1,
      anon_sym_DOT,
    STATE(132), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(217), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(219), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [5831] = 3,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(352), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5849] = 3,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(356), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5867] = 3,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(360), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5885] = 7,
    ACTIONS(364), 1,
      sym_keyword_bigint,
    ACTIONS(366), 1,
      sym_keyword_date,
    ACTIONS(368), 1,
      sym_keyword_datetime,
    ACTIONS(370), 1,
      sym_keyword_char,
    ACTIONS(372), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(139), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [5911] = 8,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(205), 1,
      sym_keyword_group_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(207), 1,
      sym_group_by,
    STATE(267), 1,
      sym_order_by,
    STATE(374), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(374), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5938] = 8,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(205), 1,
      sym_keyword_group_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(213), 1,
      sym_group_by,
    STATE(246), 1,
      sym_order_by,
    STATE(361), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5965] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(318), 1,
      sym_keyword_from,
    ACTIONS(320), 1,
      sym_keyword_as,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(322), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5990] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(330), 1,
      sym_keyword_from,
    ACTIONS(332), 1,
      sym_keyword_as,
    STATE(200), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(334), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6015] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(336), 1,
      sym_keyword_from,
    ACTIONS(338), 1,
      sym_keyword_as,
    STATE(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(340), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6040] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(342), 1,
      sym_keyword_from,
    ACTIONS(344), 1,
      sym_keyword_as,
    STATE(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(346), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6065] = 9,
    ACTIONS(306), 1,
      sym_keyword_primary,
    ACTIONS(376), 1,
      sym_keyword_key,
    ACTIONS(378), 1,
      sym_keyword_constraint,
    STATE(348), 1,
      sym_constraint,
    STATE(363), 1,
      sym__primary_key,
    STATE(365), 1,
      sym__constraint_literal,
    STATE(368), 1,
      sym__primary_key_constraint,
    STATE(372), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6094] = 3,
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
  [6111] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(380), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6126] = 8,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(382), 1,
      sym_keyword_default,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    STATE(412), 1,
      sym_identifier,
    STATE(491), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(192), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [6153] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(386), 1,
      sym_keyword_as,
    ACTIONS(388), 1,
      anon_sym_DOT,
    STATE(132), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(217), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [6178] = 8,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(382), 1,
      sym_keyword_default,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(412), 1,
      sym_identifier,
    STATE(413), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(192), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [6205] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(324), 1,
      sym_keyword_from,
    ACTIONS(326), 1,
      sym_keyword_as,
    STATE(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6230] = 8,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(232), 1,
      sym_identifier,
    STATE(297), 1,
      sym_table_reference,
    STATE(382), 1,
      sym__table_references,
    STATE(385), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(383), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [6257] = 3,
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
  [6274] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(392), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6289] = 8,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(205), 1,
      sym_keyword_group_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(205), 1,
      sym_group_by,
    STATE(243), 1,
      sym_order_by,
    STATE(336), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6316] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(394), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6331] = 7,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(396), 1,
      sym_keyword_as,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(237), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [6356] = 7,
    ACTIONS(306), 1,
      sym_keyword_primary,
    ACTIONS(398), 1,
      sym_keyword_auto_increment,
    STATE(225), 1,
      sym__primary_key,
    STATE(362), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(400), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6381] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(402), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(404), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6409] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(406), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6423] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(406), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6437] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(408), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6451] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(410), 1,
      sym_keyword_as,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [6473] = 4,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(412), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6491] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6505] = 8,
    ACTIONS(201), 1,
      sym_keyword_where,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      sym_where,
    STATE(314), 1,
      sym_order_by,
    STATE(399), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6531] = 6,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(243), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [6553] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(421), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6567] = 7,
    ACTIONS(423), 1,
      sym_keyword_default,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      anon_sym_BQUOTE,
    ACTIONS(431), 1,
      sym__identifier,
    STATE(412), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [6591] = 8,
    ACTIONS(201), 1,
      sym_keyword_where,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      sym_where,
    STATE(276), 1,
      sym_order_by,
    STATE(492), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6617] = 4,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(436), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6635] = 4,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(440), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(442), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6667] = 6,
    ACTIONS(306), 1,
      sym_keyword_primary,
    STATE(225), 1,
      sym__primary_key,
    STATE(362), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(400), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6689] = 6,
    ACTIONS(306), 1,
      sym_keyword_primary,
    STATE(220), 1,
      sym__primary_key,
    STATE(346), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(444), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6711] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(41), 1,
      sym__literal_string,
    STATE(284), 1,
      sym_select,
    STATE(285), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(412), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6751] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(41), 1,
      sym__literal_string,
    STATE(304), 1,
      sym_literal,
    STATE(305), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6777] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(382), 1,
      sym_keyword_default,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    STATE(412), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(182), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [6801] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(41), 1,
      sym__literal_string,
    STATE(330), 1,
      sym_literal,
    STATE(332), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6827] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(448), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6841] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(450), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6855] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(406), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6869] = 3,
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
  [6885] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(452), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6899] = 3,
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
  [6915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(454), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6929] = 6,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(251), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(253), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [6951] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(456), 1,
      sym_keyword_if,
    STATE(232), 1,
      sym_identifier,
    STATE(248), 1,
      sym__if_not_exists,
    STATE(367), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6974] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(338), 1,
      sym_keyword_as,
    STATE(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6995] = 4,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(458), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [7012] = 6,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(267), 1,
      sym_order_by,
    STATE(374), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(374), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7033] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(460), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7046] = 6,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(249), 1,
      sym_order_by,
    STATE(358), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(462), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7067] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(326), 1,
      sym_keyword_as,
    STATE(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7088] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(464), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7101] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(251), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [7120] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [7139] = 6,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(246), 1,
      sym_order_by,
    STATE(361), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7160] = 6,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(243), 1,
      sym_order_by,
    STATE(336), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7181] = 4,
    ACTIONS(468), 1,
      sym_keyword_having,
    STATE(240), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(466), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7198] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(344), 1,
      sym_keyword_as,
    STATE(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(346), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7219] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(332), 1,
      sym_keyword_as,
    STATE(200), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(334), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7240] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(320), 1,
      sym_keyword_as,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(322), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7261] = 4,
    STATE(325), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(470), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7278] = 4,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [7295] = 4,
    STATE(338), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(475), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7311] = 4,
    STATE(337), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(477), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7327] = 4,
    STATE(362), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(400), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7343] = 4,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(436), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7359] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7371] = 4,
    STATE(346), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(444), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7387] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(41), 1,
      sym__literal_string,
    STATE(285), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7407] = 4,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(440), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7423] = 6,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    STATE(319), 1,
      sym_order_by,
    STATE(405), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7443] = 6,
    ACTIONS(203), 1,
      sym_keyword_order_by,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    STATE(299), 1,
      sym_order_by,
    STATE(390), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7463] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7475] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(232), 1,
      sym_identifier,
    STATE(302), 1,
      sym_table_reference,
    STATE(490), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7495] = 3,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(489), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [7509] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(41), 1,
      sym__literal_string,
    STATE(237), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7529] = 4,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(412), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7545] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(41), 1,
      sym__literal_string,
    STATE(375), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7565] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(41), 1,
      sym__literal_string,
    STATE(351), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7585] = 4,
    ACTIONS(496), 1,
      sym_keyword_offset,
    STATE(344), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(498), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7600] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(353), 1,
      sym_identifier,
    STATE(377), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7617] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(321), 1,
      sym__column_without_order,
    STATE(353), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7634] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(500), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7645] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(221), 1,
      sym_identifier,
    STATE(340), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7662] = 5,
    ACTIONS(502), 1,
      anon_sym_BQUOTE,
    ACTIONS(504), 1,
      sym__identifier,
    STATE(79), 1,
      sym_table_expression,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7679] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(374), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(374), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7694] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(506), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(508), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [7707] = 5,
    ACTIONS(510), 1,
      anon_sym_BQUOTE,
    ACTIONS(512), 1,
      sym__identifier,
    STATE(161), 1,
      sym_identifier,
    STATE(251), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7724] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(336), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7739] = 5,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_column_definitions_repeat1,
    STATE(464), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7756] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(232), 1,
      sym_identifier,
    STATE(355), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7773] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(345), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(518), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7788] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(520), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(522), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [7801] = 4,
    ACTIONS(524), 1,
      sym_keyword_on,
    STATE(406), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(209), 2,
      sym_keyword_force,
      sym_keyword_use,
  [7816] = 5,
    ACTIONS(510), 1,
      anon_sym_BQUOTE,
    ACTIONS(512), 1,
      sym__identifier,
    STATE(161), 1,
      sym_identifier,
    STATE(254), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7833] = 5,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      sym__identifier,
    STATE(146), 1,
      sym_identifier,
    STATE(183), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7850] = 4,
    ACTIONS(530), 1,
      sym_keyword_on,
    STATE(485), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(209), 2,
      sym_keyword_force,
      sym_keyword_use,
  [7865] = 5,
    ACTIONS(510), 1,
      anon_sym_BQUOTE,
    ACTIONS(512), 1,
      sym__identifier,
    STATE(161), 1,
      sym_identifier,
    STATE(270), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(532), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7893] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(534), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(536), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [7906] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(150), 1,
      sym_identifier,
    STATE(364), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7923] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(538), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(540), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [7936] = 5,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_column_definitions_repeat1,
    STATE(392), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7953] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(221), 1,
      sym_identifier,
    STATE(320), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7970] = 4,
    ACTIONS(544), 1,
      sym_keyword_from,
    STATE(378), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(209), 2,
      sym_keyword_force,
      sym_keyword_use,
  [7985] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [7998] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(546), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(548), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [8011] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [8024] = 4,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(458), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [8039] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(358), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(462), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8054] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(550), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [8065] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(150), 1,
      sym_identifier,
    STATE(260), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8082] = 4,
    ACTIONS(552), 1,
      sym_keyword_on,
    STATE(447), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(209), 2,
      sym_keyword_force,
      sym_keyword_use,
  [8097] = 4,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [8112] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(232), 1,
      sym_identifier,
    STATE(359), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8129] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    STATE(361), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8144] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8154] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(194), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8168] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    STATE(390), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8182] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8196] = 4,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8210] = 4,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8224] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(566), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8234] = 4,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8248] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8262] = 4,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8276] = 4,
    ACTIONS(573), 1,
      sym_keyword_from,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8290] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8304] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(178), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8318] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8332] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8346] = 4,
    ACTIONS(573), 1,
      sym_keyword_from,
    ACTIONS(579), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8360] = 4,
    ACTIONS(581), 1,
      sym_keyword_where,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    STATE(398), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8374] = 4,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8388] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(444), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8402] = 4,
    ACTIONS(590), 1,
      sym_keyword_set,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8416] = 4,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(214), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8430] = 4,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8444] = 4,
    ACTIONS(502), 1,
      anon_sym_BQUOTE,
    ACTIONS(504), 1,
      sym__identifier,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8458] = 4,
    ACTIONS(600), 1,
      sym_keyword_set,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8472] = 4,
    ACTIONS(604), 1,
      anon_sym_BQUOTE,
    ACTIONS(606), 1,
      sym__identifier,
    STATE(244), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8486] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    STATE(435), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8500] = 4,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8514] = 4,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8528] = 4,
    ACTIONS(616), 1,
      sym_keyword_values,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    STATE(432), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8542] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8556] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8570] = 4,
    ACTIONS(573), 1,
      sym_keyword_from,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8584] = 4,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8598] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(369), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8612] = 4,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8626] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8640] = 4,
    ACTIONS(510), 1,
      anon_sym_BQUOTE,
    ACTIONS(512), 1,
      sym__identifier,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(630), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8664] = 4,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      sym_keyword_set,
    STATE(293), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8678] = 4,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8692] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    STATE(405), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8706] = 4,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8720] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(186), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8734] = 4,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8748] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8762] = 4,
    ACTIONS(207), 1,
      sym_keyword_limit,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    STATE(494), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8776] = 4,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8790] = 4,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8804] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(647), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8814] = 4,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8828] = 4,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(658), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8852] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8866] = 4,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(265), 1,
      sym__identifier,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8880] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8894] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(245), 1,
      sym__identifier,
    STATE(268), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8908] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8922] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(664), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8932] = 4,
    ACTIONS(573), 1,
      sym_keyword_from,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8946] = 4,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8960] = 4,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      sym__identifier,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8974] = 4,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8988] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(374), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8997] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(675), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9006] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(677), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9015] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(679), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9024] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(668), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9033] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(681), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9042] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(683), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9051] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(685), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [9060] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(687), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9069] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(689), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9078] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(475), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9087] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(400), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(649), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9105] = 3,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    STATE(409), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9116] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9125] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(634), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9134] = 3,
    ACTIONS(693), 1,
      sym_keyword_for,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9145] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(697), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9154] = 3,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9165] = 3,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9176] = 3,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    STATE(396), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9187] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(703), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9196] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(518), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9205] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(590), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [9214] = 3,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9225] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9234] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(444), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9243] = 3,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    STATE(366), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9254] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(585), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9263] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(705), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9272] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(707), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9281] = 3,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9292] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(709), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9301] = 3,
    ACTIONS(306), 1,
      sym_keyword_primary,
    STATE(354), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9312] = 3,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9323] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(711), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9332] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(705), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9341] = 3,
    ACTIONS(713), 1,
      sym_keyword_from,
    STATE(437), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9352] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(462), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9361] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(715), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9370] = 3,
    ACTIONS(717), 1,
      sym_keyword_outer,
    ACTIONS(719), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9381] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(721), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9390] = 2,
    ACTIONS(723), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9398] = 2,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9406] = 2,
    ACTIONS(727), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9414] = 2,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9422] = 2,
    ACTIONS(731), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9430] = 2,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9438] = 2,
    ACTIONS(735), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9446] = 2,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9454] = 2,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9462] = 2,
    ACTIONS(741), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9470] = 2,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9478] = 2,
    ACTIONS(745), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9486] = 2,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9494] = 2,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9502] = 2,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9510] = 2,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9518] = 2,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9526] = 2,
    ACTIONS(753), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9534] = 2,
    ACTIONS(755), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9542] = 2,
    ACTIONS(757), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9550] = 2,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9558] = 2,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9566] = 2,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9574] = 2,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9582] = 2,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9590] = 2,
    ACTIONS(767), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9598] = 2,
    ACTIONS(769), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9606] = 2,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9614] = 2,
    ACTIONS(530), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9622] = 2,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9630] = 2,
    ACTIONS(773), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9638] = 2,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9646] = 2,
    ACTIONS(779), 1,
      aux_sym__literal_string_token2,
    ACTIONS(777), 2,
      sym_comment,
      sym_marginalia,
  [9654] = 2,
    ACTIONS(781), 1,
      aux_sym__literal_string_token1,
    ACTIONS(777), 2,
      sym_comment,
      sym_marginalia,
  [9662] = 2,
    ACTIONS(783), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9670] = 2,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9678] = 2,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9686] = 2,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9694] = 2,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9702] = 2,
    ACTIONS(791), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9710] = 2,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9718] = 2,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9726] = 2,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9734] = 2,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9742] = 2,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9750] = 2,
    ACTIONS(801), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9758] = 2,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9766] = 2,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9774] = 2,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9782] = 2,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9790] = 2,
    ACTIONS(811), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9798] = 2,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9806] = 2,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9814] = 2,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9822] = 2,
    ACTIONS(817), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9830] = 2,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9838] = 2,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9846] = 2,
    ACTIONS(823), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9854] = 2,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9862] = 2,
    ACTIONS(827), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9870] = 2,
    ACTIONS(719), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9878] = 2,
    ACTIONS(829), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9886] = 2,
    ACTIONS(831), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9894] = 2,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9902] = 2,
    ACTIONS(833), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9910] = 2,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9918] = 2,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9926] = 2,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9934] = 2,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9942] = 2,
    ACTIONS(843), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9950] = 2,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9958] = 2,
    ACTIONS(847), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9966] = 2,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9974] = 2,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9982] = 2,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9990] = 2,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [9998] = 2,
    ACTIONS(857), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10006] = 2,
    ACTIONS(859), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10014] = 2,
    ACTIONS(861), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10022] = 2,
    ACTIONS(863), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10030] = 2,
    ACTIONS(865), 1,
      aux_sym__literal_string_token1,
    ACTIONS(777), 2,
      sym_comment,
      sym_marginalia,
  [10038] = 2,
    ACTIONS(867), 1,
      aux_sym__literal_string_token2,
    ACTIONS(777), 2,
      sym_comment,
      sym_marginalia,
  [10046] = 2,
    ACTIONS(869), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10054] = 2,
    ACTIONS(871), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10062] = 2,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10070] = 2,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10078] = 2,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10086] = 2,
    ACTIONS(879), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10094] = 2,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10102] = 2,
    ACTIONS(883), 1,
      aux_sym__literal_string_token1,
    ACTIONS(777), 2,
      sym_comment,
      sym_marginalia,
  [10110] = 2,
    ACTIONS(885), 1,
      aux_sym__literal_string_token2,
    ACTIONS(777), 2,
      sym_comment,
      sym_marginalia,
  [10118] = 2,
    ACTIONS(887), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10126] = 2,
    ACTIONS(889), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10134] = 2,
    ACTIONS(891), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10142] = 2,
    ACTIONS(893), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10150] = 2,
    ACTIONS(895), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10158] = 2,
    ACTIONS(897), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10166] = 2,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10174] = 2,
    ACTIONS(901), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10182] = 2,
    ACTIONS(903), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10190] = 2,
    ACTIONS(905), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10198] = 2,
    ACTIONS(907), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10206] = 2,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10214] = 2,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10222] = 2,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10230] = 2,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10238] = 2,
    ACTIONS(917), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10246] = 2,
    ACTIONS(552), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10254] = 2,
    ACTIONS(919), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10262] = 2,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10270] = 2,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10278] = 2,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10286] = 2,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10294] = 2,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10302] = 2,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10310] = 2,
    ACTIONS(931), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10318] = 2,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [10326] = 2,
    ACTIONS(935), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 320,
  [SMALL_STATE(9)] = 397,
  [SMALL_STATE(10)] = 471,
  [SMALL_STATE(11)] = 545,
  [SMALL_STATE(12)] = 619,
  [SMALL_STATE(13)] = 693,
  [SMALL_STATE(14)] = 767,
  [SMALL_STATE(15)] = 841,
  [SMALL_STATE(16)] = 912,
  [SMALL_STATE(17)] = 983,
  [SMALL_STATE(18)] = 1020,
  [SMALL_STATE(19)] = 1091,
  [SMALL_STATE(20)] = 1162,
  [SMALL_STATE(21)] = 1233,
  [SMALL_STATE(22)] = 1304,
  [SMALL_STATE(23)] = 1375,
  [SMALL_STATE(24)] = 1412,
  [SMALL_STATE(25)] = 1446,
  [SMALL_STATE(26)] = 1480,
  [SMALL_STATE(27)] = 1520,
  [SMALL_STATE(28)] = 1556,
  [SMALL_STATE(29)] = 1602,
  [SMALL_STATE(30)] = 1652,
  [SMALL_STATE(31)] = 1696,
  [SMALL_STATE(32)] = 1730,
  [SMALL_STATE(33)] = 1764,
  [SMALL_STATE(34)] = 1800,
  [SMALL_STATE(35)] = 1836,
  [SMALL_STATE(36)] = 1870,
  [SMALL_STATE(37)] = 1906,
  [SMALL_STATE(38)] = 1942,
  [SMALL_STATE(39)] = 1976,
  [SMALL_STATE(40)] = 2010,
  [SMALL_STATE(41)] = 2044,
  [SMALL_STATE(42)] = 2077,
  [SMALL_STATE(43)] = 2146,
  [SMALL_STATE(44)] = 2181,
  [SMALL_STATE(45)] = 2214,
  [SMALL_STATE(46)] = 2249,
  [SMALL_STATE(47)] = 2318,
  [SMALL_STATE(48)] = 2352,
  [SMALL_STATE(49)] = 2384,
  [SMALL_STATE(50)] = 2418,
  [SMALL_STATE(51)] = 2484,
  [SMALL_STATE(52)] = 2516,
  [SMALL_STATE(53)] = 2582,
  [SMALL_STATE(54)] = 2614,
  [SMALL_STATE(55)] = 2647,
  [SMALL_STATE(56)] = 2688,
  [SMALL_STATE(57)] = 2735,
  [SMALL_STATE(58)] = 2778,
  [SMALL_STATE(59)] = 2809,
  [SMALL_STATE(60)] = 2846,
  [SMALL_STATE(61)] = 2877,
  [SMALL_STATE(62)] = 2908,
  [SMALL_STATE(63)] = 2939,
  [SMALL_STATE(64)] = 2970,
  [SMALL_STATE(65)] = 3001,
  [SMALL_STATE(66)] = 3032,
  [SMALL_STATE(67)] = 3063,
  [SMALL_STATE(68)] = 3099,
  [SMALL_STATE(69)] = 3130,
  [SMALL_STATE(70)] = 3177,
  [SMALL_STATE(71)] = 3205,
  [SMALL_STATE(72)] = 3239,
  [SMALL_STATE(73)] = 3269,
  [SMALL_STATE(74)] = 3303,
  [SMALL_STATE(75)] = 3333,
  [SMALL_STATE(76)] = 3373,
  [SMALL_STATE(77)] = 3401,
  [SMALL_STATE(78)] = 3443,
  [SMALL_STATE(79)] = 3471,
  [SMALL_STATE(80)] = 3525,
  [SMALL_STATE(81)] = 3553,
  [SMALL_STATE(82)] = 3591,
  [SMALL_STATE(83)] = 3619,
  [SMALL_STATE(84)] = 3652,
  [SMALL_STATE(85)] = 3681,
  [SMALL_STATE(86)] = 3709,
  [SMALL_STATE(87)] = 3745,
  [SMALL_STATE(88)] = 3773,
  [SMALL_STATE(89)] = 3798,
  [SMALL_STATE(90)] = 3845,
  [SMALL_STATE(91)] = 3892,
  [SMALL_STATE(92)] = 3933,
  [SMALL_STATE(93)] = 3980,
  [SMALL_STATE(94)] = 4013,
  [SMALL_STATE(95)] = 4038,
  [SMALL_STATE(96)] = 4068,
  [SMALL_STATE(97)] = 4112,
  [SMALL_STATE(98)] = 4156,
  [SMALL_STATE(99)] = 4198,
  [SMALL_STATE(100)] = 4236,
  [SMALL_STATE(101)] = 4278,
  [SMALL_STATE(102)] = 4318,
  [SMALL_STATE(103)] = 4356,
  [SMALL_STATE(104)] = 4400,
  [SMALL_STATE(105)] = 4430,
  [SMALL_STATE(106)] = 4470,
  [SMALL_STATE(107)] = 4508,
  [SMALL_STATE(108)] = 4547,
  [SMALL_STATE(109)] = 4584,
  [SMALL_STATE(110)] = 4621,
  [SMALL_STATE(111)] = 4658,
  [SMALL_STATE(112)] = 4697,
  [SMALL_STATE(113)] = 4734,
  [SMALL_STATE(114)] = 4771,
  [SMALL_STATE(115)] = 4810,
  [SMALL_STATE(116)] = 4849,
  [SMALL_STATE(117)] = 4886,
  [SMALL_STATE(118)] = 4923,
  [SMALL_STATE(119)] = 4960,
  [SMALL_STATE(120)] = 4997,
  [SMALL_STATE(121)] = 5034,
  [SMALL_STATE(122)] = 5071,
  [SMALL_STATE(123)] = 5108,
  [SMALL_STATE(124)] = 5145,
  [SMALL_STATE(125)] = 5182,
  [SMALL_STATE(126)] = 5219,
  [SMALL_STATE(127)] = 5256,
  [SMALL_STATE(128)] = 5295,
  [SMALL_STATE(129)] = 5334,
  [SMALL_STATE(130)] = 5371,
  [SMALL_STATE(131)] = 5408,
  [SMALL_STATE(132)] = 5447,
  [SMALL_STATE(133)] = 5467,
  [SMALL_STATE(134)] = 5487,
  [SMALL_STATE(135)] = 5507,
  [SMALL_STATE(136)] = 5527,
  [SMALL_STATE(137)] = 5554,
  [SMALL_STATE(138)] = 5573,
  [SMALL_STATE(139)] = 5614,
  [SMALL_STATE(140)] = 5649,
  [SMALL_STATE(141)] = 5668,
  [SMALL_STATE(142)] = 5695,
  [SMALL_STATE(143)] = 5722,
  [SMALL_STATE(144)] = 5749,
  [SMALL_STATE(145)] = 5776,
  [SMALL_STATE(146)] = 5803,
  [SMALL_STATE(147)] = 5831,
  [SMALL_STATE(148)] = 5849,
  [SMALL_STATE(149)] = 5867,
  [SMALL_STATE(150)] = 5885,
  [SMALL_STATE(151)] = 5911,
  [SMALL_STATE(152)] = 5938,
  [SMALL_STATE(153)] = 5965,
  [SMALL_STATE(154)] = 5990,
  [SMALL_STATE(155)] = 6015,
  [SMALL_STATE(156)] = 6040,
  [SMALL_STATE(157)] = 6065,
  [SMALL_STATE(158)] = 6094,
  [SMALL_STATE(159)] = 6111,
  [SMALL_STATE(160)] = 6126,
  [SMALL_STATE(161)] = 6153,
  [SMALL_STATE(162)] = 6178,
  [SMALL_STATE(163)] = 6205,
  [SMALL_STATE(164)] = 6230,
  [SMALL_STATE(165)] = 6257,
  [SMALL_STATE(166)] = 6274,
  [SMALL_STATE(167)] = 6289,
  [SMALL_STATE(168)] = 6316,
  [SMALL_STATE(169)] = 6331,
  [SMALL_STATE(170)] = 6356,
  [SMALL_STATE(171)] = 6381,
  [SMALL_STATE(172)] = 6395,
  [SMALL_STATE(173)] = 6409,
  [SMALL_STATE(174)] = 6423,
  [SMALL_STATE(175)] = 6437,
  [SMALL_STATE(176)] = 6451,
  [SMALL_STATE(177)] = 6473,
  [SMALL_STATE(178)] = 6491,
  [SMALL_STATE(179)] = 6505,
  [SMALL_STATE(180)] = 6531,
  [SMALL_STATE(181)] = 6553,
  [SMALL_STATE(182)] = 6567,
  [SMALL_STATE(183)] = 6591,
  [SMALL_STATE(184)] = 6617,
  [SMALL_STATE(185)] = 6635,
  [SMALL_STATE(186)] = 6653,
  [SMALL_STATE(187)] = 6667,
  [SMALL_STATE(188)] = 6689,
  [SMALL_STATE(189)] = 6711,
  [SMALL_STATE(190)] = 6737,
  [SMALL_STATE(191)] = 6751,
  [SMALL_STATE(192)] = 6777,
  [SMALL_STATE(193)] = 6801,
  [SMALL_STATE(194)] = 6827,
  [SMALL_STATE(195)] = 6841,
  [SMALL_STATE(196)] = 6855,
  [SMALL_STATE(197)] = 6869,
  [SMALL_STATE(198)] = 6885,
  [SMALL_STATE(199)] = 6899,
  [SMALL_STATE(200)] = 6915,
  [SMALL_STATE(201)] = 6929,
  [SMALL_STATE(202)] = 6951,
  [SMALL_STATE(203)] = 6974,
  [SMALL_STATE(204)] = 6995,
  [SMALL_STATE(205)] = 7012,
  [SMALL_STATE(206)] = 7033,
  [SMALL_STATE(207)] = 7046,
  [SMALL_STATE(208)] = 7067,
  [SMALL_STATE(209)] = 7088,
  [SMALL_STATE(210)] = 7101,
  [SMALL_STATE(211)] = 7120,
  [SMALL_STATE(212)] = 7139,
  [SMALL_STATE(213)] = 7160,
  [SMALL_STATE(214)] = 7181,
  [SMALL_STATE(215)] = 7198,
  [SMALL_STATE(216)] = 7219,
  [SMALL_STATE(217)] = 7240,
  [SMALL_STATE(218)] = 7261,
  [SMALL_STATE(219)] = 7278,
  [SMALL_STATE(220)] = 7295,
  [SMALL_STATE(221)] = 7311,
  [SMALL_STATE(222)] = 7327,
  [SMALL_STATE(223)] = 7343,
  [SMALL_STATE(224)] = 7359,
  [SMALL_STATE(225)] = 7371,
  [SMALL_STATE(226)] = 7387,
  [SMALL_STATE(227)] = 7407,
  [SMALL_STATE(228)] = 7423,
  [SMALL_STATE(229)] = 7443,
  [SMALL_STATE(230)] = 7463,
  [SMALL_STATE(231)] = 7475,
  [SMALL_STATE(232)] = 7495,
  [SMALL_STATE(233)] = 7509,
  [SMALL_STATE(234)] = 7529,
  [SMALL_STATE(235)] = 7545,
  [SMALL_STATE(236)] = 7565,
  [SMALL_STATE(237)] = 7585,
  [SMALL_STATE(238)] = 7600,
  [SMALL_STATE(239)] = 7617,
  [SMALL_STATE(240)] = 7634,
  [SMALL_STATE(241)] = 7645,
  [SMALL_STATE(242)] = 7662,
  [SMALL_STATE(243)] = 7679,
  [SMALL_STATE(244)] = 7694,
  [SMALL_STATE(245)] = 7707,
  [SMALL_STATE(246)] = 7724,
  [SMALL_STATE(247)] = 7739,
  [SMALL_STATE(248)] = 7756,
  [SMALL_STATE(249)] = 7773,
  [SMALL_STATE(250)] = 7788,
  [SMALL_STATE(251)] = 7801,
  [SMALL_STATE(252)] = 7816,
  [SMALL_STATE(253)] = 7833,
  [SMALL_STATE(254)] = 7850,
  [SMALL_STATE(255)] = 7865,
  [SMALL_STATE(256)] = 7882,
  [SMALL_STATE(257)] = 7893,
  [SMALL_STATE(258)] = 7906,
  [SMALL_STATE(259)] = 7923,
  [SMALL_STATE(260)] = 7936,
  [SMALL_STATE(261)] = 7953,
  [SMALL_STATE(262)] = 7970,
  [SMALL_STATE(263)] = 7985,
  [SMALL_STATE(264)] = 7998,
  [SMALL_STATE(265)] = 8011,
  [SMALL_STATE(266)] = 8024,
  [SMALL_STATE(267)] = 8039,
  [SMALL_STATE(268)] = 8054,
  [SMALL_STATE(269)] = 8065,
  [SMALL_STATE(270)] = 8082,
  [SMALL_STATE(271)] = 8097,
  [SMALL_STATE(272)] = 8112,
  [SMALL_STATE(273)] = 8129,
  [SMALL_STATE(274)] = 8144,
  [SMALL_STATE(275)] = 8154,
  [SMALL_STATE(276)] = 8168,
  [SMALL_STATE(277)] = 8182,
  [SMALL_STATE(278)] = 8196,
  [SMALL_STATE(279)] = 8210,
  [SMALL_STATE(280)] = 8224,
  [SMALL_STATE(281)] = 8234,
  [SMALL_STATE(282)] = 8248,
  [SMALL_STATE(283)] = 8262,
  [SMALL_STATE(284)] = 8276,
  [SMALL_STATE(285)] = 8290,
  [SMALL_STATE(286)] = 8304,
  [SMALL_STATE(287)] = 8318,
  [SMALL_STATE(288)] = 8332,
  [SMALL_STATE(289)] = 8346,
  [SMALL_STATE(290)] = 8360,
  [SMALL_STATE(291)] = 8374,
  [SMALL_STATE(292)] = 8388,
  [SMALL_STATE(293)] = 8402,
  [SMALL_STATE(294)] = 8416,
  [SMALL_STATE(295)] = 8430,
  [SMALL_STATE(296)] = 8444,
  [SMALL_STATE(297)] = 8458,
  [SMALL_STATE(298)] = 8472,
  [SMALL_STATE(299)] = 8486,
  [SMALL_STATE(300)] = 8500,
  [SMALL_STATE(301)] = 8514,
  [SMALL_STATE(302)] = 8528,
  [SMALL_STATE(303)] = 8542,
  [SMALL_STATE(304)] = 8556,
  [SMALL_STATE(305)] = 8570,
  [SMALL_STATE(306)] = 8584,
  [SMALL_STATE(307)] = 8598,
  [SMALL_STATE(308)] = 8612,
  [SMALL_STATE(309)] = 8626,
  [SMALL_STATE(310)] = 8640,
  [SMALL_STATE(311)] = 8654,
  [SMALL_STATE(312)] = 8664,
  [SMALL_STATE(313)] = 8678,
  [SMALL_STATE(314)] = 8692,
  [SMALL_STATE(315)] = 8706,
  [SMALL_STATE(316)] = 8720,
  [SMALL_STATE(317)] = 8734,
  [SMALL_STATE(318)] = 8748,
  [SMALL_STATE(319)] = 8762,
  [SMALL_STATE(320)] = 8776,
  [SMALL_STATE(321)] = 8790,
  [SMALL_STATE(322)] = 8804,
  [SMALL_STATE(323)] = 8814,
  [SMALL_STATE(324)] = 8828,
  [SMALL_STATE(325)] = 8842,
  [SMALL_STATE(326)] = 8852,
  [SMALL_STATE(327)] = 8866,
  [SMALL_STATE(328)] = 8880,
  [SMALL_STATE(329)] = 8894,
  [SMALL_STATE(330)] = 8908,
  [SMALL_STATE(331)] = 8922,
  [SMALL_STATE(332)] = 8932,
  [SMALL_STATE(333)] = 8946,
  [SMALL_STATE(334)] = 8960,
  [SMALL_STATE(335)] = 8974,
  [SMALL_STATE(336)] = 8988,
  [SMALL_STATE(337)] = 8997,
  [SMALL_STATE(338)] = 9006,
  [SMALL_STATE(339)] = 9015,
  [SMALL_STATE(340)] = 9024,
  [SMALL_STATE(341)] = 9033,
  [SMALL_STATE(342)] = 9042,
  [SMALL_STATE(343)] = 9051,
  [SMALL_STATE(344)] = 9060,
  [SMALL_STATE(345)] = 9069,
  [SMALL_STATE(346)] = 9078,
  [SMALL_STATE(347)] = 9087,
  [SMALL_STATE(348)] = 9096,
  [SMALL_STATE(349)] = 9105,
  [SMALL_STATE(350)] = 9116,
  [SMALL_STATE(351)] = 9125,
  [SMALL_STATE(352)] = 9134,
  [SMALL_STATE(353)] = 9145,
  [SMALL_STATE(354)] = 9154,
  [SMALL_STATE(355)] = 9165,
  [SMALL_STATE(356)] = 9176,
  [SMALL_STATE(357)] = 9187,
  [SMALL_STATE(358)] = 9196,
  [SMALL_STATE(359)] = 9205,
  [SMALL_STATE(360)] = 9214,
  [SMALL_STATE(361)] = 9225,
  [SMALL_STATE(362)] = 9234,
  [SMALL_STATE(363)] = 9243,
  [SMALL_STATE(364)] = 9254,
  [SMALL_STATE(365)] = 9263,
  [SMALL_STATE(366)] = 9272,
  [SMALL_STATE(367)] = 9281,
  [SMALL_STATE(368)] = 9292,
  [SMALL_STATE(369)] = 9301,
  [SMALL_STATE(370)] = 9312,
  [SMALL_STATE(371)] = 9323,
  [SMALL_STATE(372)] = 9332,
  [SMALL_STATE(373)] = 9341,
  [SMALL_STATE(374)] = 9352,
  [SMALL_STATE(375)] = 9361,
  [SMALL_STATE(376)] = 9370,
  [SMALL_STATE(377)] = 9381,
  [SMALL_STATE(378)] = 9390,
  [SMALL_STATE(379)] = 9398,
  [SMALL_STATE(380)] = 9406,
  [SMALL_STATE(381)] = 9414,
  [SMALL_STATE(382)] = 9422,
  [SMALL_STATE(383)] = 9430,
  [SMALL_STATE(384)] = 9438,
  [SMALL_STATE(385)] = 9446,
  [SMALL_STATE(386)] = 9454,
  [SMALL_STATE(387)] = 9462,
  [SMALL_STATE(388)] = 9470,
  [SMALL_STATE(389)] = 9478,
  [SMALL_STATE(390)] = 9486,
  [SMALL_STATE(391)] = 9494,
  [SMALL_STATE(392)] = 9502,
  [SMALL_STATE(393)] = 9510,
  [SMALL_STATE(394)] = 9518,
  [SMALL_STATE(395)] = 9526,
  [SMALL_STATE(396)] = 9534,
  [SMALL_STATE(397)] = 9542,
  [SMALL_STATE(398)] = 9550,
  [SMALL_STATE(399)] = 9558,
  [SMALL_STATE(400)] = 9566,
  [SMALL_STATE(401)] = 9574,
  [SMALL_STATE(402)] = 9582,
  [SMALL_STATE(403)] = 9590,
  [SMALL_STATE(404)] = 9598,
  [SMALL_STATE(405)] = 9606,
  [SMALL_STATE(406)] = 9614,
  [SMALL_STATE(407)] = 9622,
  [SMALL_STATE(408)] = 9630,
  [SMALL_STATE(409)] = 9638,
  [SMALL_STATE(410)] = 9646,
  [SMALL_STATE(411)] = 9654,
  [SMALL_STATE(412)] = 9662,
  [SMALL_STATE(413)] = 9670,
  [SMALL_STATE(414)] = 9678,
  [SMALL_STATE(415)] = 9686,
  [SMALL_STATE(416)] = 9694,
  [SMALL_STATE(417)] = 9702,
  [SMALL_STATE(418)] = 9710,
  [SMALL_STATE(419)] = 9718,
  [SMALL_STATE(420)] = 9726,
  [SMALL_STATE(421)] = 9734,
  [SMALL_STATE(422)] = 9742,
  [SMALL_STATE(423)] = 9750,
  [SMALL_STATE(424)] = 9758,
  [SMALL_STATE(425)] = 9766,
  [SMALL_STATE(426)] = 9774,
  [SMALL_STATE(427)] = 9782,
  [SMALL_STATE(428)] = 9790,
  [SMALL_STATE(429)] = 9798,
  [SMALL_STATE(430)] = 9806,
  [SMALL_STATE(431)] = 9814,
  [SMALL_STATE(432)] = 9822,
  [SMALL_STATE(433)] = 9830,
  [SMALL_STATE(434)] = 9838,
  [SMALL_STATE(435)] = 9846,
  [SMALL_STATE(436)] = 9854,
  [SMALL_STATE(437)] = 9862,
  [SMALL_STATE(438)] = 9870,
  [SMALL_STATE(439)] = 9878,
  [SMALL_STATE(440)] = 9886,
  [SMALL_STATE(441)] = 9894,
  [SMALL_STATE(442)] = 9902,
  [SMALL_STATE(443)] = 9910,
  [SMALL_STATE(444)] = 9918,
  [SMALL_STATE(445)] = 9926,
  [SMALL_STATE(446)] = 9934,
  [SMALL_STATE(447)] = 9942,
  [SMALL_STATE(448)] = 9950,
  [SMALL_STATE(449)] = 9958,
  [SMALL_STATE(450)] = 9966,
  [SMALL_STATE(451)] = 9974,
  [SMALL_STATE(452)] = 9982,
  [SMALL_STATE(453)] = 9990,
  [SMALL_STATE(454)] = 9998,
  [SMALL_STATE(455)] = 10006,
  [SMALL_STATE(456)] = 10014,
  [SMALL_STATE(457)] = 10022,
  [SMALL_STATE(458)] = 10030,
  [SMALL_STATE(459)] = 10038,
  [SMALL_STATE(460)] = 10046,
  [SMALL_STATE(461)] = 10054,
  [SMALL_STATE(462)] = 10062,
  [SMALL_STATE(463)] = 10070,
  [SMALL_STATE(464)] = 10078,
  [SMALL_STATE(465)] = 10086,
  [SMALL_STATE(466)] = 10094,
  [SMALL_STATE(467)] = 10102,
  [SMALL_STATE(468)] = 10110,
  [SMALL_STATE(469)] = 10118,
  [SMALL_STATE(470)] = 10126,
  [SMALL_STATE(471)] = 10134,
  [SMALL_STATE(472)] = 10142,
  [SMALL_STATE(473)] = 10150,
  [SMALL_STATE(474)] = 10158,
  [SMALL_STATE(475)] = 10166,
  [SMALL_STATE(476)] = 10174,
  [SMALL_STATE(477)] = 10182,
  [SMALL_STATE(478)] = 10190,
  [SMALL_STATE(479)] = 10198,
  [SMALL_STATE(480)] = 10206,
  [SMALL_STATE(481)] = 10214,
  [SMALL_STATE(482)] = 10222,
  [SMALL_STATE(483)] = 10230,
  [SMALL_STATE(484)] = 10238,
  [SMALL_STATE(485)] = 10246,
  [SMALL_STATE(486)] = 10254,
  [SMALL_STATE(487)] = 10262,
  [SMALL_STATE(488)] = 10270,
  [SMALL_STATE(489)] = 10278,
  [SMALL_STATE(490)] = 10286,
  [SMALL_STATE(491)] = 10294,
  [SMALL_STATE(492)] = 10302,
  [SMALL_STATE(493)] = 10310,
  [SMALL_STATE(494)] = 10318,
  [SMALL_STATE(495)] = 10326,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 14),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 14),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 18),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 18),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 22),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 11),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 28),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(376),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(438),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(245),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 19),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 20),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 31),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 7),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 7),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 12),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 12),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unary_function, 4, .production_id = 7),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 4, .production_id = 7),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 29),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 29),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_param_function, 4, .production_id = 9),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 4, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 34),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 34),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 34),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 20),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 8, .production_id = 32),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 6, .production_id = 25),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 6, .production_id = 24),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(96),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 24),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 23),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(257),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(408),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 9, .production_id = 35),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 20),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 30),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 5, .production_id = 17),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 13),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 5, .production_id = 13),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(127),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 20),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(103),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 27),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 27),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 10),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 10),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(107),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(238),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(97),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(258),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(272),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 16),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 16), SHIFT_REPEAT(19),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(236),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(157),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 8),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(241),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 20),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 33),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 33),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 26),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 15),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 21),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 21),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function_name, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [893] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 21),
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
