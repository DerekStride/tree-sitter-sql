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
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_keyword_select = 1,
  sym_keyword_delete = 2,
  sym_keyword_create = 3,
  sym_keyword_insert = 4,
  sym_keyword_replace = 5,
  sym_keyword_into = 6,
  sym_keyword_values = 7,
  sym_keyword_from = 8,
  sym_keyword_join = 9,
  sym_keyword_on = 10,
  sym_keyword_where = 11,
  sym_keyword_order_by = 12,
  sym_keyword_group_by = 13,
  sym_keyword_having = 14,
  sym_keyword_desc = 15,
  sym_keyword_asc = 16,
  sym_keyword_limit = 17,
  sym_keyword_offset = 18,
  sym_keyword_primary = 19,
  sym_keyword_table = 20,
  sym_keyword_key = 21,
  sym_keyword_distinct = 22,
  sym_keyword_constraint = 23,
  sym_keyword_count = 24,
  sym_keyword_max = 25,
  sym_keyword_min = 26,
  sym_keyword_avg = 27,
  sym_keyword_in = 28,
  sym_keyword_and = 29,
  sym_keyword_or = 30,
  sym_keyword_not = 31,
  sym_keyword_force = 32,
  sym_keyword_use = 33,
  sym_keyword_index = 34,
  sym_keyword_for = 35,
  sym_keyword_if = 36,
  sym_keyword_exists = 37,
  sym_keyword_auto_increment = 38,
  sym_keyword_default = 39,
  sym_keyword_bigint = 40,
  sym_keyword_null = 41,
  sym_keyword_date = 42,
  sym_keyword_datetime = 43,
  sym_keyword_char = 44,
  sym_keyword_varchar = 45,
  sym_comment = 46,
  sym_marginalia = 47,
  anon_sym_SEMI = 48,
  anon_sym_LPAREN = 49,
  anon_sym_COMMA = 50,
  anon_sym_RPAREN = 51,
  anon_sym_EQ = 52,
  anon_sym_DOT = 53,
  anon_sym_STAR = 54,
  anon_sym_PLUS = 55,
  anon_sym_DASH = 56,
  anon_sym_SLASH = 57,
  anon_sym_PERCENT = 58,
  anon_sym_CARET = 59,
  anon_sym_LT = 60,
  anon_sym_LT_EQ = 61,
  anon_sym_BANG_EQ = 62,
  anon_sym_GT_EQ = 63,
  anon_sym_GT = 64,
  anon_sym_SQUOTE = 65,
  aux_sym__literal_string_token1 = 66,
  anon_sym_DQUOTE = 67,
  sym__number = 68,
  anon_sym_BQUOTE = 69,
  sym__identifier = 70,
  sym_program = 71,
  sym__not_null = 72,
  sym__primary_key = 73,
  sym__if_not_exists = 74,
  sym__default_null = 75,
  sym_direction = 76,
  sym_statement = 77,
  sym__insert_statement = 78,
  sym_insert = 79,
  sym_insert_expression = 80,
  sym__column_list_without_order = 81,
  sym__column_without_order = 82,
  sym__select_statement = 83,
  sym_select = 84,
  sym_select_expression = 85,
  sym__delete_statement = 86,
  sym_delete = 87,
  sym__delete_from = 88,
  sym__create_statement = 89,
  sym_create = 90,
  sym_table_options = 91,
  sym_table_option = 92,
  sym_column_definitions = 93,
  sym_column_definition = 94,
  sym_constraints = 95,
  sym_constraint = 96,
  sym__constraint_literal = 97,
  sym__primary_key_constraint = 98,
  sym__key_constraint = 99,
  sym_column_list = 100,
  sym_column = 101,
  sym__type = 102,
  sym_bigint = 103,
  sym_char = 104,
  sym_varchar = 105,
  sym__create_table_expression = 106,
  sym__field_list = 107,
  sym_field = 108,
  sym_function_call = 109,
  sym__function_name = 110,
  sym_from = 111,
  sym_table_expression = 112,
  sym_index_hint = 113,
  sym_join = 114,
  sym_where = 115,
  sym_group_by = 116,
  sym__having = 117,
  sym_order_by = 118,
  sym_order_expression = 119,
  sym_limit = 120,
  sym_offset = 121,
  sym_where_expression = 122,
  sym_predicate = 123,
  sym__expression = 124,
  sym_list = 125,
  sym_literal = 126,
  sym__literal_string = 127,
  sym_identifier = 128,
  aux_sym__column_list_without_order_repeat1 = 129,
  aux_sym_table_options_repeat1 = 130,
  aux_sym_column_definitions_repeat1 = 131,
  aux_sym_constraints_repeat1 = 132,
  aux_sym_column_list_repeat1 = 133,
  aux_sym__field_list_repeat1 = 134,
  aux_sym_from_repeat1 = 135,
  aux_sym_list_repeat1 = 136,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_delete] = "keyword_delete",
  [sym_keyword_create] = "keyword_create",
  [sym_keyword_insert] = "keyword_insert",
  [sym_keyword_replace] = "keyword_replace",
  [sym_keyword_into] = "keyword_into",
  [sym_keyword_values] = "keyword_values",
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
  [sym_comment] = "comment",
  [sym_marginalia] = "marginalia",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
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
  [sym_statement] = "statement",
  [sym__insert_statement] = "_insert_statement",
  [sym_insert] = "insert",
  [sym_insert_expression] = "insert_expression",
  [sym__column_list_without_order] = "column_list",
  [sym__column_without_order] = "column",
  [sym__select_statement] = "_select_statement",
  [sym_select] = "select",
  [sym_select_expression] = "select_expression",
  [sym__delete_statement] = "_delete_statement",
  [sym_delete] = "delete",
  [sym__delete_from] = "from",
  [sym__create_statement] = "_create_statement",
  [sym_create] = "create",
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
  [sym__type] = "_type",
  [sym_bigint] = "bigint",
  [sym_char] = "char",
  [sym_varchar] = "varchar",
  [sym__create_table_expression] = "table_expression",
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
  [sym_keyword_into] = sym_keyword_into,
  [sym_keyword_values] = sym_keyword_values,
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
  [sym_comment] = sym_comment,
  [sym_marginalia] = sym_marginalia,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_statement] = sym_statement,
  [sym__insert_statement] = sym__insert_statement,
  [sym_insert] = sym_insert,
  [sym_insert_expression] = sym_insert_expression,
  [sym__column_list_without_order] = sym_column_list,
  [sym__column_without_order] = sym_column,
  [sym__select_statement] = sym__select_statement,
  [sym_select] = sym_select,
  [sym_select_expression] = sym_select_expression,
  [sym__delete_statement] = sym__delete_statement,
  [sym_delete] = sym_delete,
  [sym__delete_from] = sym_from,
  [sym__create_statement] = sym__create_statement,
  [sym_create] = sym_create,
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
  [sym__type] = sym__type,
  [sym_bigint] = sym_bigint,
  [sym_char] = sym_char,
  [sym_varchar] = sym_varchar,
  [sym__create_table_expression] = sym_table_expression,
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
  [sym_keyword_into] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_values] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_statement] = {
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
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym__delete_from] = {
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
  [sym__create_table_expression] = {
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
  [7] = {.index = 0, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 3},
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
    {field_name, 0},
    {field_table_alias, 1},
  [7] =
    {field_function_name, 0},
    {field_parameter, 2},
  [9] =
    {field_name, 3, .inherited = true},
    {field_schema, 3, .inherited = true},
  [11] =
    {field_name, 2},
    {field_schema, 0},
  [13] =
    {field_name, 0, .inherited = true},
    {field_schema, 0, .inherited = true},
  [15] =
    {field_index_name, 3},
  [16] =
    {field_name, 0},
    {field_type, 1},
  [18] =
    {field_name, 1, .inherited = true},
  [19] =
    {field_name, 0, .inherited = true},
  [20] =
    {field_name, 0},
    {field_value, 2},
  [22] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [25] =
    {field_index_name, 5},
  [26] =
    {field_name, 1},
  [27] =
    {field_size, 2},
};

static TSSymbol ts_alias_sequences[19][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
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
      if (eof) ADVANCE(370);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == ',') ADVANCE(443);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == '<') ADVANCE(453);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'E') ADVANCE(184);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'J') ADVANCE(132);
      if (lookahead == 'K') ADVANCE(49);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'V') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(82);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'j') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(193);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(369)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == ',') ADVANCE(443);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == '<') ADVANCE(453);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'G') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'J') ADVANCE(132);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'V') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(82);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'j') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(193);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == '<') ADVANCE(453);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(536);
      if (lookahead == 'C') ADVANCE(509);
      if (lookahead == 'D') ADVANCE(492);
      if (lookahead == 'M') ADVANCE(474);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'G') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'J') ADVANCE(132);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'W') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'j') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'D') ADVANCE(485);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(365)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'F') ADVANCE(512);
      if (lookahead == 'G') ADVANCE(521);
      if (lookahead == 'J') ADVANCE(513);
      if (lookahead == 'L') ADVANCE(494);
      if (lookahead == 'O') ADVANCE(515);
      if (lookahead == 'U') ADVANCE(524);
      if (lookahead == 'W') ADVANCE(491);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead == 'g') ADVANCE(587);
      if (lookahead == 'j') ADVANCE(579);
      if (lookahead == 'l') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(364)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'L') ADVANCE(494);
      if (lookahead == 'O') ADVANCE(515);
      if (lookahead == 'W') ADVANCE(491);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(366)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(511);
      if (lookahead == 'K') ADVANCE(481);
      if (lookahead == 'P') ADVANCE(519);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == 'k') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(512);
      if (lookahead == 'O') ADVANCE(505);
      if (lookahead == 'U') ADVANCE(524);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(367)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(488);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(368)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(455);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(181);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(182);
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(179);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(142);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(176);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(187);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(389);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(388);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(165);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(149);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(411);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(418);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(432);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(416);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(383);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(373);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(372);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(375);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(434);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead == 'N') ADVANCE(410);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(413);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(159);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(408);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(387);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'H') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'H') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'H') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(162);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(431);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(180);
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(96);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(166);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'M') ADVANCE(378);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 'M') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(59);
      END_STATE();
    case 108:
      if (lookahead == 'M') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(172);
      if (lookahead == 'V') ADVANCE(77);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(410);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(413);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(406);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(379);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(163);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(168);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(169);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(178);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(189);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(376);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(98);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 136:
      if (lookahead == 'P') ADVANCE(99);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(422);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(435);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(436);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(412);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(421);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 148:
      if (lookahead == 'R') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 152:
      if (lookahead == 'S') ADVANCE(426);
      END_STATE();
    case 153:
      if (lookahead == 'S') ADVANCE(377);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 155:
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(171);
      END_STATE();
    case 159:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(415);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(402);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(390);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(430);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(392);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(371);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(428);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(398);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(400);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(427);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(374);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 172:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 173:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(135);
      END_STATE();
    case 179:
      if (lookahead == 'U') ADVANCE(102);
      END_STATE();
    case 180:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 181:
      if (lookahead == 'V') ADVANCE(89);
      END_STATE();
    case 182:
      if (lookahead == 'X') ADVANCE(404);
      END_STATE();
    case 183:
      if (lookahead == 'X') ADVANCE(420);
      END_STATE();
    case 184:
      if (lookahead == 'X') ADVANCE(94);
      END_STATE();
    case 185:
      if (lookahead == 'Y') ADVANCE(396);
      END_STATE();
    case 186:
      if (lookahead == 'Y') ADVANCE(393);
      END_STATE();
    case 187:
      if (lookahead == 'Y') ADVANCE(386);
      END_STATE();
    case 188:
      if (lookahead == 'Y') ADVANCE(385);
      END_STATE();
    case 189:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 190:
      if (lookahead == '_') ADVANCE(260);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 204:
      if (lookahead == 'b') ADVANCE(356);
      END_STATE();
    case 205:
      if (lookahead == 'b') ADVANCE(357);
      END_STATE();
    case 206:
      if (lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(411);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 242:
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 243:
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 244:
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 245:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 246:
      if (lookahead == 'g') ADVANCE(408);
      END_STATE();
    case 247:
      if (lookahead == 'g') ADVANCE(387);
      END_STATE();
    case 248:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 249:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 250:
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 251:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 252:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 273:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 274:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 275:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 304:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 305:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 347:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 348:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 349:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 350:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 351:
      if (lookahead == 'x') ADVANCE(404);
      END_STATE();
    case 352:
      if (lookahead == 'x') ADVANCE(420);
      END_STATE();
    case 353:
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 354:
      if (lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 355:
      if (lookahead == 'y') ADVANCE(393);
      END_STATE();
    case 356:
      if (lookahead == 'y') ADVANCE(386);
      END_STATE();
    case 357:
      if (lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 358:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'G') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'J') ADVANCE(132);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'W') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'j') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'w') ADVANCE(251);
      END_STATE();
    case 359:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == ',') ADVANCE(443);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == '<') ADVANCE(453);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'G') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'J') ADVANCE(132);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'V') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(82);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'j') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(193);
      if (lookahead == 'w') ADVANCE(251);
      END_STATE();
    case 360:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(536);
      if (lookahead == 'C') ADVANCE(509);
      if (lookahead == 'D') ADVANCE(492);
      if (lookahead == 'M') ADVANCE(474);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 361:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == '<') ADVANCE(453);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 362:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 363:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(511);
      if (lookahead == 'K') ADVANCE(481);
      if (lookahead == 'P') ADVANCE(519);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == 'k') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(585);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 364:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(364)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'F') ADVANCE(512);
      if (lookahead == 'G') ADVANCE(521);
      if (lookahead == 'J') ADVANCE(513);
      if (lookahead == 'L') ADVANCE(494);
      if (lookahead == 'O') ADVANCE(515);
      if (lookahead == 'U') ADVANCE(524);
      if (lookahead == 'W') ADVANCE(491);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead == 'g') ADVANCE(587);
      if (lookahead == 'j') ADVANCE(579);
      if (lookahead == 'l') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 365:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(365)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'D') ADVANCE(485);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 366:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(366)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == 'L') ADVANCE(494);
      if (lookahead == 'O') ADVANCE(515);
      if (lookahead == 'W') ADVANCE(491);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 367:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(367)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(512);
      if (lookahead == 'O') ADVANCE(505);
      if (lookahead == 'U') ADVANCE(524);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 368:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(368)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(488);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 369:
      if (eof) ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(369)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(467);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(442);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(448);
      if (lookahead == ',') ADVANCE(443);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == ';') ADVANCE(441);
      if (lookahead == '<') ADVANCE(453);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'E') ADVANCE(184);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'J') ADVANCE(132);
      if (lookahead == 'K') ADVANCE(49);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'V') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(82);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'j') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(193);
      if (lookahead == 'w') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(66);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(53);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(466);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(456);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '/') ADVANCE(439);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(464);
      if (lookahead == '/') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(466);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(466);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead == '-') ADVANCE(464);
      if (lookahead == '/') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 19},
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
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
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
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
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
  [240] = {.lex_state = 14},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 463},
  [247] = {.lex_state = 463},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 463},
  [268] = {.lex_state = 463},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_delete] = ACTIONS(1),
    [sym_keyword_create] = ACTIONS(1),
    [sym_keyword_replace] = ACTIONS(1),
    [sym_keyword_values] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_program] = STATE(256),
    [sym_statement] = STATE(253),
    [sym__insert_statement] = STATE(252),
    [sym_insert] = STATE(251),
    [sym__select_statement] = STATE(252),
    [sym_select] = STATE(139),
    [sym__delete_statement] = STATE(252),
    [sym_delete] = STATE(194),
    [sym__create_statement] = STATE(252),
    [sym_create] = STATE(248),
    [sym_keyword_select] = ACTIONS(5),
    [sym_keyword_delete] = ACTIONS(7),
    [sym_keyword_create] = ACTIONS(9),
    [sym_keyword_insert] = ACTIONS(11),
    [sym_keyword_replace] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 6,
      sym_keyword_or,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 33,
      sym_keyword_values,
      sym_keyword_from,
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
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_bigint,
      sym_keyword_datetime,
      sym_keyword_char,
      sym_keyword_varchar,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [48] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 6,
      sym_keyword_or,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 33,
      sym_keyword_values,
      sym_keyword_from,
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
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_force,
      sym_keyword_use,
      sym_keyword_bigint,
      sym_keyword_datetime,
      sym_keyword_char,
      sym_keyword_varchar,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [96] = 4,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 21,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 22,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [170] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(33), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 22,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_offset,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [206] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 21,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [241] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(41), 10,
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
  [273] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
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
  [303] = 11,
    ACTIONS(47), 1,
      sym_keyword_or,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(45), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
  [349] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(67), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 16,
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
  [379] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(41), 10,
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
  [411] = 6,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(47), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 13,
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
  [447] = 4,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 15,
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
  [479] = 8,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(47), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 12,
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
  [519] = 9,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(47), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 11,
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
  [561] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 16,
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
  [591] = 14,
    ACTIONS(77), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(192), 1,
      sym_select_expression,
    STATE(241), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(79), 2,
      sym_field,
      sym_function_call,
    STATE(189), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [641] = 14,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    ACTIONS(89), 1,
      anon_sym_STAR,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(191), 1,
      sym_order_expression,
    STATE(241), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(79), 2,
      sym_field,
      sym_function_call,
    STATE(104), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [691] = 12,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(93), 1,
      sym_keyword_and,
    ACTIONS(95), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [737] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(43), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 10,
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
  [766] = 4,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 11,
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
  [793] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 12,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [818] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 12,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [843] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(29), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 11,
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
  [867] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(33), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 11,
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
  [891] = 10,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [929] = 14,
    ACTIONS(101), 1,
      sym_keyword_join,
    ACTIONS(103), 1,
      sym_keyword_where,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(107), 1,
      sym_keyword_group_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_index_hint,
    STATE(67), 1,
      sym_where,
    STATE(90), 1,
      sym_group_by,
    STATE(152), 1,
      sym_order_by,
    STATE(238), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      sym_keyword_force,
      sym_keyword_use,
    STATE(42), 2,
      sym_join,
      aux_sym_from_repeat1,
  [975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 11,
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
  [999] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 11,
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
  [1023] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(67), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 11,
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
  [1047] = 11,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(116), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(20), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1086] = 10,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
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
  [1122] = 11,
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
    STATE(8), 1,
      sym_predicate,
    STATE(22), 1,
      sym_identifier,
    STATE(26), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(27), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1160] = 11,
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
    STATE(12), 1,
      sym_predicate,
    STATE(22), 1,
      sym_identifier,
    STATE(26), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(27), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1198] = 11,
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
    STATE(21), 1,
      sym_predicate,
    STATE(22), 1,
      sym_identifier,
    STATE(26), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(27), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1236] = 10,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(9), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1272] = 10,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(13), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1308] = 10,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(16), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1344] = 10,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(10), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1380] = 10,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(6), 1,
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
  [1416] = 12,
    ACTIONS(101), 1,
      sym_keyword_join,
    ACTIONS(103), 1,
      sym_keyword_where,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(107), 1,
      sym_keyword_group_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_where,
    STATE(87), 1,
      sym_group_by,
    STATE(136), 1,
      sym_order_by,
    STATE(231), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(63), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1455] = 12,
    ACTIONS(101), 1,
      sym_keyword_join,
    ACTIONS(103), 1,
      sym_keyword_where,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(107), 1,
      sym_keyword_group_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_where,
    STATE(87), 1,
      sym_group_by,
    STATE(136), 1,
      sym_order_by,
    STATE(231), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(45), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1494] = 10,
    ACTIONS(135), 1,
      sym_keyword_primary,
    ACTIONS(137), 1,
      sym_keyword_not,
    ACTIONS(139), 1,
      sym_keyword_auto_increment,
    ACTIONS(141), 1,
      sym_keyword_default,
    STATE(92), 1,
      sym__primary_key,
    STATE(174), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(66), 2,
      sym__not_null,
      sym__default_null,
  [1529] = 12,
    ACTIONS(101), 1,
      sym_keyword_join,
    ACTIONS(103), 1,
      sym_keyword_where,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(107), 1,
      sym_keyword_group_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_where,
    STATE(95), 1,
      sym_group_by,
    STATE(153), 1,
      sym_order_by,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(63), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1568] = 11,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    ACTIONS(147), 1,
      sym_keyword_primary,
    ACTIONS(149), 1,
      sym_keyword_key,
    ACTIONS(151), 1,
      sym_keyword_constraint,
    STATE(56), 1,
      sym_identifier,
    STATE(163), 1,
      sym_constraint,
    STATE(175), 1,
      sym_column_definition,
    STATE(176), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(170), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [1605] = 7,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(241), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(83), 2,
      sym_field,
      sym_function_call,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1633] = 7,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(241), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(218), 2,
      sym_field,
      sym_function_call,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1661] = 6,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(155), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(153), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [1687] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(19), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [1706] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(15), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [1725] = 3,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1743] = 3,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(161), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(165), 9,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      anon_sym_SEMI,
  [1777] = 3,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1795] = 7,
    ACTIONS(171), 1,
      sym_keyword_bigint,
    ACTIONS(173), 1,
      sym_keyword_date,
    ACTIONS(175), 1,
      sym_keyword_datetime,
    ACTIONS(177), 1,
      sym_keyword_char,
    ACTIONS(179), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(44), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [1821] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(181), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1836] = 8,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    ACTIONS(183), 1,
      sym_keyword_default,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_identifier,
    STATE(262), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(73), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [1863] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1878] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1893] = 2,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1908] = 2,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1923] = 4,
    ACTIONS(195), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(63), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(198), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1942] = 8,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    ACTIONS(183), 1,
      sym_keyword_default,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_identifier,
    STATE(207), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(73), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [1969] = 7,
    ACTIONS(135), 1,
      sym_keyword_primary,
    ACTIONS(202), 1,
      sym_keyword_key,
    ACTIONS(204), 1,
      sym_keyword_constraint,
    STATE(171), 1,
      sym_constraint,
    STATE(176), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(170), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [1994] = 7,
    ACTIONS(135), 1,
      sym_keyword_primary,
    ACTIONS(206), 1,
      sym_keyword_auto_increment,
    STATE(98), 1,
      sym__primary_key,
    STATE(188), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2019] = 8,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(107), 1,
      sym_keyword_group_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_group_by,
    STATE(136), 1,
      sym_order_by,
    STATE(231), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2045] = 6,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(155), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [2067] = 8,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(107), 1,
      sym_keyword_group_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_group_by,
    STATE(130), 1,
      sym_order_by,
    STATE(203), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2093] = 7,
    ACTIONS(212), 1,
      sym_keyword_default,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      anon_sym_BQUOTE,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(70), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2117] = 8,
    ACTIONS(103), 1,
      sym_keyword_where,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_where,
    STATE(142), 1,
      sym_order_by,
    STATE(242), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2143] = 4,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2161] = 7,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    ACTIONS(183), 1,
      sym_keyword_default,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(70), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2185] = 8,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(107), 1,
      sym_keyword_group_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_group_by,
    STATE(153), 1,
      sym_order_by,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2211] = 6,
    ACTIONS(135), 1,
      sym_keyword_primary,
    STATE(100), 1,
      sym__primary_key,
    STATE(168), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2233] = 6,
    ACTIONS(135), 1,
      sym_keyword_primary,
    STATE(98), 1,
      sym__primary_key,
    STATE(188), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2255] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(234), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2269] = 4,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(236), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2287] = 4,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(240), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2305] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(15), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__identifier,
  [2320] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [2339] = 7,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym__identifier,
    ACTIONS(242), 1,
      sym_keyword_if,
    STATE(119), 1,
      sym__if_not_exists,
    STATE(145), 1,
      sym_identifier,
    STATE(193), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2362] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2375] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(244), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2388] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(246), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2401] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(19), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__identifier,
  [2416] = 6,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_order_by,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2436] = 4,
    STATE(179), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2452] = 6,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(145), 1,
      sym_identifier,
    STATE(148), 1,
      sym__create_table_expression,
    STATE(212), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2472] = 6,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_order_by,
    STATE(231), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2492] = 3,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [2506] = 4,
    STATE(188), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2522] = 6,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(209), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2542] = 6,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(143), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2562] = 6,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      sym_order_by,
    STATE(203), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2582] = 6,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(138), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2602] = 6,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_order_by,
    STATE(236), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2622] = 4,
    STATE(168), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2638] = 6,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(135), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2658] = 4,
    STATE(182), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2674] = 6,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(186), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2694] = 6,
    ACTIONS(105), 1,
      sym_keyword_order_by,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_order_by,
    STATE(216), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2714] = 3,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [2728] = 4,
    STATE(187), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(256), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2744] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(258), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2756] = 4,
    ACTIONS(262), 1,
      sym_keyword_having,
    STATE(149), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(260), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2772] = 5,
    ACTIONS(264), 1,
      anon_sym_BQUOTE,
    ACTIONS(266), 1,
      sym__identifier,
    STATE(81), 1,
      sym_identifier,
    STATE(115), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2789] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(169), 1,
      sym_identifier,
    STATE(177), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(19), 2,
      sym_keyword_default,
      sym__identifier,
  [2819] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(15), 2,
      sym_keyword_default,
      sym__identifier,
  [2832] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    STATE(184), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2849] = 5,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym__identifier,
    STATE(28), 1,
      sym_table_expression,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2866] = 5,
    ACTIONS(272), 1,
      anon_sym_BQUOTE,
    ACTIONS(274), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
    STATE(71), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2883] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(175), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2900] = 4,
    ACTIONS(276), 1,
      sym_keyword_on,
    STATE(249), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      sym_keyword_force,
      sym_keyword_use,
  [2915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(278), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2926] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(280), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(282), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [2939] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    STATE(158), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2956] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(145), 1,
      sym_identifier,
    STATE(180), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2973] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(284), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(286), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [2986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(288), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(290), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [2999] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(128), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3016] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 4,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3027] = 5,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(165), 1,
      sym__column_without_order,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3044] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(294), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(296), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3057] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(298), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(300), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3070] = 5,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_column_definitions_repeat1,
    STATE(232), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3087] = 5,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_column_definitions_repeat1,
    STATE(261), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3104] = 4,
    ACTIONS(308), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      sym_keyword_force,
      sym_keyword_use,
  [3119] = 4,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3133] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3147] = 4,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3161] = 4,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3175] = 4,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3189] = 4,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3203] = 4,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3217] = 4,
    ACTIONS(323), 1,
      anon_sym_BQUOTE,
    ACTIONS(325), 1,
      sym__identifier,
    STATE(121), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3231] = 4,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3245] = 4,
    ACTIONS(329), 1,
      sym_keyword_from,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(224), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3259] = 4,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3273] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3287] = 4,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3301] = 4,
    ACTIONS(341), 1,
      sym_keyword_offset,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3315] = 4,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3329] = 3,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(345), 2,
      sym_keyword_values,
      anon_sym_LPAREN,
  [3341] = 4,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3355] = 4,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3369] = 4,
    ACTIONS(354), 1,
      sym_keyword_values,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3383] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(358), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3393] = 4,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3407] = 4,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3421] = 4,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(231), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3435] = 4,
    ACTIONS(109), 1,
      sym_keyword_limit,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    STATE(203), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3449] = 4,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(244), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3463] = 4,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3477] = 4,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3491] = 4,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3505] = 4,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3519] = 4,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(196), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3533] = 4,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(197), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3547] = 4,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3561] = 4,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3575] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3589] = 4,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3603] = 4,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3617] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3626] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3635] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3644] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3662] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3671] = 3,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(250), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3682] = 3,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3693] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3702] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3711] = 3,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3722] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3731] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3740] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3749] = 3,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3760] = 3,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3771] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3780] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3789] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3798] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3816] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(413), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3825] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3834] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(415), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3843] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [3852] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(419), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3861] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(421), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3870] = 3,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3881] = 3,
    ACTIONS(423), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3892] = 3,
    ACTIONS(425), 1,
      sym_keyword_for,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3903] = 3,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3914] = 3,
    ACTIONS(135), 1,
      sym_keyword_primary,
    STATE(181), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3925] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(429), 2,
      sym_keyword_values,
      anon_sym_LPAREN,
  [3934] = 2,
    ACTIONS(431), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3942] = 2,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3950] = 2,
    ACTIONS(433), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3958] = 2,
    ACTIONS(435), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3966] = 2,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3974] = 2,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3982] = 2,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3990] = 2,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3998] = 2,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4006] = 2,
    ACTIONS(445), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4014] = 2,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4022] = 2,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4030] = 2,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4038] = 2,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4046] = 2,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4054] = 2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4062] = 2,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4070] = 2,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4078] = 2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4086] = 2,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4094] = 2,
    ACTIONS(463), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4102] = 2,
    ACTIONS(465), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4110] = 2,
    ACTIONS(467), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4118] = 2,
    ACTIONS(469), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4126] = 2,
    ACTIONS(471), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4134] = 2,
    ACTIONS(473), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4142] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4150] = 2,
    ACTIONS(477), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4158] = 2,
    ACTIONS(479), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4166] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4174] = 2,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4182] = 2,
    ACTIONS(485), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4190] = 2,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4198] = 2,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4206] = 2,
    ACTIONS(489), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4214] = 2,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4222] = 2,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4230] = 2,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4238] = 2,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4246] = 2,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4254] = 2,
    ACTIONS(497), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4262] = 2,
    ACTIONS(499), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4270] = 2,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4278] = 2,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4286] = 2,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4294] = 2,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4302] = 2,
    ACTIONS(507), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4310] = 2,
    ACTIONS(511), 1,
      aux_sym__literal_string_token1,
    ACTIONS(509), 2,
      sym_comment,
      sym_marginalia,
  [4318] = 2,
    ACTIONS(513), 1,
      aux_sym__literal_string_token1,
    ACTIONS(509), 2,
      sym_comment,
      sym_marginalia,
  [4326] = 2,
    ACTIONS(515), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4334] = 2,
    ACTIONS(517), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4342] = 2,
    ACTIONS(519), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4350] = 2,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4358] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4366] = 2,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4374] = 2,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4382] = 2,
    ACTIONS(529), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4390] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4398] = 2,
    ACTIONS(533), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4406] = 2,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4414] = 2,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4422] = 2,
    ACTIONS(537), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4430] = 2,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4438] = 2,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4446] = 2,
    ACTIONS(541), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4454] = 2,
    ACTIONS(543), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4462] = 2,
    ACTIONS(545), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4470] = 2,
    ACTIONS(547), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4478] = 2,
    ACTIONS(549), 1,
      aux_sym__literal_string_token1,
    ACTIONS(509), 2,
      sym_comment,
      sym_marginalia,
  [4486] = 2,
    ACTIONS(551), 1,
      aux_sym__literal_string_token1,
    ACTIONS(509), 2,
      sym_comment,
      sym_marginalia,
  [4494] = 2,
    ACTIONS(553), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4502] = 2,
    ACTIONS(555), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4510] = 2,
    ACTIONS(557), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4518] = 2,
    ACTIONS(559), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4526] = 2,
    ACTIONS(561), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4534] = 2,
    ACTIONS(563), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 241,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 379,
  [SMALL_STATE(13)] = 411,
  [SMALL_STATE(14)] = 447,
  [SMALL_STATE(15)] = 479,
  [SMALL_STATE(16)] = 519,
  [SMALL_STATE(17)] = 561,
  [SMALL_STATE(18)] = 591,
  [SMALL_STATE(19)] = 641,
  [SMALL_STATE(20)] = 691,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 766,
  [SMALL_STATE(23)] = 793,
  [SMALL_STATE(24)] = 818,
  [SMALL_STATE(25)] = 843,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 891,
  [SMALL_STATE(28)] = 929,
  [SMALL_STATE(29)] = 975,
  [SMALL_STATE(30)] = 999,
  [SMALL_STATE(31)] = 1023,
  [SMALL_STATE(32)] = 1047,
  [SMALL_STATE(33)] = 1086,
  [SMALL_STATE(34)] = 1122,
  [SMALL_STATE(35)] = 1160,
  [SMALL_STATE(36)] = 1198,
  [SMALL_STATE(37)] = 1236,
  [SMALL_STATE(38)] = 1272,
  [SMALL_STATE(39)] = 1308,
  [SMALL_STATE(40)] = 1344,
  [SMALL_STATE(41)] = 1380,
  [SMALL_STATE(42)] = 1416,
  [SMALL_STATE(43)] = 1455,
  [SMALL_STATE(44)] = 1494,
  [SMALL_STATE(45)] = 1529,
  [SMALL_STATE(46)] = 1568,
  [SMALL_STATE(47)] = 1605,
  [SMALL_STATE(48)] = 1633,
  [SMALL_STATE(49)] = 1661,
  [SMALL_STATE(50)] = 1687,
  [SMALL_STATE(51)] = 1706,
  [SMALL_STATE(52)] = 1725,
  [SMALL_STATE(53)] = 1743,
  [SMALL_STATE(54)] = 1761,
  [SMALL_STATE(55)] = 1777,
  [SMALL_STATE(56)] = 1795,
  [SMALL_STATE(57)] = 1821,
  [SMALL_STATE(58)] = 1836,
  [SMALL_STATE(59)] = 1863,
  [SMALL_STATE(60)] = 1878,
  [SMALL_STATE(61)] = 1893,
  [SMALL_STATE(62)] = 1908,
  [SMALL_STATE(63)] = 1923,
  [SMALL_STATE(64)] = 1942,
  [SMALL_STATE(65)] = 1969,
  [SMALL_STATE(66)] = 1994,
  [SMALL_STATE(67)] = 2019,
  [SMALL_STATE(68)] = 2045,
  [SMALL_STATE(69)] = 2067,
  [SMALL_STATE(70)] = 2093,
  [SMALL_STATE(71)] = 2117,
  [SMALL_STATE(72)] = 2143,
  [SMALL_STATE(73)] = 2161,
  [SMALL_STATE(74)] = 2185,
  [SMALL_STATE(75)] = 2211,
  [SMALL_STATE(76)] = 2233,
  [SMALL_STATE(77)] = 2255,
  [SMALL_STATE(78)] = 2269,
  [SMALL_STATE(79)] = 2287,
  [SMALL_STATE(80)] = 2305,
  [SMALL_STATE(81)] = 2320,
  [SMALL_STATE(82)] = 2339,
  [SMALL_STATE(83)] = 2362,
  [SMALL_STATE(84)] = 2375,
  [SMALL_STATE(85)] = 2388,
  [SMALL_STATE(86)] = 2401,
  [SMALL_STATE(87)] = 2416,
  [SMALL_STATE(88)] = 2436,
  [SMALL_STATE(89)] = 2452,
  [SMALL_STATE(90)] = 2472,
  [SMALL_STATE(91)] = 2492,
  [SMALL_STATE(92)] = 2506,
  [SMALL_STATE(93)] = 2522,
  [SMALL_STATE(94)] = 2542,
  [SMALL_STATE(95)] = 2562,
  [SMALL_STATE(96)] = 2582,
  [SMALL_STATE(97)] = 2602,
  [SMALL_STATE(98)] = 2622,
  [SMALL_STATE(99)] = 2638,
  [SMALL_STATE(100)] = 2658,
  [SMALL_STATE(101)] = 2674,
  [SMALL_STATE(102)] = 2694,
  [SMALL_STATE(103)] = 2714,
  [SMALL_STATE(104)] = 2728,
  [SMALL_STATE(105)] = 2744,
  [SMALL_STATE(106)] = 2756,
  [SMALL_STATE(107)] = 2772,
  [SMALL_STATE(108)] = 2789,
  [SMALL_STATE(109)] = 2806,
  [SMALL_STATE(110)] = 2819,
  [SMALL_STATE(111)] = 2832,
  [SMALL_STATE(112)] = 2849,
  [SMALL_STATE(113)] = 2866,
  [SMALL_STATE(114)] = 2883,
  [SMALL_STATE(115)] = 2900,
  [SMALL_STATE(116)] = 2915,
  [SMALL_STATE(117)] = 2926,
  [SMALL_STATE(118)] = 2939,
  [SMALL_STATE(119)] = 2956,
  [SMALL_STATE(120)] = 2973,
  [SMALL_STATE(121)] = 2986,
  [SMALL_STATE(122)] = 2999,
  [SMALL_STATE(123)] = 3016,
  [SMALL_STATE(124)] = 3027,
  [SMALL_STATE(125)] = 3044,
  [SMALL_STATE(126)] = 3057,
  [SMALL_STATE(127)] = 3070,
  [SMALL_STATE(128)] = 3087,
  [SMALL_STATE(129)] = 3104,
  [SMALL_STATE(130)] = 3119,
  [SMALL_STATE(131)] = 3133,
  [SMALL_STATE(132)] = 3147,
  [SMALL_STATE(133)] = 3161,
  [SMALL_STATE(134)] = 3175,
  [SMALL_STATE(135)] = 3189,
  [SMALL_STATE(136)] = 3203,
  [SMALL_STATE(137)] = 3217,
  [SMALL_STATE(138)] = 3231,
  [SMALL_STATE(139)] = 3245,
  [SMALL_STATE(140)] = 3259,
  [SMALL_STATE(141)] = 3273,
  [SMALL_STATE(142)] = 3287,
  [SMALL_STATE(143)] = 3301,
  [SMALL_STATE(144)] = 3315,
  [SMALL_STATE(145)] = 3329,
  [SMALL_STATE(146)] = 3341,
  [SMALL_STATE(147)] = 3355,
  [SMALL_STATE(148)] = 3369,
  [SMALL_STATE(149)] = 3383,
  [SMALL_STATE(150)] = 3393,
  [SMALL_STATE(151)] = 3407,
  [SMALL_STATE(152)] = 3421,
  [SMALL_STATE(153)] = 3435,
  [SMALL_STATE(154)] = 3449,
  [SMALL_STATE(155)] = 3463,
  [SMALL_STATE(156)] = 3477,
  [SMALL_STATE(157)] = 3491,
  [SMALL_STATE(158)] = 3505,
  [SMALL_STATE(159)] = 3519,
  [SMALL_STATE(160)] = 3533,
  [SMALL_STATE(161)] = 3547,
  [SMALL_STATE(162)] = 3561,
  [SMALL_STATE(163)] = 3575,
  [SMALL_STATE(164)] = 3589,
  [SMALL_STATE(165)] = 3603,
  [SMALL_STATE(166)] = 3617,
  [SMALL_STATE(167)] = 3626,
  [SMALL_STATE(168)] = 3635,
  [SMALL_STATE(169)] = 3644,
  [SMALL_STATE(170)] = 3653,
  [SMALL_STATE(171)] = 3662,
  [SMALL_STATE(172)] = 3671,
  [SMALL_STATE(173)] = 3682,
  [SMALL_STATE(174)] = 3693,
  [SMALL_STATE(175)] = 3702,
  [SMALL_STATE(176)] = 3711,
  [SMALL_STATE(177)] = 3722,
  [SMALL_STATE(178)] = 3731,
  [SMALL_STATE(179)] = 3740,
  [SMALL_STATE(180)] = 3749,
  [SMALL_STATE(181)] = 3760,
  [SMALL_STATE(182)] = 3771,
  [SMALL_STATE(183)] = 3780,
  [SMALL_STATE(184)] = 3789,
  [SMALL_STATE(185)] = 3798,
  [SMALL_STATE(186)] = 3807,
  [SMALL_STATE(187)] = 3816,
  [SMALL_STATE(188)] = 3825,
  [SMALL_STATE(189)] = 3834,
  [SMALL_STATE(190)] = 3843,
  [SMALL_STATE(191)] = 3852,
  [SMALL_STATE(192)] = 3861,
  [SMALL_STATE(193)] = 3870,
  [SMALL_STATE(194)] = 3881,
  [SMALL_STATE(195)] = 3892,
  [SMALL_STATE(196)] = 3903,
  [SMALL_STATE(197)] = 3914,
  [SMALL_STATE(198)] = 3925,
  [SMALL_STATE(199)] = 3934,
  [SMALL_STATE(200)] = 3942,
  [SMALL_STATE(201)] = 3950,
  [SMALL_STATE(202)] = 3958,
  [SMALL_STATE(203)] = 3966,
  [SMALL_STATE(204)] = 3974,
  [SMALL_STATE(205)] = 3982,
  [SMALL_STATE(206)] = 3990,
  [SMALL_STATE(207)] = 3998,
  [SMALL_STATE(208)] = 4006,
  [SMALL_STATE(209)] = 4014,
  [SMALL_STATE(210)] = 4022,
  [SMALL_STATE(211)] = 4030,
  [SMALL_STATE(212)] = 4038,
  [SMALL_STATE(213)] = 4046,
  [SMALL_STATE(214)] = 4054,
  [SMALL_STATE(215)] = 4062,
  [SMALL_STATE(216)] = 4070,
  [SMALL_STATE(217)] = 4078,
  [SMALL_STATE(218)] = 4086,
  [SMALL_STATE(219)] = 4094,
  [SMALL_STATE(220)] = 4102,
  [SMALL_STATE(221)] = 4110,
  [SMALL_STATE(222)] = 4118,
  [SMALL_STATE(223)] = 4126,
  [SMALL_STATE(224)] = 4134,
  [SMALL_STATE(225)] = 4142,
  [SMALL_STATE(226)] = 4150,
  [SMALL_STATE(227)] = 4158,
  [SMALL_STATE(228)] = 4166,
  [SMALL_STATE(229)] = 4174,
  [SMALL_STATE(230)] = 4182,
  [SMALL_STATE(231)] = 4190,
  [SMALL_STATE(232)] = 4198,
  [SMALL_STATE(233)] = 4206,
  [SMALL_STATE(234)] = 4214,
  [SMALL_STATE(235)] = 4222,
  [SMALL_STATE(236)] = 4230,
  [SMALL_STATE(237)] = 4238,
  [SMALL_STATE(238)] = 4246,
  [SMALL_STATE(239)] = 4254,
  [SMALL_STATE(240)] = 4262,
  [SMALL_STATE(241)] = 4270,
  [SMALL_STATE(242)] = 4278,
  [SMALL_STATE(243)] = 4286,
  [SMALL_STATE(244)] = 4294,
  [SMALL_STATE(245)] = 4302,
  [SMALL_STATE(246)] = 4310,
  [SMALL_STATE(247)] = 4318,
  [SMALL_STATE(248)] = 4326,
  [SMALL_STATE(249)] = 4334,
  [SMALL_STATE(250)] = 4342,
  [SMALL_STATE(251)] = 4350,
  [SMALL_STATE(252)] = 4358,
  [SMALL_STATE(253)] = 4366,
  [SMALL_STATE(254)] = 4374,
  [SMALL_STATE(255)] = 4382,
  [SMALL_STATE(256)] = 4390,
  [SMALL_STATE(257)] = 4398,
  [SMALL_STATE(258)] = 4406,
  [SMALL_STATE(259)] = 4414,
  [SMALL_STATE(260)] = 4422,
  [SMALL_STATE(261)] = 4430,
  [SMALL_STATE(262)] = 4438,
  [SMALL_STATE(263)] = 4446,
  [SMALL_STATE(264)] = 4454,
  [SMALL_STATE(265)] = 4462,
  [SMALL_STATE(266)] = 4470,
  [SMALL_STATE(267)] = 4478,
  [SMALL_STATE(268)] = 4486,
  [SMALL_STATE(269)] = 4494,
  [SMALL_STATE(270)] = 4502,
  [SMALL_STATE(271)] = 4510,
  [SMALL_STATE(272)] = 4518,
  [SMALL_STATE(273)] = 4526,
  [SMALL_STATE(274)] = 4534,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 15),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 15),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 16),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 18),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 18),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 18),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(107),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 11),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(126),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(245),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(47),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 11),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 14),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 14),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(114),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 1, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(111),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(101),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(108),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(65),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 17),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 13),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 12),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 11),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 17),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 3, .production_id = 8),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5, .production_id = 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 12),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4, .production_id = 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3, .production_id = 9),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 12),
  [531] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6, .production_id = 6),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
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
