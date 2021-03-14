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

#define LANGUAGE_VERSION 12
#define STATE_COUNT 289
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8

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
  sym_keyword_distinct = 24,
  sym_keyword_constraint = 25,
  sym_keyword_count = 26,
  sym_keyword_max = 27,
  sym_keyword_min = 28,
  sym_keyword_avg = 29,
  sym_keyword_in = 30,
  sym_keyword_and = 31,
  sym_keyword_or = 32,
  sym_keyword_not = 33,
  sym_keyword_force = 34,
  sym_keyword_use = 35,
  sym_keyword_index = 36,
  sym_keyword_for = 37,
  sym_keyword_if = 38,
  sym_keyword_exists = 39,
  sym_keyword_auto_increment = 40,
  sym_keyword_default = 41,
  sym_keyword_bigint = 42,
  sym_keyword_null = 43,
  sym_keyword_date = 44,
  sym_keyword_datetime = 45,
  sym_keyword_char = 46,
  sym_keyword_varchar = 47,
  anon_sym_LPAREN = 48,
  anon_sym_RPAREN = 49,
  sym_comment = 50,
  sym_marginalia = 51,
  anon_sym_SEMI = 52,
  anon_sym_DOT = 53,
  anon_sym_COMMA = 54,
  anon_sym_EQ = 55,
  anon_sym_STAR = 56,
  anon_sym_PLUS = 57,
  anon_sym_DASH = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  anon_sym_CARET = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_BANG_EQ = 64,
  anon_sym_GT_EQ = 65,
  anon_sym_GT = 66,
  anon_sym_SQUOTE = 67,
  aux_sym__literal_string_token1 = 68,
  anon_sym_DQUOTE = 69,
  sym__number = 70,
  anon_sym_BQUOTE = 71,
  sym__identifier = 72,
  sym_program = 73,
  sym__not_null = 74,
  sym__primary_key = 75,
  sym__if_not_exists = 76,
  sym__default_null = 77,
  sym_direction = 78,
  sym__type = 79,
  sym_bigint = 80,
  sym_char = 81,
  sym_varchar = 82,
  sym_statement = 83,
  sym__select_statement = 84,
  sym_select = 85,
  sym_select_expression = 86,
  sym__delete_statement = 87,
  sym__delete_from = 88,
  sym_delete = 89,
  sym__create_statement = 90,
  sym_create = 91,
  sym__create_table_expression = 92,
  sym__insert_statement = 93,
  sym_insert = 94,
  sym_insert_expression = 95,
  sym__column_list_without_order = 96,
  sym__column_without_order = 97,
  sym__update_statement = 98,
  sym_update = 99,
  sym_update_expression = 100,
  sym_assignment_list = 101,
  sym_table_options = 102,
  sym_table_option = 103,
  sym_column_definitions = 104,
  sym_column_definition = 105,
  sym_constraints = 106,
  sym_constraint = 107,
  sym__constraint_literal = 108,
  sym__primary_key_constraint = 109,
  sym__key_constraint = 110,
  sym_column_list = 111,
  sym_column = 112,
  sym__field_list = 113,
  sym_field = 114,
  sym_function_call = 115,
  sym__function_name = 116,
  sym_from = 117,
  sym_table_expression = 118,
  sym_index_hint = 119,
  sym_join = 120,
  sym_where = 121,
  sym_group_by = 122,
  sym__having = 123,
  sym_order_by = 124,
  sym_order_expression = 125,
  sym_limit = 126,
  sym_offset = 127,
  sym_where_expression = 128,
  sym_predicate = 129,
  sym__expression = 130,
  sym_list = 131,
  sym_literal = 132,
  sym__literal_string = 133,
  sym_identifier = 134,
  aux_sym__column_list_without_order_repeat1 = 135,
  aux_sym_table_options_repeat1 = 136,
  aux_sym_column_definitions_repeat1 = 137,
  aux_sym_constraints_repeat1 = 138,
  aux_sym_column_list_repeat1 = 139,
  aux_sym__field_list_repeat1 = 140,
  aux_sym_from_repeat1 = 141,
  aux_sym_list_repeat1 = 142,
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
  [sym_keyword_distinct] = "keyword_distinct",
  [sym_keyword_constraint] = "keyword_constraint",
  [sym_keyword_count] = "keyword_count",
  [sym_keyword_max] = "keyword_max",
  [sym_keyword_min] = "keyword_min",
  [sym_keyword_avg] = "keyword_avg",
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
  [sym__create_table_expression] = "table_expression",
  [sym__insert_statement] = "_insert_statement",
  [sym_insert] = "insert",
  [sym_insert_expression] = "insert_expression",
  [sym__column_list_without_order] = "column_list",
  [sym__column_without_order] = "column",
  [sym__update_statement] = "_update_statement",
  [sym_update] = "update",
  [sym_update_expression] = "update_expression",
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
  [sym__function_name] = "_function_name",
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
  [sym_list] = "list",
  [sym_literal] = "literal",
  [sym__literal_string] = "_literal_string",
  [sym_identifier] = "identifier",
  [aux_sym__column_list_without_order_repeat1] = "_column_list_without_order_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_column_definitions_repeat1] = "column_definitions_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
  [aux_sym_from_repeat1] = "from_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [sym_keyword_distinct] = sym_keyword_distinct,
  [sym_keyword_constraint] = sym_keyword_constraint,
  [sym_keyword_count] = sym_keyword_count,
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
  [sym__create_table_expression] = sym_table_expression,
  [sym__insert_statement] = sym__insert_statement,
  [sym_insert] = sym_insert,
  [sym_insert_expression] = sym_insert_expression,
  [sym__column_list_without_order] = sym_column_list,
  [sym__column_without_order] = sym_column,
  [sym__update_statement] = sym__update_statement,
  [sym_update] = sym_update,
  [sym_update_expression] = sym_update_expression,
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
  [sym__function_name] = sym__function_name,
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
  [sym_list] = sym_list,
  [sym_literal] = sym_literal,
  [sym__literal_string] = sym__literal_string,
  [sym_identifier] = sym_identifier,
  [aux_sym__column_list_without_order_repeat1] = aux_sym__column_list_without_order_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_column_definitions_repeat1] = aux_sym_column_definitions_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
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
  [sym__create_table_expression] = {
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
  [sym__function_name] = {
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
  field_function_name = 1,
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
  [field_function_name] = "function_name",
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

static const TSFieldMapSlice ts_field_map_slices[19] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 0, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
    {field_table_alias, 0},
  [3] =
    {field_name, 2, .inherited = true},
    {field_schema, 2, .inherited = true},
  [5] =
    {field_name, 0, .inherited = true},
    {field_schema, 0, .inherited = true},
  [7] =
    {field_name, 2},
    {field_schema, 0},
  [9] =
    {field_name, 0},
    {field_table_alias, 1},
  [11] =
    {field_function_name, 0},
    {field_parameter, 2},
  [13] =
    {field_name, 3, .inherited = true},
    {field_schema, 3, .inherited = true},
  [15] =
    {field_index_name, 3},
  [16] =
    {field_name, 0},
    {field_type, 1},
  [18] =
    {field_name, 1, .inherited = true},
  [19] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [22] =
    {field_name, 0, .inherited = true},
  [23] =
    {field_name, 0},
    {field_value, 2},
  [25] =
    {field_index_name, 5},
  [26] =
    {field_name, 1},
  [27] =
    {field_size, 2},
};

static TSSymbol ts_alias_sequences[19][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = sym_identifier,
  },
  [18] = {
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
      if (eof) ADVANCE(392);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '%') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(472);
      if (lookahead == ',') ADVANCE(469);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '.') ADVANCE(468);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'J') ADVANCE(139);
      if (lookahead == 'K') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == 'V') ADVANCE(25);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '^') ADVANCE(476);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'j') ADVANCE(318);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(475);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(472);
      if (lookahead == ',') ADVANCE(469);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '.') ADVANCE(468);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == 'A') ADVANCE(118);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(25);
      if (lookahead == '^') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(380)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(475);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(472);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '.') ADVANCE(468);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(140);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'J') ADVANCE(139);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '^') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'j') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(381)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(560);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(516);
      if (lookahead == 'M') ADVANCE(498);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'd') ADVANCE(582);
      if (lookahead == 'm') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead == 'J') ADVANCE(139);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'j') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(379)
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'D') ADVANCE(509);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'G') ADVANCE(545);
      if (lookahead == 'J') ADVANCE(537);
      if (lookahead == 'L') ADVANCE(518);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'U') ADVANCE(548);
      if (lookahead == 'W') ADVANCE(515);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(611);
      if (lookahead == 'j') ADVANCE(603);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(614);
      if (lookahead == 'w') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'L') ADVANCE(518);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'W') ADVANCE(515);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'w') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'K') ADVANCE(505);
      if (lookahead == 'P') ADVANCE(543);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == 'k') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'O') ADVANCE(529);
      if (lookahead == 'U') ADVANCE(548);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(512);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(479);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(192);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(184);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(184);
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(190);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(148);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(151);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(149);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(186);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(188);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(198);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(413);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(412);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(175);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(177);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(435);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(135);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(442);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(456);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(440);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(419);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(407);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(394);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(398);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(397);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(458);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 79:
      if (lookahead == 'F') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(434);
      END_STATE();
    case 80:
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(437);
      END_STATE();
    case 81:
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(436);
      END_STATE();
    case 82:
      if (lookahead == 'F') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(432);
      END_STATE();
    case 85:
      if (lookahead == 'G') ADVANCE(411);
      END_STATE();
    case 86:
      if (lookahead == 'G') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'H') ADVANCE(30);
      END_STATE();
    case 88:
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'H') ADVANCE(68);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(132);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(172);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(167);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(455);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(31);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(76);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(401);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 112:
      if (lookahead == 'M') ADVANCE(402);
      END_STATE();
    case 113:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 114:
      if (lookahead == 'M') ADVANCE(99);
      END_STATE();
    case 115:
      if (lookahead == 'M') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(78);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(40);
      if (lookahead == 'U') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(84);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(434);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(430);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(403);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(179);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(200);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(399);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(159);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 144:
      if (lookahead == 'P') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 145:
      if (lookahead == 'P') ADVANCE(106);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(437);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(446);
      END_STATE();
    case 148:
      if (lookahead == 'R') ADVANCE(459);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(460);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(445);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(197);
      END_STATE();
    case 152:
      if (lookahead == 'R') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 161:
      if (lookahead == 'S') ADVANCE(450);
      END_STATE();
    case 162:
      if (lookahead == 'S') ADVANCE(400);
      END_STATE();
    case 163:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 164:
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 166:
      if (lookahead == 'S') ADVANCE(183);
      END_STATE();
    case 167:
      if (lookahead == 'S') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(439);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(401);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(426);
      END_STATE();
    case 172:
      if (lookahead == 'T') ADVANCE(414);
      END_STATE();
    case 173:
      if (lookahead == 'T') ADVANCE(454);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(416);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(393);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(452);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(422);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(424);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(451);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(396);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 189:
      if (lookahead == 'U') ADVANCE(143);
      END_STATE();
    case 190:
      if (lookahead == 'U') ADVANCE(110);
      END_STATE();
    case 191:
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 192:
      if (lookahead == 'V') ADVANCE(96);
      END_STATE();
    case 193:
      if (lookahead == 'X') ADVANCE(428);
      END_STATE();
    case 194:
      if (lookahead == 'X') ADVANCE(444);
      END_STATE();
    case 195:
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 196:
      if (lookahead == 'Y') ADVANCE(420);
      END_STATE();
    case 197:
      if (lookahead == 'Y') ADVANCE(417);
      END_STATE();
    case 198:
      if (lookahead == 'Y') ADVANCE(410);
      END_STATE();
    case 199:
      if (lookahead == 'Y') ADVANCE(409);
      END_STATE();
    case 200:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 201:
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 216:
      if (lookahead == 'b') ADVANCE(377);
      END_STATE();
    case 217:
      if (lookahead == 'b') ADVANCE(378);
      END_STATE();
    case 218:
      if (lookahead == 'b') ADVANCE(290);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(244);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 258:
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 259:
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 260:
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 261:
      if (lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 262:
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(411);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(247);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 322:
      if (lookahead == 'p') ADVANCE(230);
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 323:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 324:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 368:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 369:
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 370:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 371:
      if (lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 372:
      if (lookahead == 'x') ADVANCE(428);
      END_STATE();
    case 373:
      if (lookahead == 'x') ADVANCE(444);
      END_STATE();
    case 374:
      if (lookahead == 'x') ADVANCE(280);
      END_STATE();
    case 375:
      if (lookahead == 'y') ADVANCE(420);
      END_STATE();
    case 376:
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 377:
      if (lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 378:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 379:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(379)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead == 'J') ADVANCE(139);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'j') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 380:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(380)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(475);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(472);
      if (lookahead == ',') ADVANCE(469);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '.') ADVANCE(468);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == 'A') ADVANCE(118);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(25);
      if (lookahead == '^') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(204);
      END_STATE();
    case 381:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(381)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(475);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(472);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '.') ADVANCE(468);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(140);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'J') ADVANCE(139);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '^') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'j') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 382:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(560);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(516);
      if (lookahead == 'M') ADVANCE(498);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'd') ADVANCE(582);
      if (lookahead == 'm') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 383:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 384:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'K') ADVANCE(505);
      if (lookahead == 'P') ADVANCE(543);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == 'k') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'G') ADVANCE(545);
      if (lookahead == 'J') ADVANCE(537);
      if (lookahead == 'L') ADVANCE(518);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'U') ADVANCE(548);
      if (lookahead == 'W') ADVANCE(515);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(611);
      if (lookahead == 'j') ADVANCE(603);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(614);
      if (lookahead == 'w') ADVANCE(581);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 386:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'D') ADVANCE(509);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == 'L') ADVANCE(518);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'W') ADVANCE(515);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'w') ADVANCE(581);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 388:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(512);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'O') ADVANCE(529);
      if (lookahead == 'U') ADVANCE(548);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(614);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 390:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(321);
      END_STATE();
    case 391:
      if (eof) ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '%') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(472);
      if (lookahead == ',') ADVANCE(469);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '.') ADVANCE(468);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead == ';') ADVANCE(467);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'J') ADVANCE(139);
      if (lookahead == 'K') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == 'V') ADVANCE(25);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '^') ADVANCE(476);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'j') ADVANCE(318);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(57);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(490);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(480);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead == '/') ADVANCE(465);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '/') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(490);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(490);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '/') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(561);
      if (lookahead == 'I') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
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
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
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
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
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
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 15},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 487},
  [260] = {.lex_state = 487},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 15},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 487},
  [282] = {.lex_state = 487},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
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
    [sym_program] = STATE(270),
    [sym_statement] = STATE(267),
    [sym__select_statement] = STATE(266),
    [sym_select] = STATE(165),
    [sym__delete_statement] = STATE(266),
    [sym_delete] = STATE(179),
    [sym__create_statement] = STATE(266),
    [sym_create] = STATE(263),
    [sym__insert_statement] = STATE(266),
    [sym_insert] = STATE(262),
    [sym__update_statement] = STATE(266),
    [sym_update] = STATE(261),
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
    ACTIONS(15), 30,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_on,
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
  [44] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 30,
      sym_keyword_values,
      sym_keyword_set,
      sym_keyword_from,
      sym_keyword_on,
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
  [88] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 20,
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
  [122] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 20,
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
  [156] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 19,
      sym_keyword_from,
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
  [188] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 19,
      sym_keyword_from,
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
  [220] = 4,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 18,
      sym_keyword_from,
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
  [254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 18,
      sym_keyword_from,
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
  [285] = 4,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [318] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 15,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [350] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [380] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(51), 10,
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
  [412] = 11,
    ACTIONS(45), 1,
      sym_keyword_or,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(55), 1,
      sym_keyword_in,
    ACTIONS(61), 1,
      anon_sym_PLUS,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
  [458] = 9,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(55), 1,
      sym_keyword_in,
    ACTIONS(61), 1,
      anon_sym_PLUS,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(45), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 11,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [500] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [530] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [560] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [590] = 6,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(45), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 13,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [626] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [656] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(51), 10,
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
  [688] = 8,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(61), 1,
      anon_sym_PLUS,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(45), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 12,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [728] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [758] = 12,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(55), 1,
      sym_keyword_in,
    ACTIONS(61), 1,
      anon_sym_PLUS,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(81), 1,
      sym_keyword_and,
    ACTIONS(83), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [804] = 14,
    ACTIONS(87), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(181), 1,
      sym_order_expression,
    STATE(254), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(71), 2,
      sym_field,
      sym_function_call,
    STATE(103), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [854] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(53), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 10,
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
  [884] = 14,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_STAR,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(180), 1,
      sym_select_expression,
    STATE(254), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(71), 2,
      sym_field,
      sym_function_call,
    STATE(182), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [934] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(53), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 10,
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
  [963] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 12,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [988] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 12,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1013] = 14,
    ACTIONS(105), 1,
      sym_keyword_join,
    ACTIONS(107), 1,
      sym_keyword_where,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(111), 1,
      sym_keyword_group_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_index_hint,
    STATE(82), 1,
      sym_where,
    STATE(104), 1,
      sym_group_by,
    STATE(144), 1,
      sym_order_by,
    STATE(227), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 2,
      sym_keyword_force,
      sym_keyword_use,
    STATE(46), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1059] = 10,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(55), 1,
      sym_keyword_in,
    ACTIONS(61), 1,
      anon_sym_PLUS,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(57), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1097] = 11,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    STATE(126), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(24), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1136] = 12,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(26), 1,
      sym_predicate,
    STATE(76), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(32), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1177] = 11,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(13), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(32), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1215] = 10,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(15), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1251] = 10,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(19), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1287] = 10,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(11), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1323] = 10,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(12), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1359] = 11,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(21), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(32), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1397] = 11,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(28), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(32), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1435] = 10,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(22), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1471] = 10,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(14), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1507] = 10,
    ACTIONS(137), 1,
      sym_keyword_primary,
    ACTIONS(139), 1,
      sym_keyword_not,
    ACTIONS(141), 1,
      sym_keyword_auto_increment,
    ACTIONS(143), 1,
      sym_keyword_default,
    STATE(100), 1,
      sym__primary_key,
    STATE(195), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(145), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(63), 2,
      sym__not_null,
      sym__default_null,
  [1542] = 12,
    ACTIONS(105), 1,
      sym_keyword_join,
    ACTIONS(107), 1,
      sym_keyword_where,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(111), 1,
      sym_keyword_group_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_where,
    STATE(109), 1,
      sym_group_by,
    STATE(148), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1581] = 12,
    ACTIONS(105), 1,
      sym_keyword_join,
    ACTIONS(107), 1,
      sym_keyword_where,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(111), 1,
      sym_keyword_group_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_where,
    STATE(109), 1,
      sym_group_by,
    STATE(148), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(68), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1620] = 11,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(149), 1,
      sym_keyword_primary,
    ACTIONS(151), 1,
      sym_keyword_key,
    ACTIONS(153), 1,
      sym_keyword_constraint,
    STATE(55), 1,
      sym_identifier,
    STATE(164), 1,
      sym_constraint,
    STATE(185), 1,
      sym__primary_key,
    STATE(186), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(187), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [1657] = 12,
    ACTIONS(105), 1,
      sym_keyword_join,
    ACTIONS(107), 1,
      sym_keyword_where,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(111), 1,
      sym_keyword_group_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_where,
    STATE(97), 1,
      sym_group_by,
    STATE(172), 1,
      sym_order_by,
    STATE(264), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(68), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1696] = 6,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(157), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [1722] = 7,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(254), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(89), 2,
      sym_field,
      sym_function_call,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1750] = 7,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(254), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(233), 2,
      sym_field,
      sym_function_call,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1778] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [1797] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [1816] = 3,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1834] = 7,
    ACTIONS(167), 1,
      sym_keyword_bigint,
    ACTIONS(169), 1,
      sym_keyword_date,
    ACTIONS(171), 1,
      sym_keyword_datetime,
    ACTIONS(173), 1,
      sym_keyword_char,
    ACTIONS(175), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(44), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [1860] = 3,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1878] = 3,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(181), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1896] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 9,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      anon_sym_SEMI,
  [1912] = 7,
    ACTIONS(137), 1,
      sym_keyword_primary,
    ACTIONS(187), 1,
      sym_keyword_key,
    ACTIONS(189), 1,
      sym_keyword_constraint,
    STATE(185), 1,
      sym__primary_key,
    STATE(196), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(187), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [1937] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(191), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1952] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1967] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1982] = 7,
    ACTIONS(137), 1,
      sym_keyword_primary,
    ACTIONS(197), 1,
      sym_keyword_auto_increment,
    STATE(95), 1,
      sym__primary_key,
    STATE(201), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(199), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2007] = 8,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(201), 1,
      sym_keyword_default,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      sym_table_options,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(70), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2034] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2049] = 8,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(201), 1,
      sym_keyword_default,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      sym_table_options,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(70), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(209), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2091] = 4,
    ACTIONS(211), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(68), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(214), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2110] = 6,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(161), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(159), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [2132] = 7,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(201), 1,
      sym_keyword_default,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(79), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2156] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(218), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2174] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(222), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2188] = 8,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(111), 1,
      sym_keyword_group_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_group_by,
    STATE(172), 1,
      sym_order_by,
    STATE(264), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2214] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(224), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2232] = 4,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(226), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2250] = 8,
    ACTIONS(107), 1,
      sym_keyword_where,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_where,
    STATE(158), 1,
      sym_order_by,
    STATE(265), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2276] = 6,
    ACTIONS(137), 1,
      sym_keyword_primary,
    STATE(94), 1,
      sym__primary_key,
    STATE(193), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2298] = 6,
    ACTIONS(137), 1,
      sym_keyword_primary,
    STATE(95), 1,
      sym__primary_key,
    STATE(201), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(199), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2320] = 7,
    ACTIONS(235), 1,
      sym_keyword_default,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      anon_sym_BQUOTE,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(79), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2344] = 8,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(111), 1,
      sym_keyword_group_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_group_by,
    STATE(156), 1,
      sym_order_by,
    STATE(212), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2370] = 8,
    ACTIONS(107), 1,
      sym_keyword_where,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_where,
    STATE(143), 1,
      sym_order_by,
    STATE(234), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2396] = 8,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(111), 1,
      sym_keyword_group_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_group_by,
    STATE(148), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2422] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(250), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2435] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(252), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2448] = 7,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(254), 1,
      sym_keyword_if,
    STATE(116), 1,
      sym__if_not_exists,
    STATE(132), 1,
      sym_identifier,
    STATE(194), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__identifier,
  [2486] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [2505] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__identifier,
  [2520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(226), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2533] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(256), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2545] = 6,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
    STATE(166), 1,
      sym__create_table_expression,
    STATE(257), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2565] = 6,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(163), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2585] = 6,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_order_by,
    STATE(238), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2605] = 4,
    STATE(188), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(260), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2621] = 4,
    STATE(193), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2637] = 6,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(174), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2657] = 6,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_order_by,
    STATE(212), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2677] = 6,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(136), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2697] = 6,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_order_by,
    STATE(206), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2717] = 4,
    STATE(201), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(199), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2733] = 4,
    STATE(189), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(264), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2749] = 6,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(211), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2769] = 4,
    STATE(176), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(266), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2785] = 6,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2805] = 6,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(173), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2825] = 3,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [2839] = 3,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [2853] = 4,
    ACTIONS(270), 1,
      sym_keyword_having,
    STATE(168), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(268), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2869] = 6,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_order_by,
    STATE(264), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2889] = 6,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
    STATE(239), 1,
      sym_update_expression,
    STATE(240), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2909] = 6,
    ACTIONS(109), 1,
      sym_keyword_order_by,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    STATE(137), 1,
      sym_order_by,
    STATE(216), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2929] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(167), 1,
      sym__column_without_order,
    STATE(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2946] = 5,
    ACTIONS(274), 1,
      anon_sym_BQUOTE,
    ACTIONS(276), 1,
      sym__identifier,
    STATE(31), 1,
      sym_table_expression,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2963] = 5,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_column_definitions_repeat1,
    STATE(231), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2980] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(282), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(284), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [2993] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
    STATE(203), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3010] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(286), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(288), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3023] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [3036] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(290), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3047] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [3060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(294), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3073] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(114), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3090] = 4,
    ACTIONS(296), 1,
      sym_keyword_from,
    STATE(242), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 2,
      sym_keyword_force,
      sym_keyword_use,
  [3105] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
    STATE(141), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3122] = 4,
    ACTIONS(298), 1,
      sym_keyword_on,
    STATE(230), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 2,
      sym_keyword_force,
      sym_keyword_use,
  [3137] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(300), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3148] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(177), 1,
      sym_identifier,
    STATE(197), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3165] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(302), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(304), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3178] = 5,
    ACTIONS(306), 1,
      anon_sym_BQUOTE,
    ACTIONS(308), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(125), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3195] = 5,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_column_definitions_repeat1,
    STATE(250), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3212] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
    STATE(184), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3229] = 3,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(312), 3,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
  [3242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(316), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(318), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3255] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(186), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3272] = 5,
    ACTIONS(320), 1,
      anon_sym_BQUOTE,
    ACTIONS(322), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(81), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3289] = 4,
    ACTIONS(324), 1,
      sym_keyword_offset,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    STATE(268), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3303] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3317] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(256), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3331] = 4,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3345] = 4,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(255), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3359] = 4,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3373] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    STATE(243), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3387] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3401] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3415] = 4,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3429] = 4,
    ACTIONS(343), 1,
      anon_sym_BQUOTE,
    ACTIONS(345), 1,
      sym__identifier,
    STATE(121), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3443] = 4,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3457] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3471] = 4,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3485] = 4,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3499] = 4,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3513] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(364), 3,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
  [3523] = 4,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3537] = 4,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3551] = 4,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3565] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(206), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3579] = 4,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3593] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3607] = 4,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3621] = 4,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3635] = 4,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3649] = 4,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3663] = 4,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3677] = 4,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3691] = 4,
    ACTIONS(389), 1,
      sym_keyword_from,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3705] = 4,
    ACTIONS(393), 1,
      sym_keyword_values,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3719] = 4,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3733] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3743] = 4,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3757] = 4,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3771] = 4,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(152), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3785] = 4,
    ACTIONS(113), 1,
      sym_keyword_limit,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3799] = 4,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3813] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3822] = 3,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(405), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(407), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3851] = 3,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3862] = 3,
    ACTIONS(409), 1,
      sym_keyword_from,
    STATE(225), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3873] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(413), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3891] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3900] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3909] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(366), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3918] = 3,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3929] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3938] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(419), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3947] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(421), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3956] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(423), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3965] = 3,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(275), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3976] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(425), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3985] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3994] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(260), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4003] = 3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4014] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(199), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4023] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(332), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4032] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4041] = 3,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4052] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4061] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(435), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [4070] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4079] = 3,
    ACTIONS(137), 1,
      sym_keyword_primary,
    STATE(198), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4090] = 3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4101] = 3,
    ACTIONS(437), 1,
      sym_keyword_for,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4112] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(441), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4121] = 2,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4129] = 2,
    ACTIONS(443), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4137] = 2,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4145] = 2,
    ACTIONS(447), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4153] = 2,
    ACTIONS(449), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4161] = 2,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4169] = 2,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4177] = 2,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4185] = 2,
    ACTIONS(453), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4193] = 2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4201] = 2,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4209] = 2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4217] = 2,
    ACTIONS(459), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4225] = 2,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4233] = 2,
    ACTIONS(463), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4241] = 2,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4249] = 2,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4257] = 2,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4265] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4273] = 2,
    ACTIONS(473), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4281] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4289] = 2,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4297] = 2,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4305] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4313] = 2,
    ACTIONS(481), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4321] = 2,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4329] = 2,
    ACTIONS(483), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4337] = 2,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4345] = 2,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4353] = 2,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4361] = 2,
    ACTIONS(489), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4369] = 2,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4377] = 2,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4385] = 2,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4393] = 2,
    ACTIONS(495), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4401] = 2,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4409] = 2,
    ACTIONS(499), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4417] = 2,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4425] = 2,
    ACTIONS(503), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4433] = 2,
    ACTIONS(505), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4441] = 2,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4449] = 2,
    ACTIONS(509), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4457] = 2,
    ACTIONS(511), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4465] = 2,
    ACTIONS(513), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4473] = 2,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4481] = 2,
    ACTIONS(517), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4489] = 2,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4497] = 2,
    ACTIONS(519), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4505] = 2,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4513] = 2,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4521] = 2,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4529] = 2,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4537] = 2,
    ACTIONS(529), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4545] = 2,
    ACTIONS(533), 1,
      aux_sym__literal_string_token1,
    ACTIONS(531), 2,
      sym_comment,
      sym_marginalia,
  [4553] = 2,
    ACTIONS(535), 1,
      aux_sym__literal_string_token1,
    ACTIONS(531), 2,
      sym_comment,
      sym_marginalia,
  [4561] = 2,
    ACTIONS(537), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4569] = 2,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4577] = 2,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4585] = 2,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4593] = 2,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4601] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4609] = 2,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4617] = 2,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4625] = 2,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4633] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4641] = 2,
    ACTIONS(553), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4649] = 2,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4657] = 2,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4665] = 2,
    ACTIONS(557), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4673] = 2,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4681] = 2,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4689] = 2,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4697] = 2,
    ACTIONS(565), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4705] = 2,
    ACTIONS(567), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4713] = 2,
    ACTIONS(569), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4721] = 2,
    ACTIONS(571), 1,
      aux_sym__literal_string_token1,
    ACTIONS(531), 2,
      sym_comment,
      sym_marginalia,
  [4729] = 2,
    ACTIONS(573), 1,
      aux_sym__literal_string_token1,
    ACTIONS(531), 2,
      sym_comment,
      sym_marginalia,
  [4737] = 2,
    ACTIONS(575), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4745] = 2,
    ACTIONS(577), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4753] = 2,
    ACTIONS(579), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4761] = 2,
    ACTIONS(581), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4769] = 2,
    ACTIONS(583), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4777] = 2,
    ACTIONS(585), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 350,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 412,
  [SMALL_STATE(15)] = 458,
  [SMALL_STATE(16)] = 500,
  [SMALL_STATE(17)] = 530,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 626,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 688,
  [SMALL_STATE(23)] = 728,
  [SMALL_STATE(24)] = 758,
  [SMALL_STATE(25)] = 804,
  [SMALL_STATE(26)] = 854,
  [SMALL_STATE(27)] = 884,
  [SMALL_STATE(28)] = 934,
  [SMALL_STATE(29)] = 963,
  [SMALL_STATE(30)] = 988,
  [SMALL_STATE(31)] = 1013,
  [SMALL_STATE(32)] = 1059,
  [SMALL_STATE(33)] = 1097,
  [SMALL_STATE(34)] = 1136,
  [SMALL_STATE(35)] = 1177,
  [SMALL_STATE(36)] = 1215,
  [SMALL_STATE(37)] = 1251,
  [SMALL_STATE(38)] = 1287,
  [SMALL_STATE(39)] = 1323,
  [SMALL_STATE(40)] = 1359,
  [SMALL_STATE(41)] = 1397,
  [SMALL_STATE(42)] = 1435,
  [SMALL_STATE(43)] = 1471,
  [SMALL_STATE(44)] = 1507,
  [SMALL_STATE(45)] = 1542,
  [SMALL_STATE(46)] = 1581,
  [SMALL_STATE(47)] = 1620,
  [SMALL_STATE(48)] = 1657,
  [SMALL_STATE(49)] = 1696,
  [SMALL_STATE(50)] = 1722,
  [SMALL_STATE(51)] = 1750,
  [SMALL_STATE(52)] = 1778,
  [SMALL_STATE(53)] = 1797,
  [SMALL_STATE(54)] = 1816,
  [SMALL_STATE(55)] = 1834,
  [SMALL_STATE(56)] = 1860,
  [SMALL_STATE(57)] = 1878,
  [SMALL_STATE(58)] = 1896,
  [SMALL_STATE(59)] = 1912,
  [SMALL_STATE(60)] = 1937,
  [SMALL_STATE(61)] = 1952,
  [SMALL_STATE(62)] = 1967,
  [SMALL_STATE(63)] = 1982,
  [SMALL_STATE(64)] = 2007,
  [SMALL_STATE(65)] = 2034,
  [SMALL_STATE(66)] = 2049,
  [SMALL_STATE(67)] = 2076,
  [SMALL_STATE(68)] = 2091,
  [SMALL_STATE(69)] = 2110,
  [SMALL_STATE(70)] = 2132,
  [SMALL_STATE(71)] = 2156,
  [SMALL_STATE(72)] = 2174,
  [SMALL_STATE(73)] = 2188,
  [SMALL_STATE(74)] = 2214,
  [SMALL_STATE(75)] = 2232,
  [SMALL_STATE(76)] = 2250,
  [SMALL_STATE(77)] = 2276,
  [SMALL_STATE(78)] = 2298,
  [SMALL_STATE(79)] = 2320,
  [SMALL_STATE(80)] = 2344,
  [SMALL_STATE(81)] = 2370,
  [SMALL_STATE(82)] = 2396,
  [SMALL_STATE(83)] = 2422,
  [SMALL_STATE(84)] = 2435,
  [SMALL_STATE(85)] = 2448,
  [SMALL_STATE(86)] = 2471,
  [SMALL_STATE(87)] = 2486,
  [SMALL_STATE(88)] = 2505,
  [SMALL_STATE(89)] = 2520,
  [SMALL_STATE(90)] = 2533,
  [SMALL_STATE(91)] = 2545,
  [SMALL_STATE(92)] = 2565,
  [SMALL_STATE(93)] = 2585,
  [SMALL_STATE(94)] = 2605,
  [SMALL_STATE(95)] = 2621,
  [SMALL_STATE(96)] = 2637,
  [SMALL_STATE(97)] = 2657,
  [SMALL_STATE(98)] = 2677,
  [SMALL_STATE(99)] = 2697,
  [SMALL_STATE(100)] = 2717,
  [SMALL_STATE(101)] = 2733,
  [SMALL_STATE(102)] = 2749,
  [SMALL_STATE(103)] = 2769,
  [SMALL_STATE(104)] = 2785,
  [SMALL_STATE(105)] = 2805,
  [SMALL_STATE(106)] = 2825,
  [SMALL_STATE(107)] = 2839,
  [SMALL_STATE(108)] = 2853,
  [SMALL_STATE(109)] = 2869,
  [SMALL_STATE(110)] = 2889,
  [SMALL_STATE(111)] = 2909,
  [SMALL_STATE(112)] = 2929,
  [SMALL_STATE(113)] = 2946,
  [SMALL_STATE(114)] = 2963,
  [SMALL_STATE(115)] = 2980,
  [SMALL_STATE(116)] = 2993,
  [SMALL_STATE(117)] = 3010,
  [SMALL_STATE(118)] = 3023,
  [SMALL_STATE(119)] = 3036,
  [SMALL_STATE(120)] = 3047,
  [SMALL_STATE(121)] = 3060,
  [SMALL_STATE(122)] = 3073,
  [SMALL_STATE(123)] = 3090,
  [SMALL_STATE(124)] = 3105,
  [SMALL_STATE(125)] = 3122,
  [SMALL_STATE(126)] = 3137,
  [SMALL_STATE(127)] = 3148,
  [SMALL_STATE(128)] = 3165,
  [SMALL_STATE(129)] = 3178,
  [SMALL_STATE(130)] = 3195,
  [SMALL_STATE(131)] = 3212,
  [SMALL_STATE(132)] = 3229,
  [SMALL_STATE(133)] = 3242,
  [SMALL_STATE(134)] = 3255,
  [SMALL_STATE(135)] = 3272,
  [SMALL_STATE(136)] = 3289,
  [SMALL_STATE(137)] = 3303,
  [SMALL_STATE(138)] = 3317,
  [SMALL_STATE(139)] = 3331,
  [SMALL_STATE(140)] = 3345,
  [SMALL_STATE(141)] = 3359,
  [SMALL_STATE(142)] = 3373,
  [SMALL_STATE(143)] = 3387,
  [SMALL_STATE(144)] = 3401,
  [SMALL_STATE(145)] = 3415,
  [SMALL_STATE(146)] = 3429,
  [SMALL_STATE(147)] = 3443,
  [SMALL_STATE(148)] = 3457,
  [SMALL_STATE(149)] = 3471,
  [SMALL_STATE(150)] = 3485,
  [SMALL_STATE(151)] = 3499,
  [SMALL_STATE(152)] = 3513,
  [SMALL_STATE(153)] = 3523,
  [SMALL_STATE(154)] = 3537,
  [SMALL_STATE(155)] = 3551,
  [SMALL_STATE(156)] = 3565,
  [SMALL_STATE(157)] = 3579,
  [SMALL_STATE(158)] = 3593,
  [SMALL_STATE(159)] = 3607,
  [SMALL_STATE(160)] = 3621,
  [SMALL_STATE(161)] = 3635,
  [SMALL_STATE(162)] = 3649,
  [SMALL_STATE(163)] = 3663,
  [SMALL_STATE(164)] = 3677,
  [SMALL_STATE(165)] = 3691,
  [SMALL_STATE(166)] = 3705,
  [SMALL_STATE(167)] = 3719,
  [SMALL_STATE(168)] = 3733,
  [SMALL_STATE(169)] = 3743,
  [SMALL_STATE(170)] = 3757,
  [SMALL_STATE(171)] = 3771,
  [SMALL_STATE(172)] = 3785,
  [SMALL_STATE(173)] = 3799,
  [SMALL_STATE(174)] = 3813,
  [SMALL_STATE(175)] = 3822,
  [SMALL_STATE(176)] = 3833,
  [SMALL_STATE(177)] = 3842,
  [SMALL_STATE(178)] = 3851,
  [SMALL_STATE(179)] = 3862,
  [SMALL_STATE(180)] = 3873,
  [SMALL_STATE(181)] = 3882,
  [SMALL_STATE(182)] = 3891,
  [SMALL_STATE(183)] = 3900,
  [SMALL_STATE(184)] = 3909,
  [SMALL_STATE(185)] = 3918,
  [SMALL_STATE(186)] = 3929,
  [SMALL_STATE(187)] = 3938,
  [SMALL_STATE(188)] = 3947,
  [SMALL_STATE(189)] = 3956,
  [SMALL_STATE(190)] = 3965,
  [SMALL_STATE(191)] = 3976,
  [SMALL_STATE(192)] = 3985,
  [SMALL_STATE(193)] = 3994,
  [SMALL_STATE(194)] = 4003,
  [SMALL_STATE(195)] = 4014,
  [SMALL_STATE(196)] = 4023,
  [SMALL_STATE(197)] = 4032,
  [SMALL_STATE(198)] = 4041,
  [SMALL_STATE(199)] = 4052,
  [SMALL_STATE(200)] = 4061,
  [SMALL_STATE(201)] = 4070,
  [SMALL_STATE(202)] = 4079,
  [SMALL_STATE(203)] = 4090,
  [SMALL_STATE(204)] = 4101,
  [SMALL_STATE(205)] = 4112,
  [SMALL_STATE(206)] = 4121,
  [SMALL_STATE(207)] = 4129,
  [SMALL_STATE(208)] = 4137,
  [SMALL_STATE(209)] = 4145,
  [SMALL_STATE(210)] = 4153,
  [SMALL_STATE(211)] = 4161,
  [SMALL_STATE(212)] = 4169,
  [SMALL_STATE(213)] = 4177,
  [SMALL_STATE(214)] = 4185,
  [SMALL_STATE(215)] = 4193,
  [SMALL_STATE(216)] = 4201,
  [SMALL_STATE(217)] = 4209,
  [SMALL_STATE(218)] = 4217,
  [SMALL_STATE(219)] = 4225,
  [SMALL_STATE(220)] = 4233,
  [SMALL_STATE(221)] = 4241,
  [SMALL_STATE(222)] = 4249,
  [SMALL_STATE(223)] = 4257,
  [SMALL_STATE(224)] = 4265,
  [SMALL_STATE(225)] = 4273,
  [SMALL_STATE(226)] = 4281,
  [SMALL_STATE(227)] = 4289,
  [SMALL_STATE(228)] = 4297,
  [SMALL_STATE(229)] = 4305,
  [SMALL_STATE(230)] = 4313,
  [SMALL_STATE(231)] = 4321,
  [SMALL_STATE(232)] = 4329,
  [SMALL_STATE(233)] = 4337,
  [SMALL_STATE(234)] = 4345,
  [SMALL_STATE(235)] = 4353,
  [SMALL_STATE(236)] = 4361,
  [SMALL_STATE(237)] = 4369,
  [SMALL_STATE(238)] = 4377,
  [SMALL_STATE(239)] = 4385,
  [SMALL_STATE(240)] = 4393,
  [SMALL_STATE(241)] = 4401,
  [SMALL_STATE(242)] = 4409,
  [SMALL_STATE(243)] = 4417,
  [SMALL_STATE(244)] = 4425,
  [SMALL_STATE(245)] = 4433,
  [SMALL_STATE(246)] = 4441,
  [SMALL_STATE(247)] = 4449,
  [SMALL_STATE(248)] = 4457,
  [SMALL_STATE(249)] = 4465,
  [SMALL_STATE(250)] = 4473,
  [SMALL_STATE(251)] = 4481,
  [SMALL_STATE(252)] = 4489,
  [SMALL_STATE(253)] = 4497,
  [SMALL_STATE(254)] = 4505,
  [SMALL_STATE(255)] = 4513,
  [SMALL_STATE(256)] = 4521,
  [SMALL_STATE(257)] = 4529,
  [SMALL_STATE(258)] = 4537,
  [SMALL_STATE(259)] = 4545,
  [SMALL_STATE(260)] = 4553,
  [SMALL_STATE(261)] = 4561,
  [SMALL_STATE(262)] = 4569,
  [SMALL_STATE(263)] = 4577,
  [SMALL_STATE(264)] = 4585,
  [SMALL_STATE(265)] = 4593,
  [SMALL_STATE(266)] = 4601,
  [SMALL_STATE(267)] = 4609,
  [SMALL_STATE(268)] = 4617,
  [SMALL_STATE(269)] = 4625,
  [SMALL_STATE(270)] = 4633,
  [SMALL_STATE(271)] = 4641,
  [SMALL_STATE(272)] = 4649,
  [SMALL_STATE(273)] = 4657,
  [SMALL_STATE(274)] = 4665,
  [SMALL_STATE(275)] = 4673,
  [SMALL_STATE(276)] = 4681,
  [SMALL_STATE(277)] = 4689,
  [SMALL_STATE(278)] = 4697,
  [SMALL_STATE(279)] = 4705,
  [SMALL_STATE(280)] = 4713,
  [SMALL_STATE(281)] = 4721,
  [SMALL_STATE(282)] = 4729,
  [SMALL_STATE(283)] = 4737,
  [SMALL_STATE(284)] = 4745,
  [SMALL_STATE(285)] = 4753,
  [SMALL_STATE(286)] = 4761,
  [SMALL_STATE(287)] = 4769,
  [SMALL_STATE(288)] = 4777,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 11),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 18),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 18),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 11),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 10),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 16),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(129),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(50),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 3, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 11),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(115),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(258),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 11),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 4, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 9),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 9),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 15),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 15),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 1, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 5, .production_id = 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(59),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(134),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 3, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(131),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(96),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(127),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 14),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 11),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 17),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 12),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 17),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 6, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4, .production_id = 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 12),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6, .production_id = 8),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 12),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5, .production_id = 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [551] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3, .production_id = 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
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
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
