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
#define STATE_COUNT 324
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
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
  sym_table_reference = 92,
  sym__insert_statement = 93,
  sym_insert = 94,
  sym_insert_expression = 95,
  sym__column_list_without_order = 96,
  sym__column_without_order = 97,
  sym__update_statement = 98,
  sym_update = 99,
  sym_update_expression = 100,
  sym__single_table_update = 101,
  sym__multi_table_update = 102,
  sym__table_references = 103,
  sym_assignment_list = 104,
  sym_table_options = 105,
  sym_table_option = 106,
  sym_column_definitions = 107,
  sym_column_definition = 108,
  sym_constraints = 109,
  sym_constraint = 110,
  sym__constraint_literal = 111,
  sym__primary_key_constraint = 112,
  sym__key_constraint = 113,
  sym_column_list = 114,
  sym_column = 115,
  sym__field_list = 116,
  sym_field = 117,
  sym_function_call = 118,
  sym_function_name = 119,
  sym__function_name = 120,
  sym_from = 121,
  sym_table_expression = 122,
  sym_index_hint = 123,
  sym_join = 124,
  sym_where = 125,
  sym_group_by = 126,
  sym__having = 127,
  sym_order_by = 128,
  sym_order_expression = 129,
  sym_limit = 130,
  sym_offset = 131,
  sym_where_expression = 132,
  sym_predicate = 133,
  sym__expression = 134,
  sym_list = 135,
  sym_literal = 136,
  sym__literal_string = 137,
  sym_identifier = 138,
  aux_sym__column_list_without_order_repeat1 = 139,
  aux_sym__table_references_repeat1 = 140,
  aux_sym_assignment_list_repeat1 = 141,
  aux_sym_table_options_repeat1 = 142,
  aux_sym_column_definitions_repeat1 = 143,
  aux_sym_constraints_repeat1 = 144,
  aux_sym_column_list_repeat1 = 145,
  aux_sym__field_list_repeat1 = 146,
  aux_sym_from_repeat1 = 147,
  aux_sym_list_repeat1 = 148,
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
  [sym_keyword_distinct] = "distinct",
  [sym_keyword_constraint] = "keyword_constraint",
  [sym_keyword_count] = "count",
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
  [sym_function_name] = "function_name",
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
  [sym_function_name] = sym_function_name,
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
    .named = false,
  },
  [sym_keyword_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_count] = {
    .visible = true,
    .named = false,
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
  [sym_function_name] = {
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
  field_index_name = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_parameter = 5,
  field_right = 6,
  field_schema = 7,
  field_size = 8,
  field_table_alias = 9,
  field_type = 10,
  field_value = 11,
};

static const char *ts_field_names[] = {
  [0] = NULL,
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

static const TSFieldMapSlice ts_field_map_slices[16] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 0, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
    {field_table_alias, 0},
  [3] =
    {field_name, 2},
    {field_schema, 0},
  [5] =
    {field_name, 0},
    {field_table_alias, 1},
  [7] =
    {field_name, 0},
    {field_parameter, 2},
  [9] =
    {field_index_name, 3},
  [10] =
    {field_name, 0},
    {field_type, 1},
  [12] =
    {field_name, 1, .inherited = true},
  [13] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [16] =
    {field_name, 0, .inherited = true},
  [17] =
    {field_name, 0},
    {field_value, 2},
  [19] =
    {field_index_name, 5},
  [20] =
    {field_name, 1},
  [21] =
    {field_size, 2},
};

static TSSymbol ts_alias_sequences[16][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = sym_identifier,
  },
  [15] = {
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
      if (lookahead == 'W') ADVANCE(89);
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
      if (lookahead == 'w') ADVANCE(268);
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
      if (lookahead == ',') ADVANCE(469);
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
      if (lookahead == 'W') ADVANCE(89);
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
      if (lookahead == 'w') ADVANCE(268);
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
      if (lookahead == ',') ADVANCE(469);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 6},
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
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 16},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 8},
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
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 11},
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
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
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
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 15},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 487},
  [292] = {.lex_state = 487},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
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
  [308] = {.lex_state = 15},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 487},
  [317] = {.lex_state = 487},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 8},
  [322] = {.lex_state = 8},
  [323] = {.lex_state = 8},
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
    [sym_program] = STATE(306),
    [sym_statement] = STATE(302),
    [sym__select_statement] = STATE(301),
    [sym_select] = STATE(182),
    [sym__delete_statement] = STATE(301),
    [sym_delete] = STATE(210),
    [sym__create_statement] = STATE(301),
    [sym_create] = STATE(296),
    [sym__insert_statement] = STATE(301),
    [sym_insert] = STATE(295),
    [sym__update_statement] = STATE(301),
    [sym_update] = STATE(294),
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
    ACTIONS(17), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 21,
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
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [125] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 21,
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
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [160] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 20,
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
  [193] = 4,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 19,
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
  [228] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 20,
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
  [261] = 4,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 17,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [295] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 19,
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
  [327] = 4,
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
    ACTIONS(43), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
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
  [360] = 11,
    ACTIONS(45), 1,
      sym_keyword_or,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 8,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [407] = 9,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
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
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [450] = 6,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(45), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 14,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
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
  [487] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(65), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 17,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [518] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 17,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [549] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 17,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [580] = 8,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(45), 3,
      sym_keyword_or,
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
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [621] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 17,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [652] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 17,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [683] = 3,
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
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
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
  [714] = 6,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 4,
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
    ACTIONS(73), 10,
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
  [750] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(73), 10,
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
  [782] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(73), 10,
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
  [814] = 15,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(211), 1,
      sym_select_expression,
    STATE(286), 1,
      sym__function_name,
    STATE(287), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(96), 2,
      sym_field,
      sym_function_call,
    STATE(212), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(83), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [867] = 15,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(97), 1,
      anon_sym_STAR,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(228), 1,
      sym_order_expression,
    STATE(286), 1,
      sym__function_name,
    STATE(287), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(96), 2,
      sym_field,
      sym_function_call,
    STATE(133), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(83), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [920] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(73), 10,
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
  [951] = 12,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      sym_keyword_and,
    ACTIONS(105), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(101), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [997] = 6,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 11,
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
  [1031] = 10,
    ACTIONS(109), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1072] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 14,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1099] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(65), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 14,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1126] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(75), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 10,
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
  [1155] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 3,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(75), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 11,
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
  [1184] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(69), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 14,
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
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1211] = 8,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 10,
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
  [1248] = 9,
    ACTIONS(109), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1287] = 4,
    ACTIONS(121), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 13,
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
  [1316] = 6,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 11,
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
  [1349] = 11,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1390] = 10,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      sym_keyword_in,
    ACTIONS(55), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1428] = 10,
    ACTIONS(109), 1,
      sym_keyword_in,
    ACTIONS(115), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1466] = 14,
    ACTIONS(129), 1,
      sym_keyword_join,
    ACTIONS(131), 1,
      sym_keyword_where,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(135), 1,
      sym_keyword_group_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_index_hint,
    STATE(95), 1,
      sym_where,
    STATE(132), 1,
      sym_group_by,
    STATE(177), 1,
      sym_order_by,
    STATE(253), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 2,
      sym_keyword_force,
      sym_keyword_use,
    STATE(68), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1512] = 11,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
      sym__literal_string,
    STATE(138), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(28), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1551] = 11,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(138), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(40), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1590] = 12,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(29), 1,
      sym_predicate,
    STATE(186), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(42), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1631] = 12,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(22), 1,
      sym_predicate,
    STATE(91), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(41), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1672] = 10,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(30), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1708] = 10,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(38), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1744] = 11,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(23), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(41), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1782] = 10,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(36), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1818] = 10,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(18), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1854] = 10,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(37), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1890] = 10,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
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
  [1926] = 11,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(27), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(41), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1964] = 10,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(31), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [2000] = 11,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(24), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(41), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [2038] = 11,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(34), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(42), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [2076] = 11,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    STATE(33), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(41), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [2114] = 10,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(20), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [2150] = 10,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
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
  [2186] = 10,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
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
  [2222] = 10,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(6), 1,
      sym__literal_string,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(39), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [2258] = 10,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(16), 1,
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
  [2294] = 11,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(159), 1,
      sym_keyword_primary,
    ACTIONS(161), 1,
      sym_keyword_key,
    ACTIONS(163), 1,
      sym_keyword_constraint,
    STATE(77), 1,
      sym_identifier,
    STATE(197), 1,
      sym_constraint,
    STATE(206), 1,
      sym_column_definition,
    STATE(234), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [2331] = 12,
    ACTIONS(129), 1,
      sym_keyword_join,
    ACTIONS(131), 1,
      sym_keyword_where,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(135), 1,
      sym_keyword_group_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_where,
    STATE(124), 1,
      sym_group_by,
    STATE(203), 1,
      sym_order_by,
    STATE(311), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(69), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2370] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(286), 1,
      sym__function_name,
    STATE(287), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(239), 2,
      sym_field,
      sym_function_call,
    ACTIONS(83), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2401] = 12,
    ACTIONS(129), 1,
      sym_keyword_join,
    ACTIONS(131), 1,
      sym_keyword_where,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(135), 1,
      sym_keyword_group_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_where,
    STATE(124), 1,
      sym_group_by,
    STATE(203), 1,
      sym_order_by,
    STATE(311), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(80), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2440] = 12,
    ACTIONS(129), 1,
      sym_keyword_join,
    ACTIONS(131), 1,
      sym_keyword_where,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(135), 1,
      sym_keyword_group_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_where,
    STATE(114), 1,
      sym_group_by,
    STATE(187), 1,
      sym_order_by,
    STATE(248), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(80), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2479] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(286), 1,
      sym__function_name,
    STATE(287), 1,
      sym_function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(105), 2,
      sym_field,
      sym_function_call,
    ACTIONS(83), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2510] = 10,
    ACTIONS(171), 1,
      sym_keyword_primary,
    ACTIONS(173), 1,
      sym_keyword_not,
    ACTIONS(175), 1,
      sym_keyword_auto_increment,
    ACTIONS(177), 1,
      sym_keyword_default,
    STATE(123), 1,
      sym__primary_key,
    STATE(216), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(179), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(82), 2,
      sym__not_null,
      sym__default_null,
  [2545] = 6,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      sym__identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(183), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(181), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [2571] = 3,
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
  [2590] = 3,
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
  [2609] = 3,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2627] = 3,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
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
  [2645] = 7,
    ACTIONS(195), 1,
      sym_keyword_bigint,
    ACTIONS(197), 1,
      sym_keyword_date,
    ACTIONS(199), 1,
      sym_keyword_datetime,
    ACTIONS(201), 1,
      sym_keyword_char,
    ACTIONS(203), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(71), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [2671] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 9,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      anon_sym_SEMI,
  [2687] = 3,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(207), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2705] = 4,
    ACTIONS(211), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(80), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(214), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2724] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(216), 1,
      sym_keyword_default,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      sym_table_options,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(92), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2751] = 7,
    ACTIONS(171), 1,
      sym_keyword_primary,
    ACTIONS(220), 1,
      sym_keyword_auto_increment,
    STATE(131), 1,
      sym__primary_key,
    STATE(230), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2776] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(126), 1,
      sym_identifier,
    STATE(180), 1,
      sym_table_reference,
    STATE(238), 1,
      sym__table_references,
    STATE(282), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(281), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [2803] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(224), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2818] = 8,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(216), 1,
      sym_keyword_default,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    STATE(276), 1,
      sym_identifier,
    STATE(300), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(92), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2845] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(228), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2860] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(230), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2875] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(232), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2890] = 7,
    ACTIONS(171), 1,
      sym_keyword_primary,
    ACTIONS(234), 1,
      sym_keyword_key,
    ACTIONS(236), 1,
      sym_keyword_constraint,
    STATE(234), 1,
      sym__primary_key,
    STATE(235), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(207), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [2915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(238), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2930] = 8,
    ACTIONS(131), 1,
      sym_keyword_where,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      sym_where,
    STATE(188), 1,
      sym_order_by,
    STATE(309), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2956] = 7,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(216), 1,
      sym_keyword_default,
    ACTIONS(242), 1,
      anon_sym_SEMI,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(103), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2980] = 8,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(135), 1,
      sym_keyword_group_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_group_by,
    STATE(187), 1,
      sym_order_by,
    STATE(248), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3006] = 6,
    ACTIONS(171), 1,
      sym_keyword_primary,
    STATE(117), 1,
      sym__primary_key,
    STATE(205), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(244), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3028] = 8,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(135), 1,
      sym_keyword_group_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_group_by,
    STATE(203), 1,
      sym_order_by,
    STATE(311), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3054] = 4,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(246), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3072] = 8,
    ACTIONS(131), 1,
      sym_keyword_where,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      sym_where,
    STATE(175), 1,
      sym_order_by,
    STATE(254), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3098] = 8,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(135), 1,
      sym_keyword_group_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      sym_group_by,
    STATE(198), 1,
      sym_order_by,
    STATE(260), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3124] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(254), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3138] = 6,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      sym__identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(181), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(183), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [3160] = 4,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(256), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3178] = 6,
    ACTIONS(171), 1,
      sym_keyword_primary,
    STATE(131), 1,
      sym__primary_key,
    STATE(230), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3200] = 7,
    ACTIONS(261), 1,
      sym_keyword_default,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(103), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [3224] = 4,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(272), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3242] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(256), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3255] = 3,
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
  [3270] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3287] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(277), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3300] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(279), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3313] = 4,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3330] = 3,
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
  [3345] = 7,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(283), 1,
      sym_keyword_if,
    STATE(126), 1,
      sym_identifier,
    STATE(157), 1,
      sym__if_not_exists,
    STATE(233), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3368] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(181), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [3387] = 6,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_order_by,
    STATE(260), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3407] = 3,
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
  [3421] = 6,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      sym_order_by,
    STATE(307), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3441] = 4,
    STATE(220), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3457] = 6,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(126), 1,
      sym_identifier,
    STATE(176), 1,
      sym_table_reference,
    STATE(250), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3477] = 6,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(263), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3497] = 3,
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
  [3511] = 6,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_order_by,
    STATE(261), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3531] = 6,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(164), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3551] = 4,
    STATE(230), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3567] = 6,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    STATE(187), 1,
      sym_order_by,
    STATE(248), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3587] = 6,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(171), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3607] = 3,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3621] = 6,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3641] = 6,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(196), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3661] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3673] = 6,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    STATE(6), 1,
      sym__literal_string,
    STATE(219), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3693] = 4,
    STATE(205), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(244), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3709] = 6,
    ACTIONS(133), 1,
      sym_keyword_order_by,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(203), 1,
      sym_order_by,
    STATE(311), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3729] = 4,
    STATE(232), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(299), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3745] = 4,
    ACTIONS(303), 1,
      sym_keyword_having,
    STATE(183), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(301), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3761] = 4,
    STATE(222), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3777] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(179), 1,
      sym__column_without_order,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3794] = 5,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_column_definitions_repeat1,
    STATE(299), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3811] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(311), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3822] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    STATE(137), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3839] = 4,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [3854] = 4,
    ACTIONS(316), 1,
      sym_keyword_on,
    STATE(251), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 2,
      sym_keyword_force,
      sym_keyword_use,
  [3869] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(318), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(320), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3882] = 4,
    ACTIONS(322), 1,
      sym_keyword_from,
    STATE(284), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(139), 2,
      sym_keyword_force,
      sym_keyword_use,
  [3897] = 4,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [3912] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
    STATE(173), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3929] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(324), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(326), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [3942] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [3955] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    STATE(206), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3972] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3983] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [3996] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(330), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(332), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4009] = 5,
    ACTIONS(334), 1,
      anon_sym_BQUOTE,
    ACTIONS(336), 1,
      sym__identifier,
    STATE(113), 1,
      sym_identifier,
    STATE(141), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4026] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(338), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4037] = 5,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      aux_sym_column_definitions_repeat1,
    STATE(259), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4054] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(126), 1,
      sym_identifier,
    STATE(208), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4071] = 5,
    ACTIONS(342), 1,
      anon_sym_BQUOTE,
    ACTIONS(344), 1,
      sym__identifier,
    STATE(43), 1,
      sym_table_expression,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4088] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(126), 1,
      sym_identifier,
    STATE(221), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4105] = 5,
    ACTIONS(346), 1,
      anon_sym_BQUOTE,
    ACTIONS(348), 1,
      sym__identifier,
    STATE(97), 1,
      sym_table_expression,
    STATE(100), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4122] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(350), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(352), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4135] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
    STATE(218), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4152] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(354), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(356), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4165] = 5,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
    STATE(217), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4182] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    STATE(265), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4196] = 4,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4210] = 4,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(19), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4224] = 4,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4238] = 4,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4252] = 4,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4266] = 4,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4280] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4294] = 4,
    ACTIONS(379), 1,
      sym_keyword_offset,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4308] = 4,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4322] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4336] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(258), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4350] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    STATE(307), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4364] = 4,
    ACTIONS(392), 1,
      sym_keyword_values,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(283), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4378] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4392] = 4,
    ACTIONS(151), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4406] = 4,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4420] = 4,
    ACTIONS(398), 1,
      sym_keyword_set,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4434] = 4,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      sym_keyword_set,
    STATE(189), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4448] = 4,
    ACTIONS(404), 1,
      sym_keyword_from,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    STATE(277), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4462] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(408), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [4472] = 4,
    ACTIONS(410), 1,
      anon_sym_BQUOTE,
    ACTIONS(412), 1,
      sym__identifier,
    STATE(159), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4486] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(149), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4500] = 4,
    ACTIONS(414), 1,
      sym_keyword_where,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4514] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    STATE(260), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4528] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4542] = 4,
    ACTIONS(418), 1,
      sym_keyword_set,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4556] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4570] = 4,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4584] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4598] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(204), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4612] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(229), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4626] = 4,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4640] = 4,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4654] = 4,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4668] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4682] = 4,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4696] = 4,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4710] = 4,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4724] = 4,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(256), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4738] = 4,
    ACTIONS(137), 1,
      sym_keyword_limit,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4752] = 3,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4772] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4781] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(452), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4790] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(418), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [4799] = 3,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4810] = 3,
    ACTIONS(454), 1,
      sym_keyword_from,
    STATE(275), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4821] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(456), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [4830] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(458), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [4839] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(460), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4848] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(462), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4857] = 3,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4868] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4877] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(464), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4886] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(364), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4895] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(429), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4904] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(466), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4913] = 3,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4924] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(470), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(472), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4942] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(474), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4951] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(476), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4960] = 3,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(224), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4971] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(478), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [4980] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(480), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [4989] = 3,
    ACTIONS(171), 1,
      sym_keyword_primary,
    STATE(226), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5000] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(244), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5009] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(482), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5018] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(484), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [5027] = 3,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5038] = 3,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(231), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5049] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5058] = 3,
    ACTIONS(486), 1,
      sym_keyword_for,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5069] = 2,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5077] = 2,
    ACTIONS(492), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5085] = 2,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5093] = 2,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5101] = 2,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5109] = 2,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5117] = 2,
    ACTIONS(502), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5125] = 2,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5133] = 2,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5141] = 2,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5149] = 2,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5157] = 2,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5165] = 2,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5173] = 2,
    ACTIONS(514), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5181] = 2,
    ACTIONS(516), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5189] = 2,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5197] = 2,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5205] = 2,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5213] = 2,
    ACTIONS(518), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5221] = 2,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5229] = 2,
    ACTIONS(522), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5237] = 2,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5245] = 2,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5253] = 2,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5261] = 2,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5269] = 2,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5277] = 2,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5285] = 2,
    ACTIONS(530), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5293] = 2,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5301] = 2,
    ACTIONS(534), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5309] = 2,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5317] = 2,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5325] = 2,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5333] = 2,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5341] = 2,
    ACTIONS(542), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5349] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5357] = 2,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5365] = 2,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5373] = 2,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5381] = 2,
    ACTIONS(552), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5389] = 2,
    ACTIONS(554), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5397] = 2,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5405] = 2,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5413] = 2,
    ACTIONS(560), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5421] = 2,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5429] = 2,
    ACTIONS(564), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5437] = 2,
    ACTIONS(566), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5445] = 2,
    ACTIONS(568), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5453] = 2,
    ACTIONS(570), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5461] = 2,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5469] = 2,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5477] = 2,
    ACTIONS(576), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5485] = 2,
    ACTIONS(578), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5493] = 2,
    ACTIONS(580), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5501] = 2,
    ACTIONS(584), 1,
      aux_sym__literal_string_token1,
    ACTIONS(582), 2,
      sym_comment,
      sym_marginalia,
  [5509] = 2,
    ACTIONS(586), 1,
      aux_sym__literal_string_token1,
    ACTIONS(582), 2,
      sym_comment,
      sym_marginalia,
  [5517] = 2,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5525] = 2,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5533] = 2,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5541] = 2,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5549] = 2,
    ACTIONS(596), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5557] = 2,
    ACTIONS(598), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5565] = 2,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5573] = 2,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5581] = 2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5589] = 2,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5597] = 2,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5605] = 2,
    ACTIONS(606), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5613] = 2,
    ACTIONS(608), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5621] = 2,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5629] = 2,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5637] = 2,
    ACTIONS(612), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5645] = 2,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5653] = 2,
    ACTIONS(614), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5661] = 2,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5669] = 2,
    ACTIONS(616), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5677] = 2,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5685] = 2,
    ACTIONS(620), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5693] = 2,
    ACTIONS(622), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5701] = 2,
    ACTIONS(624), 1,
      aux_sym__literal_string_token1,
    ACTIONS(582), 2,
      sym_comment,
      sym_marginalia,
  [5709] = 2,
    ACTIONS(626), 1,
      aux_sym__literal_string_token1,
    ACTIONS(582), 2,
      sym_comment,
      sym_marginalia,
  [5717] = 2,
    ACTIONS(628), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5725] = 2,
    ACTIONS(630), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5733] = 2,
    ACTIONS(632), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5741] = 2,
    ACTIONS(634), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5749] = 2,
    ACTIONS(636), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5757] = 2,
    ACTIONS(638), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 549,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 621,
  [SMALL_STATE(20)] = 652,
  [SMALL_STATE(21)] = 683,
  [SMALL_STATE(22)] = 714,
  [SMALL_STATE(23)] = 750,
  [SMALL_STATE(24)] = 782,
  [SMALL_STATE(25)] = 814,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 920,
  [SMALL_STATE(28)] = 951,
  [SMALL_STATE(29)] = 997,
  [SMALL_STATE(30)] = 1031,
  [SMALL_STATE(31)] = 1072,
  [SMALL_STATE(32)] = 1099,
  [SMALL_STATE(33)] = 1126,
  [SMALL_STATE(34)] = 1155,
  [SMALL_STATE(35)] = 1184,
  [SMALL_STATE(36)] = 1211,
  [SMALL_STATE(37)] = 1248,
  [SMALL_STATE(38)] = 1287,
  [SMALL_STATE(39)] = 1316,
  [SMALL_STATE(40)] = 1349,
  [SMALL_STATE(41)] = 1390,
  [SMALL_STATE(42)] = 1428,
  [SMALL_STATE(43)] = 1466,
  [SMALL_STATE(44)] = 1512,
  [SMALL_STATE(45)] = 1551,
  [SMALL_STATE(46)] = 1590,
  [SMALL_STATE(47)] = 1631,
  [SMALL_STATE(48)] = 1672,
  [SMALL_STATE(49)] = 1708,
  [SMALL_STATE(50)] = 1744,
  [SMALL_STATE(51)] = 1782,
  [SMALL_STATE(52)] = 1818,
  [SMALL_STATE(53)] = 1854,
  [SMALL_STATE(54)] = 1890,
  [SMALL_STATE(55)] = 1926,
  [SMALL_STATE(56)] = 1964,
  [SMALL_STATE(57)] = 2000,
  [SMALL_STATE(58)] = 2038,
  [SMALL_STATE(59)] = 2076,
  [SMALL_STATE(60)] = 2114,
  [SMALL_STATE(61)] = 2150,
  [SMALL_STATE(62)] = 2186,
  [SMALL_STATE(63)] = 2222,
  [SMALL_STATE(64)] = 2258,
  [SMALL_STATE(65)] = 2294,
  [SMALL_STATE(66)] = 2331,
  [SMALL_STATE(67)] = 2370,
  [SMALL_STATE(68)] = 2401,
  [SMALL_STATE(69)] = 2440,
  [SMALL_STATE(70)] = 2479,
  [SMALL_STATE(71)] = 2510,
  [SMALL_STATE(72)] = 2545,
  [SMALL_STATE(73)] = 2571,
  [SMALL_STATE(74)] = 2590,
  [SMALL_STATE(75)] = 2609,
  [SMALL_STATE(76)] = 2627,
  [SMALL_STATE(77)] = 2645,
  [SMALL_STATE(78)] = 2671,
  [SMALL_STATE(79)] = 2687,
  [SMALL_STATE(80)] = 2705,
  [SMALL_STATE(81)] = 2724,
  [SMALL_STATE(82)] = 2751,
  [SMALL_STATE(83)] = 2776,
  [SMALL_STATE(84)] = 2803,
  [SMALL_STATE(85)] = 2818,
  [SMALL_STATE(86)] = 2845,
  [SMALL_STATE(87)] = 2860,
  [SMALL_STATE(88)] = 2875,
  [SMALL_STATE(89)] = 2890,
  [SMALL_STATE(90)] = 2915,
  [SMALL_STATE(91)] = 2930,
  [SMALL_STATE(92)] = 2956,
  [SMALL_STATE(93)] = 2980,
  [SMALL_STATE(94)] = 3006,
  [SMALL_STATE(95)] = 3028,
  [SMALL_STATE(96)] = 3054,
  [SMALL_STATE(97)] = 3072,
  [SMALL_STATE(98)] = 3098,
  [SMALL_STATE(99)] = 3124,
  [SMALL_STATE(100)] = 3138,
  [SMALL_STATE(101)] = 3160,
  [SMALL_STATE(102)] = 3178,
  [SMALL_STATE(103)] = 3200,
  [SMALL_STATE(104)] = 3224,
  [SMALL_STATE(105)] = 3242,
  [SMALL_STATE(106)] = 3255,
  [SMALL_STATE(107)] = 3270,
  [SMALL_STATE(108)] = 3287,
  [SMALL_STATE(109)] = 3300,
  [SMALL_STATE(110)] = 3313,
  [SMALL_STATE(111)] = 3330,
  [SMALL_STATE(112)] = 3345,
  [SMALL_STATE(113)] = 3368,
  [SMALL_STATE(114)] = 3387,
  [SMALL_STATE(115)] = 3407,
  [SMALL_STATE(116)] = 3421,
  [SMALL_STATE(117)] = 3441,
  [SMALL_STATE(118)] = 3457,
  [SMALL_STATE(119)] = 3477,
  [SMALL_STATE(120)] = 3497,
  [SMALL_STATE(121)] = 3511,
  [SMALL_STATE(122)] = 3531,
  [SMALL_STATE(123)] = 3551,
  [SMALL_STATE(124)] = 3567,
  [SMALL_STATE(125)] = 3587,
  [SMALL_STATE(126)] = 3607,
  [SMALL_STATE(127)] = 3621,
  [SMALL_STATE(128)] = 3641,
  [SMALL_STATE(129)] = 3661,
  [SMALL_STATE(130)] = 3673,
  [SMALL_STATE(131)] = 3693,
  [SMALL_STATE(132)] = 3709,
  [SMALL_STATE(133)] = 3729,
  [SMALL_STATE(134)] = 3745,
  [SMALL_STATE(135)] = 3761,
  [SMALL_STATE(136)] = 3777,
  [SMALL_STATE(137)] = 3794,
  [SMALL_STATE(138)] = 3811,
  [SMALL_STATE(139)] = 3822,
  [SMALL_STATE(140)] = 3839,
  [SMALL_STATE(141)] = 3854,
  [SMALL_STATE(142)] = 3869,
  [SMALL_STATE(143)] = 3882,
  [SMALL_STATE(144)] = 3897,
  [SMALL_STATE(145)] = 3912,
  [SMALL_STATE(146)] = 3929,
  [SMALL_STATE(147)] = 3942,
  [SMALL_STATE(148)] = 3955,
  [SMALL_STATE(149)] = 3972,
  [SMALL_STATE(150)] = 3983,
  [SMALL_STATE(151)] = 3996,
  [SMALL_STATE(152)] = 4009,
  [SMALL_STATE(153)] = 4026,
  [SMALL_STATE(154)] = 4037,
  [SMALL_STATE(155)] = 4054,
  [SMALL_STATE(156)] = 4071,
  [SMALL_STATE(157)] = 4088,
  [SMALL_STATE(158)] = 4105,
  [SMALL_STATE(159)] = 4122,
  [SMALL_STATE(160)] = 4135,
  [SMALL_STATE(161)] = 4152,
  [SMALL_STATE(162)] = 4165,
  [SMALL_STATE(163)] = 4182,
  [SMALL_STATE(164)] = 4196,
  [SMALL_STATE(165)] = 4210,
  [SMALL_STATE(166)] = 4224,
  [SMALL_STATE(167)] = 4238,
  [SMALL_STATE(168)] = 4252,
  [SMALL_STATE(169)] = 4266,
  [SMALL_STATE(170)] = 4280,
  [SMALL_STATE(171)] = 4294,
  [SMALL_STATE(172)] = 4308,
  [SMALL_STATE(173)] = 4322,
  [SMALL_STATE(174)] = 4336,
  [SMALL_STATE(175)] = 4350,
  [SMALL_STATE(176)] = 4364,
  [SMALL_STATE(177)] = 4378,
  [SMALL_STATE(178)] = 4392,
  [SMALL_STATE(179)] = 4406,
  [SMALL_STATE(180)] = 4420,
  [SMALL_STATE(181)] = 4434,
  [SMALL_STATE(182)] = 4448,
  [SMALL_STATE(183)] = 4462,
  [SMALL_STATE(184)] = 4472,
  [SMALL_STATE(185)] = 4486,
  [SMALL_STATE(186)] = 4500,
  [SMALL_STATE(187)] = 4514,
  [SMALL_STATE(188)] = 4528,
  [SMALL_STATE(189)] = 4542,
  [SMALL_STATE(190)] = 4556,
  [SMALL_STATE(191)] = 4570,
  [SMALL_STATE(192)] = 4584,
  [SMALL_STATE(193)] = 4598,
  [SMALL_STATE(194)] = 4612,
  [SMALL_STATE(195)] = 4626,
  [SMALL_STATE(196)] = 4640,
  [SMALL_STATE(197)] = 4654,
  [SMALL_STATE(198)] = 4668,
  [SMALL_STATE(199)] = 4682,
  [SMALL_STATE(200)] = 4696,
  [SMALL_STATE(201)] = 4710,
  [SMALL_STATE(202)] = 4724,
  [SMALL_STATE(203)] = 4738,
  [SMALL_STATE(204)] = 4752,
  [SMALL_STATE(205)] = 4763,
  [SMALL_STATE(206)] = 4772,
  [SMALL_STATE(207)] = 4781,
  [SMALL_STATE(208)] = 4790,
  [SMALL_STATE(209)] = 4799,
  [SMALL_STATE(210)] = 4810,
  [SMALL_STATE(211)] = 4821,
  [SMALL_STATE(212)] = 4830,
  [SMALL_STATE(213)] = 4839,
  [SMALL_STATE(214)] = 4848,
  [SMALL_STATE(215)] = 4857,
  [SMALL_STATE(216)] = 4868,
  [SMALL_STATE(217)] = 4877,
  [SMALL_STATE(218)] = 4886,
  [SMALL_STATE(219)] = 4895,
  [SMALL_STATE(220)] = 4904,
  [SMALL_STATE(221)] = 4913,
  [SMALL_STATE(222)] = 4924,
  [SMALL_STATE(223)] = 4933,
  [SMALL_STATE(224)] = 4942,
  [SMALL_STATE(225)] = 4951,
  [SMALL_STATE(226)] = 4960,
  [SMALL_STATE(227)] = 4971,
  [SMALL_STATE(228)] = 4980,
  [SMALL_STATE(229)] = 4989,
  [SMALL_STATE(230)] = 5000,
  [SMALL_STATE(231)] = 5009,
  [SMALL_STATE(232)] = 5018,
  [SMALL_STATE(233)] = 5027,
  [SMALL_STATE(234)] = 5038,
  [SMALL_STATE(235)] = 5049,
  [SMALL_STATE(236)] = 5058,
  [SMALL_STATE(237)] = 5069,
  [SMALL_STATE(238)] = 5077,
  [SMALL_STATE(239)] = 5085,
  [SMALL_STATE(240)] = 5093,
  [SMALL_STATE(241)] = 5101,
  [SMALL_STATE(242)] = 5109,
  [SMALL_STATE(243)] = 5117,
  [SMALL_STATE(244)] = 5125,
  [SMALL_STATE(245)] = 5133,
  [SMALL_STATE(246)] = 5141,
  [SMALL_STATE(247)] = 5149,
  [SMALL_STATE(248)] = 5157,
  [SMALL_STATE(249)] = 5165,
  [SMALL_STATE(250)] = 5173,
  [SMALL_STATE(251)] = 5181,
  [SMALL_STATE(252)] = 5189,
  [SMALL_STATE(253)] = 5197,
  [SMALL_STATE(254)] = 5205,
  [SMALL_STATE(255)] = 5213,
  [SMALL_STATE(256)] = 5221,
  [SMALL_STATE(257)] = 5229,
  [SMALL_STATE(258)] = 5237,
  [SMALL_STATE(259)] = 5245,
  [SMALL_STATE(260)] = 5253,
  [SMALL_STATE(261)] = 5261,
  [SMALL_STATE(262)] = 5269,
  [SMALL_STATE(263)] = 5277,
  [SMALL_STATE(264)] = 5285,
  [SMALL_STATE(265)] = 5293,
  [SMALL_STATE(266)] = 5301,
  [SMALL_STATE(267)] = 5309,
  [SMALL_STATE(268)] = 5317,
  [SMALL_STATE(269)] = 5325,
  [SMALL_STATE(270)] = 5333,
  [SMALL_STATE(271)] = 5341,
  [SMALL_STATE(272)] = 5349,
  [SMALL_STATE(273)] = 5357,
  [SMALL_STATE(274)] = 5365,
  [SMALL_STATE(275)] = 5373,
  [SMALL_STATE(276)] = 5381,
  [SMALL_STATE(277)] = 5389,
  [SMALL_STATE(278)] = 5397,
  [SMALL_STATE(279)] = 5405,
  [SMALL_STATE(280)] = 5413,
  [SMALL_STATE(281)] = 5421,
  [SMALL_STATE(282)] = 5429,
  [SMALL_STATE(283)] = 5437,
  [SMALL_STATE(284)] = 5445,
  [SMALL_STATE(285)] = 5453,
  [SMALL_STATE(286)] = 5461,
  [SMALL_STATE(287)] = 5469,
  [SMALL_STATE(288)] = 5477,
  [SMALL_STATE(289)] = 5485,
  [SMALL_STATE(290)] = 5493,
  [SMALL_STATE(291)] = 5501,
  [SMALL_STATE(292)] = 5509,
  [SMALL_STATE(293)] = 5517,
  [SMALL_STATE(294)] = 5525,
  [SMALL_STATE(295)] = 5533,
  [SMALL_STATE(296)] = 5541,
  [SMALL_STATE(297)] = 5549,
  [SMALL_STATE(298)] = 5557,
  [SMALL_STATE(299)] = 5565,
  [SMALL_STATE(300)] = 5573,
  [SMALL_STATE(301)] = 5581,
  [SMALL_STATE(302)] = 5589,
  [SMALL_STATE(303)] = 5597,
  [SMALL_STATE(304)] = 5605,
  [SMALL_STATE(305)] = 5613,
  [SMALL_STATE(306)] = 5621,
  [SMALL_STATE(307)] = 5629,
  [SMALL_STATE(308)] = 5637,
  [SMALL_STATE(309)] = 5645,
  [SMALL_STATE(310)] = 5653,
  [SMALL_STATE(311)] = 5661,
  [SMALL_STATE(312)] = 5669,
  [SMALL_STATE(313)] = 5677,
  [SMALL_STATE(314)] = 5685,
  [SMALL_STATE(315)] = 5693,
  [SMALL_STATE(316)] = 5701,
  [SMALL_STATE(317)] = 5709,
  [SMALL_STATE(318)] = 5717,
  [SMALL_STATE(319)] = 5725,
  [SMALL_STATE(320)] = 5733,
  [SMALL_STATE(321)] = 5741,
  [SMALL_STATE(322)] = 5749,
  [SMALL_STATE(323)] = 5757,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 10),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(152),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 7),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 13),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 15),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 15),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(70),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(161),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(290),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(55),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(58),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 12),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 12),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(160),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(89),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(155),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(130),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(162),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(148),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 11),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 9),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 8),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 14),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 14),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 9),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 9),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [610] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
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
