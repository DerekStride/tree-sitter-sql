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
#define STATE_COUNT 446
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 1
#define TOKEN_COUNT 75
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
  sym_keyword_join = 11,
  sym_keyword_on = 12,
  sym_keyword_where = 13,
  sym_keyword_order_by = 14,
  sym_keyword_group_by = 15,
  sym_keyword_having = 16,
  sym_keyword_desc = 17,
  sym_keyword_asc = 18,
  sym_keyword_limit = 19,
  sym_keyword_offset = 20,
  sym_keyword_primary = 21,
  sym_keyword_table = 22,
  sym_keyword_key = 23,
  sym_keyword_as = 24,
  sym_keyword_distinct = 25,
  sym_keyword_constraint = 26,
  sym_keyword_count = 27,
  sym_keyword_max = 28,
  sym_keyword_min = 29,
  sym_keyword_avg = 30,
  sym_keyword_in = 31,
  sym_keyword_and = 32,
  sym_keyword_or = 33,
  sym_keyword_not = 34,
  sym_keyword_force = 35,
  sym_keyword_use = 36,
  sym_keyword_index = 37,
  sym_keyword_for = 38,
  sym_keyword_if = 39,
  sym_keyword_exists = 40,
  sym_keyword_auto_increment = 41,
  sym_keyword_default = 42,
  sym_keyword_bigint = 43,
  sym_keyword_null = 44,
  sym_keyword_date = 45,
  sym_keyword_datetime = 46,
  sym_keyword_char = 47,
  sym_keyword_varchar = 48,
  anon_sym_LPAREN = 49,
  anon_sym_RPAREN = 50,
  sym_comment = 51,
  sym_marginalia = 52,
  anon_sym_SEMI = 53,
  anon_sym_DOT = 54,
  anon_sym_COMMA = 55,
  anon_sym_EQ = 56,
  anon_sym_STAR = 57,
  anon_sym_PLUS = 58,
  anon_sym_DASH = 59,
  anon_sym_SLASH = 60,
  anon_sym_PERCENT = 61,
  anon_sym_CARET = 62,
  anon_sym_LT = 63,
  anon_sym_LT_EQ = 64,
  anon_sym_BANG_EQ = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_SQUOTE = 68,
  aux_sym__literal_string_token1 = 69,
  anon_sym_DQUOTE = 70,
  aux_sym__literal_string_token2 = 71,
  sym__number = 72,
  anon_sym_BQUOTE = 73,
  sym__identifier = 74,
  sym_program = 75,
  sym__not_null = 76,
  sym__primary_key = 77,
  sym__if_not_exists = 78,
  sym__default_null = 79,
  sym_direction = 80,
  sym__type = 81,
  sym_bigint = 82,
  sym_char = 83,
  sym_varchar = 84,
  sym_statement = 85,
  sym__select_statement = 86,
  sym_select = 87,
  sym_select_expression = 88,
  sym__delete_statement = 89,
  sym__delete_from = 90,
  sym_delete = 91,
  sym__create_statement = 92,
  sym_create = 93,
  sym_table_reference = 94,
  sym__insert_statement = 95,
  sym_insert = 96,
  sym_insert_expression = 97,
  sym__column_list_without_order = 98,
  sym__column_without_order = 99,
  sym__update_statement = 100,
  sym_update = 101,
  sym_update_expression = 102,
  sym__single_table_update = 103,
  sym__multi_table_update = 104,
  sym__table_references = 105,
  sym_assignment_list = 106,
  sym_table_options = 107,
  sym_table_option = 108,
  sym_column_definitions = 109,
  sym_column_definition = 110,
  sym_constraints = 111,
  sym_constraint = 112,
  sym__constraint_literal = 113,
  sym__primary_key_constraint = 114,
  sym__key_constraint = 115,
  sym_column_list = 116,
  sym_column = 117,
  sym__field_list = 118,
  sym_field = 119,
  sym_function_call = 120,
  sym__unary_function = 121,
  sym__count_function = 122,
  sym__multi_param_function = 123,
  sym__function_param = 124,
  sym__function_params = 125,
  sym__unary_function_name = 126,
  sym__function_name = 127,
  sym_from = 128,
  sym_table_expression = 129,
  sym_index_hint = 130,
  sym_join = 131,
  sym_where = 132,
  sym_group_by = 133,
  sym__having = 134,
  sym_order_by = 135,
  sym_order_expression = 136,
  sym_limit = 137,
  sym_offset = 138,
  sym_where_expression = 139,
  sym_predicate = 140,
  sym__expression = 141,
  sym_subquery = 142,
  sym_list = 143,
  sym_literal = 144,
  sym__literal_string = 145,
  sym_identifier = 146,
  aux_sym__column_list_without_order_repeat1 = 147,
  aux_sym__table_references_repeat1 = 148,
  aux_sym_assignment_list_repeat1 = 149,
  aux_sym_table_options_repeat1 = 150,
  aux_sym_column_definitions_repeat1 = 151,
  aux_sym_constraints_repeat1 = 152,
  aux_sym_column_list_repeat1 = 153,
  aux_sym__field_list_repeat1 = 154,
  aux_sym__function_params_repeat1 = 155,
  aux_sym_from_repeat1 = 156,
  aux_sym_list_repeat1 = 157,
  anon_alias_sym_if = 158,
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
      if (eof) ADVANCE(408);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '%') ADVANCE(502);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '+') ADVANCE(499);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == '<') ADVANCE(504);
      if (lookahead == '=') ADVANCE(497);
      if (lookahead == '>') ADVANCE(508);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == 'F') ADVANCE(145);
      if (lookahead == 'G') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'J') ADVANCE(147);
      if (lookahead == 'K') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(162);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(152);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '^') ADVANCE(503);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'k') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'v') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(502);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '+') ADVANCE(499);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == '<') ADVANCE(504);
      if (lookahead == '=') ADVANCE(497);
      if (lookahead == '>') ADVANCE(508);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '^') ADVANCE(503);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead == 'v') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(502);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '+') ADVANCE(499);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == '<') ADVANCE(504);
      if (lookahead == '=') ADVANCE(497);
      if (lookahead == '>') ADVANCE(508);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(148);
      if (lookahead == 'G') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'J') ADVANCE(147);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '^') ADVANCE(503);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead == 'w') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(556);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'd') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(612);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(406)
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(586);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'G') ADVANCE(589);
      if (lookahead == 'J') ADVANCE(580);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == 'j') ADVANCE(659);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'C') ADVANCE(161);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(160);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(147);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(152);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'G') ADVANCE(589);
      if (lookahead == 'J') ADVANCE(580);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == 'j') ADVANCE(659);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(493);
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
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(571);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'D') ADVANCE(548);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'C') ADVANCE(579);
      if (lookahead == 'K') ADVANCE(547);
      if (lookahead == 'P') ADVANCE(587);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(658);
      if (lookahead == 'k') ADVANCE(626);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(571);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(403)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(506);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(200);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(201);
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(172);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(198);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(156);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(159);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(194);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(196);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(206);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(207);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(432);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(430);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(183);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(185);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(460);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(467);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(481);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(439);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(425);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(412);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(411);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(415);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(414);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(483);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(473);
      if (lookahead == 'N') ADVANCE(459);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(462);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(461);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(457);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(429);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'H') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'H') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'H') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(180);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(175);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(480);
      END_STATE();
    case 112:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(418);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'M') ADVANCE(419);
      END_STATE();
    case 121:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 122:
      if (lookahead == 'M') ADVANCE(107);
      END_STATE();
    case 123:
      if (lookahead == 'M') ADVANCE(72);
      END_STATE();
    case 124:
      if (lookahead == 'M') ADVANCE(86);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(442);
      if (lookahead == 'U') ADVANCE(190);
      if (lookahead == 'V') ADVANCE(92);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(459);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(455);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(421);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(179);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(181);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(186);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(416);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 145:
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(144);
      END_STATE();
    case 146:
      if (lookahead == 'O') ADVANCE(177);
      if (lookahead == 'U') ADVANCE(112);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(144);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 151:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 152:
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 153:
      if (lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(462);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(471);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(484);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(485);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(470);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(205);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 162:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 169:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 170:
      if (lookahead == 'S') ADVANCE(475);
      END_STATE();
    case 171:
      if (lookahead == 'S') ADVANCE(417);
      END_STATE();
    case 172:
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 173:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 174:
      if (lookahead == 'S') ADVANCE(191);
      END_STATE();
    case 175:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(464);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(418);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(451);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(434);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(479);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(436);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(409);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(477);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(447);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(449);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(476);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(413);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(163);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 197:
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 198:
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 199:
      if (lookahead == 'U') ADVANCE(75);
      END_STATE();
    case 200:
      if (lookahead == 'V') ADVANCE(104);
      END_STATE();
    case 201:
      if (lookahead == 'X') ADVANCE(453);
      END_STATE();
    case 202:
      if (lookahead == 'X') ADVANCE(469);
      END_STATE();
    case 203:
      if (lookahead == 'X') ADVANCE(109);
      END_STATE();
    case 204:
      if (lookahead == 'Y') ADVANCE(440);
      END_STATE();
    case 205:
      if (lookahead == 'Y') ADVANCE(437);
      END_STATE();
    case 206:
      if (lookahead == 'Y') ADVANCE(428);
      END_STATE();
    case 207:
      if (lookahead == 'Y') ADVANCE(427);
      END_STATE();
    case 208:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 209:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 224:
      if (lookahead == 'b') ADVANCE(385);
      END_STATE();
    case 225:
      if (lookahead == 'b') ADVANCE(386);
      END_STATE();
    case 226:
      if (lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 266:
      if (lookahead == 'f') ADVANCE(473);
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 267:
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 268:
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 269:
      if (lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 270:
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 271:
      if (lookahead == 'g') ADVANCE(457);
      END_STATE();
    case 272:
      if (lookahead == 'g') ADVANCE(429);
      END_STATE();
    case 273:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 276:
      if (lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 277:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(419);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(251);
      END_STATE();
    case 303:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 330:
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 331:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 352:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 376:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 378:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 379:
      if (lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 380:
      if (lookahead == 'x') ADVANCE(453);
      END_STATE();
    case 381:
      if (lookahead == 'x') ADVANCE(469);
      END_STATE();
    case 382:
      if (lookahead == 'x') ADVANCE(288);
      END_STATE();
    case 383:
      if (lookahead == 'y') ADVANCE(440);
      END_STATE();
    case 384:
      if (lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 385:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 386:
      if (lookahead == 'y') ADVANCE(427);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'C') ADVANCE(161);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(160);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(147);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(152);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 388:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(502);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '+') ADVANCE(499);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == '<') ADVANCE(504);
      if (lookahead == '=') ADVANCE(497);
      if (lookahead == '>') ADVANCE(508);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '^') ADVANCE(503);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead == 'v') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(612);
      if (lookahead == 's') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 390:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(556);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'd') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 391:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 392:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(502);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '+') ADVANCE(499);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == '<') ADVANCE(504);
      if (lookahead == '=') ADVANCE(497);
      if (lookahead == '>') ADVANCE(508);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(148);
      if (lookahead == 'G') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'J') ADVANCE(147);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '^') ADVANCE(503);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 393:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '`') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 394:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'G') ADVANCE(589);
      if (lookahead == 'J') ADVANCE(580);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == 'j') ADVANCE(659);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 395:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'G') ADVANCE(589);
      if (lookahead == 'J') ADVANCE(580);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == 'j') ADVANCE(659);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 396:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'C') ADVANCE(579);
      if (lookahead == 'K') ADVANCE(547);
      if (lookahead == 'P') ADVANCE(587);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(658);
      if (lookahead == 'k') ADVANCE(626);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 397:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 398:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 399:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(571);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 400:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'D') ADVANCE(548);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 401:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(586);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(665);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 402:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == 'W') ADVANCE(555);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 403:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(403)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(571);
      if (lookahead == 'U') ADVANCE(593);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 404:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 405:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 406:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(406)
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 407:
      if (eof) ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(518);
      if (lookahead == '%') ADVANCE(502);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '*') ADVANCE(498);
      if (lookahead == '+') ADVANCE(499);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == '<') ADVANCE(504);
      if (lookahead == '=') ADVANCE(497);
      if (lookahead == '>') ADVANCE(508);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == 'F') ADVANCE(145);
      if (lookahead == 'G') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'J') ADVANCE(147);
      if (lookahead == 'K') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(162);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(152);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '^') ADVANCE(503);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'j') ADVANCE(326);
      if (lookahead == 'k') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'v') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(432);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(78);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(526);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(507);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '/') ADVANCE(492);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(516);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == '/') ADVANCE(491);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(526);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(526);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(525);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(609);
      if (lookahead == 'I') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
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
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 25},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 25},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 26},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 26},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 28},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 28},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 29},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 25},
  [218] = {.lex_state = 25},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 25},
  [226] = {.lex_state = 25},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 25},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 13},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
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
  [365] = {.lex_state = 18},
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
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 523},
  [384] = {.lex_state = 514},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
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
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 514},
  [413] = {.lex_state = 523},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 11},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 11},
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
  [440] = {.lex_state = 18},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
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
    [sym_program] = STATE(433),
    [sym_statement] = STATE(425),
    [sym__select_statement] = STATE(424),
    [sym_select] = STATE(255),
    [sym__delete_statement] = STATE(424),
    [sym_delete] = STATE(305),
    [sym__create_statement] = STATE(424),
    [sym_create] = STATE(418),
    [sym__insert_statement] = STATE(424),
    [sym_insert] = STATE(417),
    [sym__update_statement] = STATE(424),
    [sym_update] = STATE(416),
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
  [90] = 23,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(64), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(257), 1,
      sym_select,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(426), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [167] = 23,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(64), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(257), 1,
      sym_select,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(352), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [244] = 23,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(64), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(257), 1,
      sym_select,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(420), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [321] = 22,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(372), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [395] = 22,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(379), 1,
      sym__function_params,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(315), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [469] = 22,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(405), 1,
      sym__function_params,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(315), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [543] = 22,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(403), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [617] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 22,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
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
  [653] = 22,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(391), 1,
      sym__function_params,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(315), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 22,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_having,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
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
  [763] = 22,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(388), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [837] = 21,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(407), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [908] = 21,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(390), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [979] = 21,
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
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(419), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1050] = 21,
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
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(393), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1121] = 21,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(404), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1192] = 21,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(400), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1263] = 21,
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
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_literal,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(65), 2,
      sym_field,
      sym_predicate,
    STATE(307), 2,
      sym_function_call,
      sym__function_param,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
    STATE(69), 3,
      sym__expression,
      sym_subquery,
      sym_list,
  [1334] = 4,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 19,
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
  [1369] = 21,
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
    ACTIONS(61), 1,
      sym_keyword_count,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_STAR,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(280), 1,
      sym_select_expression,
    STATE(366), 1,
      sym__function_name,
    STATE(367), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(201), 2,
      sym_field,
      sym_function_call,
    STATE(270), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1438] = 21,
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
    ACTIONS(61), 1,
      sym_keyword_count,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      sym_keyword_distinct,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(268), 1,
      sym_select_expression,
    STATE(366), 1,
      sym__function_name,
    STATE(367), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(201), 2,
      sym_field,
      sym_function_call,
    STATE(270), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1507] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 20,
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
  [1540] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 20,
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
  [1573] = 4,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 19,
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
  [1608] = 4,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 18,
      sym_keyword_join,
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
  [1643] = 4,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(81), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 18,
      sym_keyword_join,
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
  [1678] = 3,
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
      sym_keyword_join,
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
  [1710] = 3,
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
      sym_keyword_join,
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
  [1742] = 20,
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
    ACTIONS(95), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      anon_sym_STAR,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(275), 1,
      sym_order_expression,
    STATE(438), 1,
      sym__unary_function_name,
    STATE(439), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(156), 2,
      sym_field,
      sym_function_call,
    STATE(190), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1808] = 3,
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
      sym_keyword_join,
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
  [1840] = 3,
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
      sym_keyword_join,
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
  [1872] = 6,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(105), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 15,
      sym_keyword_join,
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
  [1910] = 4,
    ACTIONS(111), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 17,
      sym_keyword_join,
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
  [1944] = 9,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_CARET,
    ACTIONS(113), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(105), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 13,
      sym_keyword_join,
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
  [1988] = 11,
    ACTIONS(105), 1,
      sym_keyword_or,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_CARET,
    ACTIONS(113), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(103), 9,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2036] = 8,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_CARET,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(105), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 14,
      sym_keyword_join,
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
  [2078] = 3,
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
      sym_keyword_join,
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
  [2110] = 3,
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
      sym_keyword_join,
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
  [2142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 19,
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
  [2174] = 3,
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
      sym_keyword_join,
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
  [2206] = 20,
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
    ACTIONS(65), 1,
      anon_sym_STAR,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(392), 1,
      sym_select_expression,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(246), 2,
      sym_field,
      sym_function_call,
    STATE(270), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2272] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 18,
      sym_keyword_join,
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
  [2304] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(133), 10,
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
  [2337] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(133), 10,
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
  [2370] = 6,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(135), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 10,
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
  [2406] = 12,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_CARET,
    ACTIONS(113), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      sym_keyword_and,
    ACTIONS(147), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(143), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2453] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(133), 10,
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
  [2484] = 3,
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
  [2512] = 3,
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
  [2540] = 6,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(135), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
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
  [2574] = 8,
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
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(103), 11,
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
  [2612] = 10,
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
    ACTIONS(103), 6,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2654] = 9,
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
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(103), 10,
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
  [2694] = 4,
    ACTIONS(161), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(105), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 14,
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
  [2724] = 6,
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
    ACTIONS(105), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 12,
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
  [2758] = 3,
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
  [2786] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(135), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 10,
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
  [2816] = 3,
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
  [2844] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(89), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 15,
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
  [2872] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 3,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(135), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
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
  [2901] = 6,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
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
  [2934] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(135), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
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
  [2962] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(135), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 11,
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
  [2990] = 11,
    ACTIONS(143), 1,
      anon_sym_SEMI,
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
    ACTIONS(175), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(165), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3031] = 14,
    ACTIONS(177), 1,
      sym_keyword_join,
    ACTIONS(179), 1,
      sym_keyword_where,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(183), 1,
      sym_keyword_group_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(101), 1,
      sym_index_hint,
    STATE(142), 1,
      sym_where,
    STATE(173), 1,
      sym_group_by,
    STATE(212), 1,
      sym_order_by,
    STATE(318), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(189), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(100), 2,
      sym_join,
      aux_sym_from_repeat1,
  [3078] = 10,
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
    ACTIONS(175), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(165), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3116] = 13,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_keyword_count,
    STATE(27), 1,
      sym_identifier,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(438), 1,
      sym__unary_function_name,
    STATE(439), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(144), 2,
      sym_field,
      sym_function_call,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3160] = 13,
    ACTIONS(25), 1,
      sym_keyword_count,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(27), 1,
      sym_identifier,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(431), 1,
      sym__unary_function_name,
    STATE(432), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(144), 2,
      sym_field,
      sym_function_call,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3204] = 12,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(53), 1,
      sym_predicate,
    STATE(264), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(69), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3246] = 11,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym__number,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
      sym__literal_string,
    STATE(199), 1,
      sym_where_expression,
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
  [3286] = 11,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(199), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(67), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3326] = 13,
    ACTIONS(29), 1,
      sym_keyword_if,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(61), 1,
      sym_keyword_count,
    STATE(27), 1,
      sym_identifier,
    STATE(146), 1,
      sym__unary_function,
    STATE(153), 1,
      sym__count_function,
    STATE(154), 1,
      sym__multi_param_function,
    STATE(366), 1,
      sym__function_name,
    STATE(367), 1,
      sym__unary_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(144), 2,
      sym_field,
      sym_function_call,
    ACTIONS(27), 3,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3370] = 10,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_CARET,
    ACTIONS(113), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(119), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3408] = 12,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(48), 1,
      sym_predicate,
    STATE(159), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3450] = 10,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym__number,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
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
  [3487] = 10,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
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
  [3524] = 10,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
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
  [3561] = 10,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
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
  [3598] = 10,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3635] = 10,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym__number,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
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
  [3672] = 10,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym__number,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
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
  [3709] = 10,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
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
  [3746] = 10,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym__number,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
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
  [3783] = 11,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(47), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3822] = 11,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(63), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(69), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3861] = 11,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(50), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3900] = 10,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym__number,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(34), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [3937] = 10,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym__number,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(43), 1,
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
  [3974] = 11,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(46), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4013] = 10,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
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
  [4050] = 8,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      sym_keyword_as,
    ACTIONS(211), 1,
      anon_sym_DOT,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(112), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(207), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(205), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [4083] = 11,
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
    ACTIONS(191), 1,
      sym__identifier,
    STATE(26), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_identifier,
    STATE(60), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(76), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [4122] = 7,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    ACTIONS(219), 1,
      sym_keyword_as,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(217), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(215), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [4152] = 3,
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
    ACTIONS(17), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [4174] = 12,
    ACTIONS(177), 1,
      sym_keyword_join,
    ACTIONS(179), 1,
      sym_keyword_where,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(183), 1,
      sym_keyword_group_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(124), 1,
      sym_where,
    STATE(176), 1,
      sym_group_by,
    STATE(213), 1,
      sym_order_by,
    STATE(316), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(122), 2,
      sym_join,
      aux_sym_from_repeat1,
  [4214] = 3,
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
    ACTIONS(21), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [4236] = 12,
    ACTIONS(177), 1,
      sym_keyword_join,
    ACTIONS(179), 1,
      sym_keyword_where,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(183), 1,
      sym_keyword_group_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(128), 1,
      sym_where,
    STATE(188), 1,
      sym_group_by,
    STATE(234), 1,
      sym_order_by,
    STATE(333), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(122), 2,
      sym_join,
      aux_sym_from_repeat1,
  [4276] = 12,
    ACTIONS(177), 1,
      sym_keyword_join,
    ACTIONS(179), 1,
      sym_keyword_where,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(183), 1,
      sym_keyword_group_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(128), 1,
      sym_where,
    STATE(188), 1,
      sym_group_by,
    STATE(234), 1,
      sym_order_by,
    STATE(333), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(98), 2,
      sym_join,
      aux_sym_from_repeat1,
  [4316] = 6,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(227), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(225), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [4343] = 6,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(229), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [4370] = 13,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(233), 1,
      sym_keyword_primary,
    ACTIONS(235), 1,
      sym_keyword_key,
    ACTIONS(237), 1,
      sym_keyword_constraint,
    STATE(116), 1,
      sym_identifier,
    STATE(254), 1,
      sym_constraint,
    STATE(301), 1,
      sym__primary_key,
    STATE(302), 1,
      sym_column_definition,
    STATE(303), 1,
      sym__constraint_literal,
    STATE(306), 1,
      sym__primary_key_constraint,
    STATE(310), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4411] = 10,
    ACTIONS(241), 1,
      sym_keyword_primary,
    ACTIONS(243), 1,
      sym_keyword_not,
    ACTIONS(245), 1,
      sym_keyword_auto_increment,
    ACTIONS(247), 1,
      sym_keyword_default,
    STATE(195), 1,
      sym__primary_key,
    STATE(324), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(133), 2,
      sym__not_null,
      sym__default_null,
  [4446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(251), 10,
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
  [4463] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(255), 1,
      sym_keyword_as,
    STATE(160), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(253), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(257), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4490] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 10,
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
  [4507] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(263), 1,
      sym_keyword_as,
    STATE(168), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(265), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4534] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(267), 10,
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
  [4551] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(271), 1,
      sym_keyword_as,
    STATE(162), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(269), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(273), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4578] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(275), 10,
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
  [4595] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(279), 1,
      sym_keyword_as,
    STATE(163), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(277), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(281), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4622] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(285), 1,
      sym_keyword_as,
    STATE(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(283), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(287), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4649] = 8,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    ACTIONS(289), 1,
      sym_keyword_as,
    ACTIONS(291), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(207), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [4677] = 7,
    ACTIONS(293), 1,
      sym_keyword_bigint,
    ACTIONS(295), 1,
      sym_keyword_date,
    ACTIONS(297), 1,
      sym_keyword_datetime,
    ACTIONS(299), 1,
      sym_keyword_char,
    ACTIONS(301), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(105), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [4703] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4719] = 3,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4737] = 3,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(309), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4755] = 3,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4773] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(317), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4789] = 4,
    ACTIONS(319), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(122), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(322), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4809] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(324), 1,
      sym_keyword_as,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [4834] = 8,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(183), 1,
      sym_keyword_group_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(178), 1,
      sym_group_by,
    STATE(224), 1,
      sym_order_by,
    STATE(337), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4861] = 8,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(330), 1,
      sym_keyword_default,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      sym_identifier,
    STATE(371), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(150), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [4888] = 8,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(196), 1,
      sym_identifier,
    STATE(274), 1,
      sym_table_reference,
    STATE(358), 1,
      sym__table_references,
    STATE(360), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(359), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [4915] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(283), 1,
      sym_keyword_from,
    ACTIONS(285), 1,
      sym_keyword_as,
    STATE(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(287), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4940] = 8,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(183), 1,
      sym_keyword_group_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(176), 1,
      sym_group_by,
    STATE(213), 1,
      sym_order_by,
    STATE(316), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4967] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(334), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4982] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(336), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4997] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(261), 1,
      sym_keyword_from,
    ACTIONS(263), 1,
      sym_keyword_as,
    STATE(168), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(265), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5022] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(338), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5037] = 7,
    ACTIONS(241), 1,
      sym_keyword_primary,
    ACTIONS(340), 1,
      sym_keyword_auto_increment,
    STATE(202), 1,
      sym__primary_key,
    STATE(300), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(342), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5062] = 7,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    ACTIONS(344), 1,
      sym_keyword_as,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(217), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [5087] = 9,
    ACTIONS(241), 1,
      sym_keyword_primary,
    ACTIONS(346), 1,
      sym_keyword_key,
    ACTIONS(348), 1,
      sym_keyword_constraint,
    STATE(301), 1,
      sym__primary_key,
    STATE(303), 1,
      sym__constraint_literal,
    STATE(306), 1,
      sym__primary_key_constraint,
    STATE(310), 1,
      sym__key_constraint,
    STATE(312), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5116] = 3,
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
  [5133] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(269), 1,
      sym_keyword_from,
    ACTIONS(271), 1,
      sym_keyword_as,
    STATE(162), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(273), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5158] = 3,
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
  [5175] = 8,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(330), 1,
      sym_keyword_default,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      sym_identifier,
    STATE(374), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(150), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [5202] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(253), 1,
      sym_keyword_from,
    ACTIONS(255), 1,
      sym_keyword_as,
    STATE(160), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(257), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5227] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(277), 1,
      sym_keyword_from,
    ACTIONS(279), 1,
      sym_keyword_as,
    STATE(163), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5252] = 8,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(183), 1,
      sym_keyword_group_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(188), 1,
      sym_group_by,
    STATE(234), 1,
      sym_order_by,
    STATE(333), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5279] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(352), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5293] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(354), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5307] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(356), 1,
      sym_keyword_as,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [5329] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(358), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(360), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5357] = 7,
    ACTIONS(362), 1,
      sym_keyword_default,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_BQUOTE,
    ACTIONS(370), 1,
      sym__identifier,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(148), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [5381] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(373), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5399] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(330), 1,
      sym_keyword_default,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(148), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [5423] = 3,
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
  [5439] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(26), 1,
      sym__literal_string,
    STATE(257), 1,
      sym_select,
    STATE(259), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5465] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(358), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5479] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(358), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5493] = 6,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(227), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [5515] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5533] = 4,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(354), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5551] = 8,
    ACTIONS(179), 1,
      sym_keyword_where,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      sym_where,
    STATE(248), 1,
      sym_order_by,
    STATE(441), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5577] = 8,
    ACTIONS(179), 1,
      sym_keyword_where,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      sym_where,
    STATE(272), 1,
      sym_order_by,
    STATE(363), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5603] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(388), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5617] = 6,
    ACTIONS(241), 1,
      sym_keyword_primary,
    STATE(191), 1,
      sym__primary_key,
    STATE(317), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(390), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5639] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(392), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(394), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5667] = 3,
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
  [5683] = 6,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(231), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [5705] = 6,
    ACTIONS(241), 1,
      sym_keyword_primary,
    STATE(202), 1,
      sym__primary_key,
    STATE(300), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(342), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5727] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(396), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5741] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(398), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5755] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(400), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5769] = 2,
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
  [5783] = 2,
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
  [5797] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(26), 1,
      sym__literal_string,
    STATE(242), 1,
      sym_literal,
    STATE(261), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5823] = 6,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(234), 1,
      sym_order_by,
    STATE(333), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5844] = 4,
    ACTIONS(408), 1,
      sym_keyword_having,
    STATE(228), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(406), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5861] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [5880] = 6,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(224), 1,
      sym_order_by,
    STATE(337), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5901] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(271), 1,
      sym_keyword_as,
    STATE(162), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(273), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5922] = 6,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(230), 1,
      sym_order_by,
    STATE(304), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(410), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5943] = 4,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [5960] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(263), 1,
      sym_keyword_as,
    STATE(168), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(265), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5981] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [6000] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(279), 1,
      sym_keyword_as,
    STATE(163), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6021] = 7,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(415), 1,
      sym_keyword_if,
    STATE(196), 1,
      sym_identifier,
    STATE(221), 1,
      sym__if_not_exists,
    STATE(332), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6044] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6057] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(419), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6070] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(285), 1,
      sym_keyword_as,
    STATE(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6091] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(421), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [6108] = 6,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(213), 1,
      sym_order_by,
    STATE(316), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6129] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(255), 1,
      sym_keyword_as,
    STATE(160), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(257), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6150] = 4,
    STATE(279), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(423), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6167] = 4,
    STATE(326), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(425), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6183] = 6,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(285), 1,
      sym_order_by,
    STATE(375), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6203] = 4,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(373), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6219] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(26), 1,
      sym__literal_string,
    STATE(232), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6239] = 4,
    STATE(300), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(342), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6255] = 3,
    ACTIONS(433), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(431), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [6269] = 4,
    STATE(325), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(435), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6285] = 4,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(354), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6301] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(440), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6313] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(26), 1,
      sym__literal_string,
    STATE(298), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6333] = 4,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6349] = 4,
    STATE(317), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(390), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6365] = 6,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(196), 1,
      sym_identifier,
    STATE(276), 1,
      sym_table_reference,
    STATE(356), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6385] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(442), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6397] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(26), 1,
      sym__literal_string,
    STATE(299), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6417] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__number,
    STATE(26), 1,
      sym__literal_string,
    STATE(259), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6437] = 6,
    ACTIONS(181), 1,
      sym_keyword_order_by,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    STATE(278), 1,
      sym_order_by,
    STATE(355), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6457] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(336), 1,
      sym_identifier,
    STATE(338), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6474] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(446), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6485] = 5,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_column_definitions_repeat1,
    STATE(397), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6502] = 4,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(149), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [6517] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(333), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6532] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(337), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6547] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(197), 1,
      sym_identifier,
    STATE(327), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6564] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(197), 1,
      sym_identifier,
    STATE(291), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6581] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(116), 1,
      sym_identifier,
    STATE(302), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6598] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(455), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(457), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [6611] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(461), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [6624] = 5,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      aux_sym_column_definitions_repeat1,
    STATE(422), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6641] = 4,
    ACTIONS(465), 1,
      sym_keyword_from,
    STATE(364), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      sym_keyword_force,
      sym_keyword_use,
  [6656] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(196), 1,
      sym_identifier,
    STATE(331), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6673] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(116), 1,
      sym_identifier,
    STATE(219), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6690] = 5,
    ACTIONS(467), 1,
      anon_sym_BQUOTE,
    ACTIONS(469), 1,
      sym__identifier,
    STATE(115), 1,
      sym_identifier,
    STATE(158), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6707] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(304), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(410), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6722] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(473), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [6735] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(475), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(477), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [6748] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(271), 1,
      sym__column_without_order,
    STATE(336), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6765] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(479), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6776] = 4,
    ACTIONS(481), 1,
      sym_keyword_on,
    STATE(343), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      sym_keyword_force,
      sym_keyword_use,
  [6791] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(319), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(483), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6806] = 5,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    STATE(68), 1,
      sym_table_expression,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6823] = 4,
    ACTIONS(489), 1,
      sym_keyword_offset,
    STATE(329), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6838] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(493), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [6849] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    STATE(316), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6864] = 5,
    ACTIONS(495), 1,
      anon_sym_BQUOTE,
    ACTIONS(497), 1,
      sym__identifier,
    STATE(123), 1,
      sym_identifier,
    STATE(229), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6881] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(499), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [6894] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [6907] = 5,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(196), 1,
      sym_identifier,
    STATE(314), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6924] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [6937] = 4,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(421), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [6952] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6966] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6980] = 4,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6994] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(147), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7008] = 4,
    ACTIONS(505), 1,
      sym_keyword_set,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7022] = 4,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7036] = 4,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7050] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    STATE(355), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7064] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(516), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7074] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7088] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(313), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7102] = 4,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7116] = 4,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7130] = 4,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7144] = 4,
    ACTIONS(525), 1,
      sym_keyword_from,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    STATE(353), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7158] = 4,
    ACTIONS(495), 1,
      anon_sym_BQUOTE,
    ACTIONS(497), 1,
      sym__identifier,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7172] = 4,
    ACTIONS(525), 1,
      sym_keyword_from,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7186] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7200] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7214] = 4,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7228] = 4,
    ACTIONS(525), 1,
      sym_keyword_from,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7242] = 4,
    ACTIONS(467), 1,
      anon_sym_BQUOTE,
    ACTIONS(469), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7256] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(339), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7270] = 4,
    ACTIONS(542), 1,
      sym_keyword_where,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    STATE(362), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7284] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(233), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7298] = 4,
    ACTIONS(546), 1,
      sym_keyword_set,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7312] = 4,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7326] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(555), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7336] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7350] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(557), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7360] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7374] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(375), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7388] = 4,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7402] = 4,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      sym_keyword_set,
    STATE(245), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7416] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(570), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7426] = 4,
    ACTIONS(572), 1,
      sym_keyword_values,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7440] = 4,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7454] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(395), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7468] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(578), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(580), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7488] = 4,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7502] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7516] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7530] = 4,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7544] = 4,
    ACTIONS(185), 1,
      sym_keyword_limit,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    STATE(361), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7558] = 4,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7572] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7586] = 4,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7600] = 4,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7614] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(167), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7628] = 4,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7642] = 4,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7656] = 4,
    ACTIONS(606), 1,
      anon_sym_BQUOTE,
    ACTIONS(608), 1,
      sym__identifier,
    STATE(226), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7670] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(170), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7684] = 4,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7698] = 4,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      sym__identifier,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7712] = 4,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(442), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7726] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(615), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7735] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(511), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7744] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(390), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7753] = 3,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7764] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(535), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7773] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(619), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7782] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(483), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7791] = 3,
    ACTIONS(621), 1,
      sym_keyword_from,
    STATE(351), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7802] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(623), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7811] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(625), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(627), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7829] = 3,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7840] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(619), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7849] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(629), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7858] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(595), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7867] = 3,
    ACTIONS(241), 1,
      sym_keyword_primary,
    STATE(309), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7878] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(546), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [7887] = 3,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym__function_params_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7898] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7907] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(425), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7925] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(631), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7934] = 3,
    ACTIONS(633), 1,
      sym_keyword_for,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7945] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(637), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7954] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(639), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7963] = 3,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7974] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(342), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7983] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(641), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7992] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(643), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8001] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(584), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8010] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(645), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8019] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(647), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8028] = 3,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8039] = 3,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8050] = 3,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8061] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8070] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(653), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [8079] = 3,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    STATE(376), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8090] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(655), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8099] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(410), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(657), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8117] = 2,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8125] = 2,
    ACTIONS(661), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8133] = 2,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8141] = 2,
    ACTIONS(665), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8149] = 2,
    ACTIONS(667), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8157] = 2,
    ACTIONS(669), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8165] = 2,
    ACTIONS(671), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8173] = 2,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8181] = 2,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8189] = 2,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8197] = 2,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8205] = 2,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8213] = 2,
    ACTIONS(681), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8221] = 2,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8229] = 2,
    ACTIONS(685), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8237] = 2,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8245] = 2,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8253] = 2,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8261] = 2,
    ACTIONS(691), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8269] = 2,
    ACTIONS(693), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8277] = 2,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8285] = 2,
    ACTIONS(697), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8293] = 2,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8301] = 2,
    ACTIONS(701), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8309] = 2,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8317] = 2,
    ACTIONS(703), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8325] = 2,
    ACTIONS(705), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8333] = 2,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8341] = 2,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8349] = 2,
    ACTIONS(711), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8357] = 2,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8365] = 2,
    ACTIONS(715), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8373] = 2,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8381] = 2,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8389] = 2,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8397] = 2,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8405] = 2,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8413] = 2,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8421] = 2,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8429] = 2,
    ACTIONS(727), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8437] = 2,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8445] = 2,
    ACTIONS(731), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8453] = 2,
    ACTIONS(733), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8461] = 2,
    ACTIONS(735), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8469] = 2,
    ACTIONS(739), 1,
      aux_sym__literal_string_token2,
    ACTIONS(737), 2,
      sym_comment,
      sym_marginalia,
  [8477] = 2,
    ACTIONS(741), 1,
      aux_sym__literal_string_token1,
    ACTIONS(737), 2,
      sym_comment,
      sym_marginalia,
  [8485] = 2,
    ACTIONS(743), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8493] = 2,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8501] = 2,
    ACTIONS(745), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8509] = 2,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8517] = 2,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8525] = 2,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8533] = 2,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8541] = 2,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8549] = 2,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8557] = 2,
    ACTIONS(759), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8565] = 2,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8573] = 2,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8581] = 2,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8589] = 2,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8597] = 2,
    ACTIONS(769), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8605] = 2,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8613] = 2,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8621] = 2,
    ACTIONS(775), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8629] = 2,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8637] = 2,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8645] = 2,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8653] = 2,
    ACTIONS(783), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8661] = 2,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8669] = 2,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8677] = 2,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8685] = 2,
    ACTIONS(791), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8693] = 2,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8701] = 2,
    ACTIONS(795), 1,
      aux_sym__literal_string_token1,
    ACTIONS(737), 2,
      sym_comment,
      sym_marginalia,
  [8709] = 2,
    ACTIONS(797), 1,
      aux_sym__literal_string_token2,
    ACTIONS(737), 2,
      sym_comment,
      sym_marginalia,
  [8717] = 2,
    ACTIONS(799), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8725] = 2,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8733] = 2,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8741] = 2,
    ACTIONS(805), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8749] = 2,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8757] = 2,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8765] = 2,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8773] = 2,
    ACTIONS(813), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8781] = 2,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8789] = 2,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8797] = 2,
    ACTIONS(817), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8805] = 2,
    ACTIONS(819), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8813] = 2,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8821] = 2,
    ACTIONS(823), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8829] = 2,
    ACTIONS(825), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8837] = 2,
    ACTIONS(827), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8845] = 2,
    ACTIONS(829), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8853] = 2,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8861] = 2,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8869] = 2,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8877] = 2,
    ACTIONS(837), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8885] = 2,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8893] = 2,
    ACTIONS(841), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8901] = 2,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8909] = 2,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8917] = 2,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8925] = 2,
    ACTIONS(849), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8933] = 2,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8941] = 2,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8949] = 2,
    ACTIONS(853), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8957] = 2,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [8965] = 2,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 321,
  [SMALL_STATE(8)] = 395,
  [SMALL_STATE(9)] = 469,
  [SMALL_STATE(10)] = 543,
  [SMALL_STATE(11)] = 617,
  [SMALL_STATE(12)] = 653,
  [SMALL_STATE(13)] = 727,
  [SMALL_STATE(14)] = 763,
  [SMALL_STATE(15)] = 837,
  [SMALL_STATE(16)] = 908,
  [SMALL_STATE(17)] = 979,
  [SMALL_STATE(18)] = 1050,
  [SMALL_STATE(19)] = 1121,
  [SMALL_STATE(20)] = 1192,
  [SMALL_STATE(21)] = 1263,
  [SMALL_STATE(22)] = 1334,
  [SMALL_STATE(23)] = 1369,
  [SMALL_STATE(24)] = 1438,
  [SMALL_STATE(25)] = 1507,
  [SMALL_STATE(26)] = 1540,
  [SMALL_STATE(27)] = 1573,
  [SMALL_STATE(28)] = 1608,
  [SMALL_STATE(29)] = 1643,
  [SMALL_STATE(30)] = 1678,
  [SMALL_STATE(31)] = 1710,
  [SMALL_STATE(32)] = 1742,
  [SMALL_STATE(33)] = 1808,
  [SMALL_STATE(34)] = 1840,
  [SMALL_STATE(35)] = 1872,
  [SMALL_STATE(36)] = 1910,
  [SMALL_STATE(37)] = 1944,
  [SMALL_STATE(38)] = 1988,
  [SMALL_STATE(39)] = 2036,
  [SMALL_STATE(40)] = 2078,
  [SMALL_STATE(41)] = 2110,
  [SMALL_STATE(42)] = 2142,
  [SMALL_STATE(43)] = 2174,
  [SMALL_STATE(44)] = 2206,
  [SMALL_STATE(45)] = 2272,
  [SMALL_STATE(46)] = 2304,
  [SMALL_STATE(47)] = 2337,
  [SMALL_STATE(48)] = 2370,
  [SMALL_STATE(49)] = 2406,
  [SMALL_STATE(50)] = 2453,
  [SMALL_STATE(51)] = 2484,
  [SMALL_STATE(52)] = 2512,
  [SMALL_STATE(53)] = 2540,
  [SMALL_STATE(54)] = 2574,
  [SMALL_STATE(55)] = 2612,
  [SMALL_STATE(56)] = 2654,
  [SMALL_STATE(57)] = 2694,
  [SMALL_STATE(58)] = 2724,
  [SMALL_STATE(59)] = 2758,
  [SMALL_STATE(60)] = 2786,
  [SMALL_STATE(61)] = 2816,
  [SMALL_STATE(62)] = 2844,
  [SMALL_STATE(63)] = 2872,
  [SMALL_STATE(64)] = 2901,
  [SMALL_STATE(65)] = 2934,
  [SMALL_STATE(66)] = 2962,
  [SMALL_STATE(67)] = 2990,
  [SMALL_STATE(68)] = 3031,
  [SMALL_STATE(69)] = 3078,
  [SMALL_STATE(70)] = 3116,
  [SMALL_STATE(71)] = 3160,
  [SMALL_STATE(72)] = 3204,
  [SMALL_STATE(73)] = 3246,
  [SMALL_STATE(74)] = 3286,
  [SMALL_STATE(75)] = 3326,
  [SMALL_STATE(76)] = 3370,
  [SMALL_STATE(77)] = 3408,
  [SMALL_STATE(78)] = 3450,
  [SMALL_STATE(79)] = 3487,
  [SMALL_STATE(80)] = 3524,
  [SMALL_STATE(81)] = 3561,
  [SMALL_STATE(82)] = 3598,
  [SMALL_STATE(83)] = 3635,
  [SMALL_STATE(84)] = 3672,
  [SMALL_STATE(85)] = 3709,
  [SMALL_STATE(86)] = 3746,
  [SMALL_STATE(87)] = 3783,
  [SMALL_STATE(88)] = 3822,
  [SMALL_STATE(89)] = 3861,
  [SMALL_STATE(90)] = 3900,
  [SMALL_STATE(91)] = 3937,
  [SMALL_STATE(92)] = 3974,
  [SMALL_STATE(93)] = 4013,
  [SMALL_STATE(94)] = 4050,
  [SMALL_STATE(95)] = 4083,
  [SMALL_STATE(96)] = 4122,
  [SMALL_STATE(97)] = 4152,
  [SMALL_STATE(98)] = 4174,
  [SMALL_STATE(99)] = 4214,
  [SMALL_STATE(100)] = 4236,
  [SMALL_STATE(101)] = 4276,
  [SMALL_STATE(102)] = 4316,
  [SMALL_STATE(103)] = 4343,
  [SMALL_STATE(104)] = 4370,
  [SMALL_STATE(105)] = 4411,
  [SMALL_STATE(106)] = 4446,
  [SMALL_STATE(107)] = 4463,
  [SMALL_STATE(108)] = 4490,
  [SMALL_STATE(109)] = 4507,
  [SMALL_STATE(110)] = 4534,
  [SMALL_STATE(111)] = 4551,
  [SMALL_STATE(112)] = 4578,
  [SMALL_STATE(113)] = 4595,
  [SMALL_STATE(114)] = 4622,
  [SMALL_STATE(115)] = 4649,
  [SMALL_STATE(116)] = 4677,
  [SMALL_STATE(117)] = 4703,
  [SMALL_STATE(118)] = 4719,
  [SMALL_STATE(119)] = 4737,
  [SMALL_STATE(120)] = 4755,
  [SMALL_STATE(121)] = 4773,
  [SMALL_STATE(122)] = 4789,
  [SMALL_STATE(123)] = 4809,
  [SMALL_STATE(124)] = 4834,
  [SMALL_STATE(125)] = 4861,
  [SMALL_STATE(126)] = 4888,
  [SMALL_STATE(127)] = 4915,
  [SMALL_STATE(128)] = 4940,
  [SMALL_STATE(129)] = 4967,
  [SMALL_STATE(130)] = 4982,
  [SMALL_STATE(131)] = 4997,
  [SMALL_STATE(132)] = 5022,
  [SMALL_STATE(133)] = 5037,
  [SMALL_STATE(134)] = 5062,
  [SMALL_STATE(135)] = 5087,
  [SMALL_STATE(136)] = 5116,
  [SMALL_STATE(137)] = 5133,
  [SMALL_STATE(138)] = 5158,
  [SMALL_STATE(139)] = 5175,
  [SMALL_STATE(140)] = 5202,
  [SMALL_STATE(141)] = 5227,
  [SMALL_STATE(142)] = 5252,
  [SMALL_STATE(143)] = 5279,
  [SMALL_STATE(144)] = 5293,
  [SMALL_STATE(145)] = 5307,
  [SMALL_STATE(146)] = 5329,
  [SMALL_STATE(147)] = 5343,
  [SMALL_STATE(148)] = 5357,
  [SMALL_STATE(149)] = 5381,
  [SMALL_STATE(150)] = 5399,
  [SMALL_STATE(151)] = 5423,
  [SMALL_STATE(152)] = 5439,
  [SMALL_STATE(153)] = 5465,
  [SMALL_STATE(154)] = 5479,
  [SMALL_STATE(155)] = 5493,
  [SMALL_STATE(156)] = 5515,
  [SMALL_STATE(157)] = 5533,
  [SMALL_STATE(158)] = 5551,
  [SMALL_STATE(159)] = 5577,
  [SMALL_STATE(160)] = 5603,
  [SMALL_STATE(161)] = 5617,
  [SMALL_STATE(162)] = 5639,
  [SMALL_STATE(163)] = 5653,
  [SMALL_STATE(164)] = 5667,
  [SMALL_STATE(165)] = 5683,
  [SMALL_STATE(166)] = 5705,
  [SMALL_STATE(167)] = 5727,
  [SMALL_STATE(168)] = 5741,
  [SMALL_STATE(169)] = 5755,
  [SMALL_STATE(170)] = 5769,
  [SMALL_STATE(171)] = 5783,
  [SMALL_STATE(172)] = 5797,
  [SMALL_STATE(173)] = 5823,
  [SMALL_STATE(174)] = 5844,
  [SMALL_STATE(175)] = 5861,
  [SMALL_STATE(176)] = 5880,
  [SMALL_STATE(177)] = 5901,
  [SMALL_STATE(178)] = 5922,
  [SMALL_STATE(179)] = 5943,
  [SMALL_STATE(180)] = 5960,
  [SMALL_STATE(181)] = 5981,
  [SMALL_STATE(182)] = 6000,
  [SMALL_STATE(183)] = 6021,
  [SMALL_STATE(184)] = 6044,
  [SMALL_STATE(185)] = 6057,
  [SMALL_STATE(186)] = 6070,
  [SMALL_STATE(187)] = 6091,
  [SMALL_STATE(188)] = 6108,
  [SMALL_STATE(189)] = 6129,
  [SMALL_STATE(190)] = 6150,
  [SMALL_STATE(191)] = 6167,
  [SMALL_STATE(192)] = 6183,
  [SMALL_STATE(193)] = 6203,
  [SMALL_STATE(194)] = 6219,
  [SMALL_STATE(195)] = 6239,
  [SMALL_STATE(196)] = 6255,
  [SMALL_STATE(197)] = 6269,
  [SMALL_STATE(198)] = 6285,
  [SMALL_STATE(199)] = 6301,
  [SMALL_STATE(200)] = 6313,
  [SMALL_STATE(201)] = 6333,
  [SMALL_STATE(202)] = 6349,
  [SMALL_STATE(203)] = 6365,
  [SMALL_STATE(204)] = 6385,
  [SMALL_STATE(205)] = 6397,
  [SMALL_STATE(206)] = 6417,
  [SMALL_STATE(207)] = 6437,
  [SMALL_STATE(208)] = 6457,
  [SMALL_STATE(209)] = 6474,
  [SMALL_STATE(210)] = 6485,
  [SMALL_STATE(211)] = 6502,
  [SMALL_STATE(212)] = 6517,
  [SMALL_STATE(213)] = 6532,
  [SMALL_STATE(214)] = 6547,
  [SMALL_STATE(215)] = 6564,
  [SMALL_STATE(216)] = 6581,
  [SMALL_STATE(217)] = 6598,
  [SMALL_STATE(218)] = 6611,
  [SMALL_STATE(219)] = 6624,
  [SMALL_STATE(220)] = 6641,
  [SMALL_STATE(221)] = 6656,
  [SMALL_STATE(222)] = 6673,
  [SMALL_STATE(223)] = 6690,
  [SMALL_STATE(224)] = 6707,
  [SMALL_STATE(225)] = 6722,
  [SMALL_STATE(226)] = 6735,
  [SMALL_STATE(227)] = 6748,
  [SMALL_STATE(228)] = 6765,
  [SMALL_STATE(229)] = 6776,
  [SMALL_STATE(230)] = 6791,
  [SMALL_STATE(231)] = 6806,
  [SMALL_STATE(232)] = 6823,
  [SMALL_STATE(233)] = 6838,
  [SMALL_STATE(234)] = 6849,
  [SMALL_STATE(235)] = 6864,
  [SMALL_STATE(236)] = 6881,
  [SMALL_STATE(237)] = 6894,
  [SMALL_STATE(238)] = 6907,
  [SMALL_STATE(239)] = 6924,
  [SMALL_STATE(240)] = 6937,
  [SMALL_STATE(241)] = 6952,
  [SMALL_STATE(242)] = 6966,
  [SMALL_STATE(243)] = 6980,
  [SMALL_STATE(244)] = 6994,
  [SMALL_STATE(245)] = 7008,
  [SMALL_STATE(246)] = 7022,
  [SMALL_STATE(247)] = 7036,
  [SMALL_STATE(248)] = 7050,
  [SMALL_STATE(249)] = 7064,
  [SMALL_STATE(250)] = 7074,
  [SMALL_STATE(251)] = 7088,
  [SMALL_STATE(252)] = 7102,
  [SMALL_STATE(253)] = 7116,
  [SMALL_STATE(254)] = 7130,
  [SMALL_STATE(255)] = 7144,
  [SMALL_STATE(256)] = 7158,
  [SMALL_STATE(257)] = 7172,
  [SMALL_STATE(258)] = 7186,
  [SMALL_STATE(259)] = 7200,
  [SMALL_STATE(260)] = 7214,
  [SMALL_STATE(261)] = 7228,
  [SMALL_STATE(262)] = 7242,
  [SMALL_STATE(263)] = 7256,
  [SMALL_STATE(264)] = 7270,
  [SMALL_STATE(265)] = 7284,
  [SMALL_STATE(266)] = 7298,
  [SMALL_STATE(267)] = 7312,
  [SMALL_STATE(268)] = 7326,
  [SMALL_STATE(269)] = 7336,
  [SMALL_STATE(270)] = 7350,
  [SMALL_STATE(271)] = 7360,
  [SMALL_STATE(272)] = 7374,
  [SMALL_STATE(273)] = 7388,
  [SMALL_STATE(274)] = 7402,
  [SMALL_STATE(275)] = 7416,
  [SMALL_STATE(276)] = 7426,
  [SMALL_STATE(277)] = 7440,
  [SMALL_STATE(278)] = 7454,
  [SMALL_STATE(279)] = 7468,
  [SMALL_STATE(280)] = 7478,
  [SMALL_STATE(281)] = 7488,
  [SMALL_STATE(282)] = 7502,
  [SMALL_STATE(283)] = 7516,
  [SMALL_STATE(284)] = 7530,
  [SMALL_STATE(285)] = 7544,
  [SMALL_STATE(286)] = 7558,
  [SMALL_STATE(287)] = 7572,
  [SMALL_STATE(288)] = 7586,
  [SMALL_STATE(289)] = 7600,
  [SMALL_STATE(290)] = 7614,
  [SMALL_STATE(291)] = 7628,
  [SMALL_STATE(292)] = 7642,
  [SMALL_STATE(293)] = 7656,
  [SMALL_STATE(294)] = 7670,
  [SMALL_STATE(295)] = 7684,
  [SMALL_STATE(296)] = 7698,
  [SMALL_STATE(297)] = 7712,
  [SMALL_STATE(298)] = 7726,
  [SMALL_STATE(299)] = 7735,
  [SMALL_STATE(300)] = 7744,
  [SMALL_STATE(301)] = 7753,
  [SMALL_STATE(302)] = 7764,
  [SMALL_STATE(303)] = 7773,
  [SMALL_STATE(304)] = 7782,
  [SMALL_STATE(305)] = 7791,
  [SMALL_STATE(306)] = 7802,
  [SMALL_STATE(307)] = 7811,
  [SMALL_STATE(308)] = 7820,
  [SMALL_STATE(309)] = 7829,
  [SMALL_STATE(310)] = 7840,
  [SMALL_STATE(311)] = 7849,
  [SMALL_STATE(312)] = 7858,
  [SMALL_STATE(313)] = 7867,
  [SMALL_STATE(314)] = 7878,
  [SMALL_STATE(315)] = 7887,
  [SMALL_STATE(316)] = 7898,
  [SMALL_STATE(317)] = 7907,
  [SMALL_STATE(318)] = 7916,
  [SMALL_STATE(319)] = 7925,
  [SMALL_STATE(320)] = 7934,
  [SMALL_STATE(321)] = 7945,
  [SMALL_STATE(322)] = 7954,
  [SMALL_STATE(323)] = 7963,
  [SMALL_STATE(324)] = 7974,
  [SMALL_STATE(325)] = 7983,
  [SMALL_STATE(326)] = 7992,
  [SMALL_STATE(327)] = 8001,
  [SMALL_STATE(328)] = 8010,
  [SMALL_STATE(329)] = 8019,
  [SMALL_STATE(330)] = 8028,
  [SMALL_STATE(331)] = 8039,
  [SMALL_STATE(332)] = 8050,
  [SMALL_STATE(333)] = 8061,
  [SMALL_STATE(334)] = 8070,
  [SMALL_STATE(335)] = 8079,
  [SMALL_STATE(336)] = 8090,
  [SMALL_STATE(337)] = 8099,
  [SMALL_STATE(338)] = 8108,
  [SMALL_STATE(339)] = 8117,
  [SMALL_STATE(340)] = 8125,
  [SMALL_STATE(341)] = 8133,
  [SMALL_STATE(342)] = 8141,
  [SMALL_STATE(343)] = 8149,
  [SMALL_STATE(344)] = 8157,
  [SMALL_STATE(345)] = 8165,
  [SMALL_STATE(346)] = 8173,
  [SMALL_STATE(347)] = 8181,
  [SMALL_STATE(348)] = 8189,
  [SMALL_STATE(349)] = 8197,
  [SMALL_STATE(350)] = 8205,
  [SMALL_STATE(351)] = 8213,
  [SMALL_STATE(352)] = 8221,
  [SMALL_STATE(353)] = 8229,
  [SMALL_STATE(354)] = 8237,
  [SMALL_STATE(355)] = 8245,
  [SMALL_STATE(356)] = 8253,
  [SMALL_STATE(357)] = 8261,
  [SMALL_STATE(358)] = 8269,
  [SMALL_STATE(359)] = 8277,
  [SMALL_STATE(360)] = 8285,
  [SMALL_STATE(361)] = 8293,
  [SMALL_STATE(362)] = 8301,
  [SMALL_STATE(363)] = 8309,
  [SMALL_STATE(364)] = 8317,
  [SMALL_STATE(365)] = 8325,
  [SMALL_STATE(366)] = 8333,
  [SMALL_STATE(367)] = 8341,
  [SMALL_STATE(368)] = 8349,
  [SMALL_STATE(369)] = 8357,
  [SMALL_STATE(370)] = 8365,
  [SMALL_STATE(371)] = 8373,
  [SMALL_STATE(372)] = 8381,
  [SMALL_STATE(373)] = 8389,
  [SMALL_STATE(374)] = 8397,
  [SMALL_STATE(375)] = 8405,
  [SMALL_STATE(376)] = 8413,
  [SMALL_STATE(377)] = 8421,
  [SMALL_STATE(378)] = 8429,
  [SMALL_STATE(379)] = 8437,
  [SMALL_STATE(380)] = 8445,
  [SMALL_STATE(381)] = 8453,
  [SMALL_STATE(382)] = 8461,
  [SMALL_STATE(383)] = 8469,
  [SMALL_STATE(384)] = 8477,
  [SMALL_STATE(385)] = 8485,
  [SMALL_STATE(386)] = 8493,
  [SMALL_STATE(387)] = 8501,
  [SMALL_STATE(388)] = 8509,
  [SMALL_STATE(389)] = 8517,
  [SMALL_STATE(390)] = 8525,
  [SMALL_STATE(391)] = 8533,
  [SMALL_STATE(392)] = 8541,
  [SMALL_STATE(393)] = 8549,
  [SMALL_STATE(394)] = 8557,
  [SMALL_STATE(395)] = 8565,
  [SMALL_STATE(396)] = 8573,
  [SMALL_STATE(397)] = 8581,
  [SMALL_STATE(398)] = 8589,
  [SMALL_STATE(399)] = 8597,
  [SMALL_STATE(400)] = 8605,
  [SMALL_STATE(401)] = 8613,
  [SMALL_STATE(402)] = 8621,
  [SMALL_STATE(403)] = 8629,
  [SMALL_STATE(404)] = 8637,
  [SMALL_STATE(405)] = 8645,
  [SMALL_STATE(406)] = 8653,
  [SMALL_STATE(407)] = 8661,
  [SMALL_STATE(408)] = 8669,
  [SMALL_STATE(409)] = 8677,
  [SMALL_STATE(410)] = 8685,
  [SMALL_STATE(411)] = 8693,
  [SMALL_STATE(412)] = 8701,
  [SMALL_STATE(413)] = 8709,
  [SMALL_STATE(414)] = 8717,
  [SMALL_STATE(415)] = 8725,
  [SMALL_STATE(416)] = 8733,
  [SMALL_STATE(417)] = 8741,
  [SMALL_STATE(418)] = 8749,
  [SMALL_STATE(419)] = 8757,
  [SMALL_STATE(420)] = 8765,
  [SMALL_STATE(421)] = 8773,
  [SMALL_STATE(422)] = 8781,
  [SMALL_STATE(423)] = 8789,
  [SMALL_STATE(424)] = 8797,
  [SMALL_STATE(425)] = 8805,
  [SMALL_STATE(426)] = 8813,
  [SMALL_STATE(427)] = 8821,
  [SMALL_STATE(428)] = 8829,
  [SMALL_STATE(429)] = 8837,
  [SMALL_STATE(430)] = 8845,
  [SMALL_STATE(431)] = 8853,
  [SMALL_STATE(432)] = 8861,
  [SMALL_STATE(433)] = 8869,
  [SMALL_STATE(434)] = 8877,
  [SMALL_STATE(435)] = 8885,
  [SMALL_STATE(436)] = 8893,
  [SMALL_STATE(437)] = 8901,
  [SMALL_STATE(438)] = 8909,
  [SMALL_STATE(439)] = 8917,
  [SMALL_STATE(440)] = 8925,
  [SMALL_STATE(441)] = 8933,
  [SMALL_STATE(442)] = 8941,
  [SMALL_STATE(443)] = 8949,
  [SMALL_STATE(444)] = 8957,
  [SMALL_STATE(445)] = 8965,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 18),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 18),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 14),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_param, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 20),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 28),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_param_function, 4, .production_id = 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 4, .production_id = 9),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 4, .production_id = 7),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 4, .production_id = 7),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 22),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unary_function, 4, .production_id = 7),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 4, .production_id = 7),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 6),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 7, .production_id = 29),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 29),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__count_function, 5, .production_id = 12),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 31),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 19),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(235),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 34),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 34),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 34),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 20),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 24),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 7, .production_id = 30),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(218),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(378),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(70),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 5, .production_id = 17),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 20),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 5, .production_id = 13),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 8, .production_id = 32),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function, 6, .production_id = 24),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 5, .production_id = 13),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_param_function, 6, .production_id = 25),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 9, .production_id = 35),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__count_function, 6, .production_id = 23),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(89),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 20),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 3),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(75),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(88),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 10),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 10),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 27),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 27),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(205),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(71),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(216),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(238),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_params, 2, .production_id = 8),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(208),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(214),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(135),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 16),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 16), SHIFT_REPEAT(21),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 26),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_params_repeat1, 2, .production_id = 15),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 33),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 33),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 20),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 21),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 21),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_function_name, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 21),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [835] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
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
