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
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

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
  aux_sym__literal_string_token2 = 70,
  sym__number = 71,
  anon_sym_BQUOTE = 72,
  sym__identifier = 73,
  sym_program = 74,
  sym__not_null = 75,
  sym__primary_key = 76,
  sym__if_not_exists = 77,
  sym__default_null = 78,
  sym_direction = 79,
  sym__type = 80,
  sym_bigint = 81,
  sym_char = 82,
  sym_varchar = 83,
  sym_statement = 84,
  sym__select_statement = 85,
  sym_select = 86,
  sym_select_expression = 87,
  sym__delete_statement = 88,
  sym__delete_from = 89,
  sym_delete = 90,
  sym__create_statement = 91,
  sym_create = 92,
  sym_table_reference = 93,
  sym__insert_statement = 94,
  sym_insert = 95,
  sym_insert_expression = 96,
  sym__column_list_without_order = 97,
  sym__column_without_order = 98,
  sym__update_statement = 99,
  sym_update = 100,
  sym_update_expression = 101,
  sym__single_table_update = 102,
  sym__multi_table_update = 103,
  sym__table_references = 104,
  sym_assignment_list = 105,
  sym_table_options = 106,
  sym_table_option = 107,
  sym_column_definitions = 108,
  sym_column_definition = 109,
  sym_constraints = 110,
  sym_constraint = 111,
  sym__constraint_literal = 112,
  sym__primary_key_constraint = 113,
  sym__key_constraint = 114,
  sym_column_list = 115,
  sym_column = 116,
  sym__field_list = 117,
  sym_field = 118,
  sym_function_call = 119,
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
  sym_subquery = 135,
  sym_list = 136,
  sym_literal = 137,
  sym__literal_string = 138,
  sym_identifier = 139,
  aux_sym__column_list_without_order_repeat1 = 140,
  aux_sym__table_references_repeat1 = 141,
  aux_sym_assignment_list_repeat1 = 142,
  aux_sym_table_options_repeat1 = 143,
  aux_sym_column_definitions_repeat1 = 144,
  aux_sym_constraints_repeat1 = 145,
  aux_sym_column_list_repeat1 = 146,
  aux_sym__field_list_repeat1 = 147,
  aux_sym_from_repeat1 = 148,
  aux_sym_list_repeat1 = 149,
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

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '%') ADVANCE(477);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '>') ADVANCE(483);
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
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '`') ADVANCE(503);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
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
      if (lookahead == '%') ADVANCE(477);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '>') ADVANCE(483);
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
      if (lookahead == '^') ADVANCE(478);
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
      if (lookahead == '%') ADVANCE(477);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '>') ADVANCE(483);
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
      if (lookahead == '^') ADVANCE(478);
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
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(570);
      if (lookahead == 'C') ADVANCE(543);
      if (lookahead == 'D') ADVANCE(526);
      if (lookahead == 'M') ADVANCE(508);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(609);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
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
    case 13:
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'G') ADVANCE(555);
      if (lookahead == 'J') ADVANCE(547);
      if (lookahead == 'L') ADVANCE(527);
      if (lookahead == 'O') ADVANCE(549);
      if (lookahead == 'U') ADVANCE(558);
      if (lookahead == 'W') ADVANCE(525);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(611);
      if (lookahead == 'g') ADVANCE(621);
      if (lookahead == 'j') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == 'D') ADVANCE(519);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'd') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == 'L') ADVANCE(527);
      if (lookahead == 'O') ADVANCE(549);
      if (lookahead == 'W') ADVANCE(525);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 'w') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(546);
      if (lookahead == 'K') ADVANCE(518);
      if (lookahead == 'P') ADVANCE(554);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead == 'k') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'U') ADVANCE(558);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(611);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(522);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(481);
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
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
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
      if (lookahead == '%') ADVANCE(477);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '>') ADVANCE(483);
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
      if (lookahead == '^') ADVANCE(478);
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
      if (lookahead == '%') ADVANCE(477);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '>') ADVANCE(483);
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
      if (lookahead == '^') ADVANCE(478);
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
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(570);
      if (lookahead == 'C') ADVANCE(543);
      if (lookahead == 'D') ADVANCE(526);
      if (lookahead == 'M') ADVANCE(508);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(609);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 383:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 384:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'G') ADVANCE(555);
      if (lookahead == 'J') ADVANCE(547);
      if (lookahead == 'L') ADVANCE(527);
      if (lookahead == 'O') ADVANCE(549);
      if (lookahead == 'U') ADVANCE(558);
      if (lookahead == 'W') ADVANCE(525);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(611);
      if (lookahead == 'g') ADVANCE(621);
      if (lookahead == 'j') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(624);
      if (lookahead == 'w') ADVANCE(591);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(546);
      if (lookahead == 'K') ADVANCE(518);
      if (lookahead == 'P') ADVANCE(554);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead == 'k') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 386:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == 'D') ADVANCE(519);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'd') ADVANCE(585);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == 'L') ADVANCE(527);
      if (lookahead == 'O') ADVANCE(549);
      if (lookahead == 'W') ADVANCE(525);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 'w') ADVANCE(591);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 388:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(522);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'U') ADVANCE(558);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(611);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(624);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 390:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(16);
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
      if (lookahead == '"') ADVANCE(493);
      if (lookahead == '%') ADVANCE(477);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(473);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ';') ADVANCE(469);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '>') ADVANCE(483);
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
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '`') ADVANCE(503);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
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
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(492);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(486);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(482);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(486);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(486);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(486);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == '/') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(492);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(492);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == '/') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(492);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(464);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '/') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '/') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(571);
      if (lookahead == 'I') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 0},
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
  [18] = {.lex_state = 6},
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
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
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
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 17},
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
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 8},
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
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 8},
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
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 11},
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
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 498},
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
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 489},
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
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 12},
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
  [326] = {.lex_state = 489},
  [327] = {.lex_state = 498},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 8},
  [331] = {.lex_state = 8},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 8},
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
    [sym_program] = STATE(310),
    [sym_statement] = STATE(309),
    [sym__select_statement] = STATE(301),
    [sym_select] = STATE(209),
    [sym__delete_statement] = STATE(301),
    [sym_delete] = STATE(227),
    [sym__create_statement] = STATE(301),
    [sym_create] = STATE(298),
    [sym__insert_statement] = STATE(301),
    [sym_insert] = STATE(297),
    [sym__update_statement] = STATE(301),
    [sym_update] = STATE(296),
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
  [126] = 3,
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
  [162] = 4,
    ACTIONS(27), 1,
      anon_sym_DOT,
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
  [197] = 4,
    ACTIONS(29), 1,
      anon_sym_DOT,
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
  [232] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(33), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 20,
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
  [265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 20,
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
  [298] = 11,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(43), 1,
      sym_keyword_or,
    ACTIONS(49), 1,
      anon_sym_PLUS,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 9,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [346] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 18,
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
  [378] = 8,
    ACTIONS(49), 1,
      anon_sym_PLUS,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 14,
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
  [420] = 4,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 5,
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
  [454] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(65), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 18,
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
  [486] = 9,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(49), 1,
      anon_sym_PLUS,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 13,
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
  [530] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(33), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 18,
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
  [562] = 3,
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
  [594] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(65), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 19,
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
  [626] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 18,
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
  [658] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 18,
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
  [690] = 6,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
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
  [728] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 18,
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
  [760] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 18,
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
  [792] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(81), 10,
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
  [825] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(81), 10,
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
  [858] = 6,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 10,
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
  [894] = 12,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(49), 1,
      anon_sym_PLUS,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(93), 1,
      sym_keyword_and,
    ACTIONS(95), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [941] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(81), 10,
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
  [972] = 14,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(214), 1,
      sym_order_expression,
    STATE(289), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(90), 2,
      sym_field,
      sym_function_call,
    STATE(120), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(99), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1022] = 14,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    ACTIONS(113), 1,
      anon_sym_STAR,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(205), 1,
      sym_select_expression,
    STATE(289), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(90), 2,
      sym_field,
      sym_function_call,
    STATE(203), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(99), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1072] = 6,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(87), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(83), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 11,
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
  [1106] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 10,
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
  [1136] = 9,
    ACTIONS(119), 1,
      sym_keyword_in,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 9,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1175] = 3,
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
  [1202] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 14,
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
  [1229] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 3,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(83), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 11,
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
  [1258] = 8,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 10,
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
  [1295] = 10,
    ACTIONS(119), 1,
      sym_keyword_in,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 5,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1336] = 4,
    ACTIONS(129), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 13,
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
  [1365] = 6,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 11,
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
  [1398] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 14,
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
  [1425] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 14,
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
  [1452] = 3,
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
  [1479] = 11,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      sym_keyword_in,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1520] = 14,
    ACTIONS(137), 1,
      sym_keyword_join,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(143), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(69), 1,
      sym_index_hint,
    STATE(95), 1,
      sym_where,
    STATE(119), 1,
      sym_group_by,
    STATE(144), 1,
      sym_order_by,
    STATE(219), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(149), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(71), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1567] = 11,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(135), 1,
      sym_where_expression,
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
  [1607] = 10,
    ACTIONS(119), 1,
      sym_keyword_in,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1645] = 10,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(49), 1,
      anon_sym_PLUS,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(45), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1683] = 12,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(31), 1,
      sym_predicate,
    STATE(179), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(47), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [1725] = 12,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(26), 1,
      sym_predicate,
    STATE(103), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [1767] = 11,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    STATE(135), 1,
      sym_where_expression,
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
  [1807] = 10,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(40), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [1844] = 10,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(22), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [1881] = 10,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(41), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [1918] = 11,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(32), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [1957] = 10,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(33), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [1994] = 11,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(24), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2033] = 11,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(28), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2072] = 11,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(25), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2111] = 11,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(36), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(47), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2150] = 10,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(21), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2187] = 10,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
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
  [2224] = 10,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
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
  [2261] = 10,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(15), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2298] = 10,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(10), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2335] = 10,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(12), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2372] = 10,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(23), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(13), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2409] = 10,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
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
  [2446] = 12,
    ACTIONS(137), 1,
      sym_keyword_join,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(143), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(89), 1,
      sym_where,
    STATE(115), 1,
      sym_group_by,
    STATE(148), 1,
      sym_order_by,
    STATE(224), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(70), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2486] = 12,
    ACTIONS(137), 1,
      sym_keyword_join,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(143), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(93), 1,
      sym_where,
    STATE(118), 1,
      sym_group_by,
    STATE(167), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(83), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2526] = 12,
    ACTIONS(137), 1,
      sym_keyword_join,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(143), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(89), 1,
      sym_where,
    STATE(115), 1,
      sym_group_by,
    STATE(148), 1,
      sym_order_by,
    STATE(224), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(83), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2566] = 6,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(173), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(171), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [2593] = 10,
    ACTIONS(179), 1,
      sym_keyword_primary,
    ACTIONS(181), 1,
      sym_keyword_not,
    ACTIONS(183), 1,
      sym_keyword_auto_increment,
    ACTIONS(185), 1,
      sym_keyword_default,
    STATE(128), 1,
      sym__primary_key,
    STATE(217), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(98), 2,
      sym__not_null,
      sym__default_null,
  [2628] = 13,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    ACTIONS(189), 1,
      sym_keyword_primary,
    ACTIONS(191), 1,
      sym_keyword_key,
    ACTIONS(193), 1,
      sym_keyword_constraint,
    STATE(86), 1,
      sym_identifier,
    STATE(200), 1,
      sym_constraint,
    STATE(233), 1,
      sym__key_constraint,
    STATE(236), 1,
      sym__primary_key_constraint,
    STATE(239), 1,
      sym__constraint_literal,
    STATE(240), 1,
      sym_column_definition,
    STATE(241), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2669] = 7,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(289), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(110), 2,
      sym_field,
      sym_function_call,
    ACTIONS(99), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2697] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [2717] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [2737] = 7,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(289), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(267), 2,
      sym_field,
      sym_function_call,
    ACTIONS(99), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [2765] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 10,
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
  [2782] = 3,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(197), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2800] = 3,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(201), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2818] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2834] = 4,
    ACTIONS(207), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(83), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(210), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2854] = 3,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(212), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2872] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(216), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2888] = 7,
    ACTIONS(218), 1,
      sym_keyword_bigint,
    ACTIONS(220), 1,
      sym_keyword_date,
    ACTIONS(222), 1,
      sym_keyword_datetime,
    ACTIONS(224), 1,
      sym_keyword_char,
    ACTIONS(226), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(73), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [2914] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(228), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2929] = 8,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    ACTIONS(230), 1,
      sym_keyword_default,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(290), 1,
      sym_table_options,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(109), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [2956] = 8,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(143), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(118), 1,
      sym_group_by,
    STATE(167), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2983] = 4,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(234), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3002] = 8,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(198), 1,
      sym_table_reference,
    STATE(281), 1,
      sym__table_references,
    STATE(283), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(282), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [3029] = 8,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    ACTIONS(230), 1,
      sym_keyword_default,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    STATE(315), 1,
      sym_identifier,
    STATE(316), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(109), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [3056] = 8,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(143), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(113), 1,
      sym_group_by,
    STATE(149), 1,
      sym_order_by,
    STATE(230), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3083] = 4,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(242), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3102] = 8,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(143), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(115), 1,
      sym_group_by,
    STATE(148), 1,
      sym_order_by,
    STATE(224), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3129] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3144] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3159] = 7,
    ACTIONS(179), 1,
      sym_keyword_primary,
    ACTIONS(251), 1,
      sym_keyword_auto_increment,
    STATE(141), 1,
      sym__primary_key,
    STATE(247), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3184] = 9,
    ACTIONS(179), 1,
      sym_keyword_primary,
    ACTIONS(255), 1,
      sym_keyword_key,
    ACTIONS(257), 1,
      sym_keyword_constraint,
    STATE(233), 1,
      sym__key_constraint,
    STATE(236), 1,
      sym__primary_key_constraint,
    STATE(239), 1,
      sym__constraint_literal,
    STATE(241), 1,
      sym__primary_key,
    STATE(246), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3213] = 4,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(259), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3232] = 6,
    ACTIONS(179), 1,
      sym_keyword_primary,
    STATE(133), 1,
      sym__primary_key,
    STATE(248), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3254] = 8,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_where,
    STATE(211), 1,
      sym_order_by,
    STATE(329), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3280] = 8,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_where,
    STATE(189), 1,
      sym_order_by,
    STATE(305), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3306] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(183), 1,
      sym_literal,
    STATE(194), 1,
      sym_select,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3332] = 7,
    ACTIONS(267), 1,
      sym_keyword_default,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(105), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [3356] = 6,
    ACTIONS(179), 1,
      sym_keyword_primary,
    STATE(141), 1,
      sym__primary_key,
    STATE(247), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3378] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(187), 1,
      sym_select,
    STATE(193), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3404] = 6,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(173), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [3426] = 7,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    ACTIONS(230), 1,
      sym_keyword_default,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(105), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [3450] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(242), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3464] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(280), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(282), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3491] = 6,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(169), 1,
      sym_order_by,
    STATE(251), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(284), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3512] = 7,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    ACTIONS(286), 1,
      sym_keyword_if,
    STATE(134), 1,
      sym_identifier,
    STATE(147), 1,
      sym__if_not_exists,
    STATE(220), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3535] = 6,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(167), 1,
      sym_order_by,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3556] = 4,
    ACTIONS(290), 1,
      sym_keyword_having,
    STATE(170), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(288), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3573] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3586] = 6,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(149), 1,
      sym_order_by,
    STATE(230), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3607] = 6,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(148), 1,
      sym_order_by,
    STATE(224), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3628] = 4,
    STATE(184), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(294), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3645] = 3,
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
  [3660] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(171), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [3679] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(296), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3696] = 3,
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
  [3711] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3728] = 6,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_order_by,
    STATE(273), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3748] = 6,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(221), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3768] = 4,
    STATE(247), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3784] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(303), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3796] = 3,
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
  [3810] = 3,
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
  [3824] = 6,
    ACTIONS(141), 1,
      sym_keyword_order_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      sym_order_by,
    STATE(291), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3844] = 4,
    STATE(242), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(307), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3860] = 3,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(309), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3874] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(313), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3886] = 6,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(213), 1,
      sym_table_reference,
    STATE(304), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3906] = 6,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(183), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3926] = 4,
    STATE(243), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(315), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3942] = 6,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(228), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3962] = 6,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(146), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3982] = 4,
    STATE(248), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3998] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(86), 1,
      sym_identifier,
    STATE(165), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4015] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [4028] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(224), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4043] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(317), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(319), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4056] = 4,
    ACTIONS(321), 1,
      sym_keyword_offset,
    STATE(244), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(323), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4071] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(231), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4088] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(252), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4103] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(251), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(284), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4118] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(325), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(327), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4131] = 4,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [4146] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(138), 1,
      sym_identifier,
    STATE(182), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4163] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(332), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4176] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(336), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4189] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(86), 1,
      sym_identifier,
    STATE(240), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4206] = 5,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_column_definitions_repeat1,
    STATE(284), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4223] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(177), 1,
      sym__column_without_order,
    STATE(222), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4240] = 5,
    ACTIONS(344), 1,
      anon_sym_BQUOTE,
    ACTIONS(346), 1,
      sym__identifier,
    STATE(122), 1,
      sym_identifier,
    STATE(160), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4257] = 5,
    ACTIONS(348), 1,
      anon_sym_BQUOTE,
    ACTIONS(350), 1,
      sym__identifier,
    STATE(45), 1,
      sym_table_expression,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4274] = 4,
    ACTIONS(352), 1,
      sym_keyword_on,
    STATE(261), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 2,
      sym_keyword_force,
      sym_keyword_use,
  [4289] = 4,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(296), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [4304] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(354), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [4315] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(215), 1,
      sym__column_without_order,
    STATE(222), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4332] = 4,
    ACTIONS(356), 1,
      sym_keyword_from,
    STATE(287), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 2,
      sym_keyword_force,
      sym_keyword_use,
  [4347] = 5,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_column_definitions_repeat1,
    STATE(285), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4364] = 5,
    ACTIONS(360), 1,
      anon_sym_BQUOTE,
    ACTIONS(362), 1,
      sym__identifier,
    STATE(102), 1,
      sym_table_expression,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4381] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(230), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4396] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(364), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(366), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [4409] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    STATE(250), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(368), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4424] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(370), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4435] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(225), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(372), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4463] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(138), 1,
      sym_identifier,
    STATE(238), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4480] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [4493] = 4,
    ACTIONS(374), 1,
      anon_sym_BQUOTE,
    ACTIONS(376), 1,
      sym__identifier,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4507] = 4,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4521] = 4,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4535] = 4,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4549] = 4,
    ACTIONS(389), 1,
      sym_keyword_where,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    STATE(303), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4563] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(162), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4577] = 4,
    ACTIONS(393), 1,
      sym_keyword_set,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4591] = 4,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4605] = 4,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4619] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(405), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4629] = 4,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4643] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    STATE(306), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4657] = 4,
    ACTIONS(411), 1,
      sym_keyword_from,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4671] = 4,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4685] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    STATE(273), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4699] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(320), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4713] = 4,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4727] = 4,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4741] = 4,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4755] = 4,
    ACTIONS(411), 1,
      sym_keyword_from,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4769] = 4,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4783] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4797] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(235), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4811] = 4,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      sym_keyword_set,
    STATE(181), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4825] = 4,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4839] = 4,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4853] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(257), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4867] = 4,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4881] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(436), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4891] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    STATE(258), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4905] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(440), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4915] = 4,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4929] = 4,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4943] = 4,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4957] = 4,
    ACTIONS(411), 1,
      sym_keyword_from,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4971] = 4,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4985] = 4,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    STATE(291), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4999] = 4,
    ACTIONS(459), 1,
      sym_keyword_set,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5013] = 4,
    ACTIONS(464), 1,
      sym_keyword_values,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5027] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(468), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5037] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(470), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5046] = 3,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5057] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5066] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(474), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [5075] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5084] = 3,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5095] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(447), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5104] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(478), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5113] = 3,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    STATE(278), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5124] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5133] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(459), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [5142] = 3,
    ACTIONS(482), 1,
      sym_keyword_for,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5153] = 3,
    ACTIONS(486), 1,
      sym_keyword_from,
    STATE(265), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5164] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(488), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5173] = 3,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5184] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(284), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5193] = 3,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5204] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(490), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5213] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(492), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5222] = 3,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(253), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5233] = 3,
    ACTIONS(179), 1,
      sym_keyword_primary,
    STATE(216), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(494), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5253] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(496), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5262] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(417), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(492), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5280] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(442), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5289] = 3,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5300] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(498), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5309] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(500), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5318] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(502), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5327] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(504), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5336] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(384), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5345] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5354] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(307), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5363] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(506), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5372] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(508), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5381] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(368), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5390] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5399] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(510), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5408] = 2,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5416] = 2,
    ACTIONS(516), 1,
      aux_sym__literal_string_token2,
    ACTIONS(514), 2,
      sym_comment,
      sym_marginalia,
  [5424] = 2,
    ACTIONS(518), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5432] = 2,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5440] = 2,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5448] = 2,
    ACTIONS(524), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5456] = 2,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5464] = 2,
    ACTIONS(528), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5472] = 2,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5480] = 2,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5488] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5496] = 2,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5504] = 2,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5512] = 2,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5520] = 2,
    ACTIONS(542), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5528] = 2,
    ACTIONS(544), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5536] = 2,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5544] = 2,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5552] = 2,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5560] = 2,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5568] = 2,
    ACTIONS(550), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5576] = 2,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5584] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5592] = 2,
    ACTIONS(556), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5600] = 2,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5608] = 2,
    ACTIONS(560), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5616] = 2,
    ACTIONS(562), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5624] = 2,
    ACTIONS(564), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5632] = 2,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5640] = 2,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5648] = 2,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5656] = 2,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5664] = 2,
    ACTIONS(572), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5672] = 2,
    ACTIONS(574), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5680] = 2,
    ACTIONS(576), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5688] = 2,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5696] = 2,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5704] = 2,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5712] = 2,
    ACTIONS(582), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5720] = 2,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5728] = 2,
    ACTIONS(586), 1,
      aux_sym__literal_string_token1,
    ACTIONS(514), 2,
      sym_comment,
      sym_marginalia,
  [5736] = 2,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5744] = 2,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5752] = 2,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5760] = 2,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5768] = 2,
    ACTIONS(596), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5776] = 2,
    ACTIONS(598), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5784] = 2,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5792] = 2,
    ACTIONS(602), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5800] = 2,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5808] = 2,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5816] = 2,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5824] = 2,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5832] = 2,
    ACTIONS(610), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5840] = 2,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5848] = 2,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5856] = 2,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5864] = 2,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5872] = 2,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5880] = 2,
    ACTIONS(620), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5888] = 2,
    ACTIONS(622), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5896] = 2,
    ACTIONS(624), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5904] = 2,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5912] = 2,
    ACTIONS(626), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5920] = 2,
    ACTIONS(628), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5928] = 2,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5936] = 2,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5944] = 2,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5952] = 2,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5960] = 2,
    ACTIONS(638), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5968] = 2,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5976] = 2,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5984] = 2,
    ACTIONS(644), 1,
      aux_sym__literal_string_token1,
    ACTIONS(514), 2,
      sym_comment,
      sym_marginalia,
  [5992] = 2,
    ACTIONS(646), 1,
      aux_sym__literal_string_token2,
    ACTIONS(514), 2,
      sym_comment,
      sym_marginalia,
  [6000] = 2,
    ACTIONS(648), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6008] = 2,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6016] = 2,
    ACTIONS(650), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6024] = 2,
    ACTIONS(652), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6032] = 2,
    ACTIONS(654), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6040] = 2,
    ACTIONS(656), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 530,
  [SMALL_STATE(17)] = 562,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 626,
  [SMALL_STATE(20)] = 658,
  [SMALL_STATE(21)] = 690,
  [SMALL_STATE(22)] = 728,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 825,
  [SMALL_STATE(26)] = 858,
  [SMALL_STATE(27)] = 894,
  [SMALL_STATE(28)] = 941,
  [SMALL_STATE(29)] = 972,
  [SMALL_STATE(30)] = 1022,
  [SMALL_STATE(31)] = 1072,
  [SMALL_STATE(32)] = 1106,
  [SMALL_STATE(33)] = 1136,
  [SMALL_STATE(34)] = 1175,
  [SMALL_STATE(35)] = 1202,
  [SMALL_STATE(36)] = 1229,
  [SMALL_STATE(37)] = 1258,
  [SMALL_STATE(38)] = 1295,
  [SMALL_STATE(39)] = 1336,
  [SMALL_STATE(40)] = 1365,
  [SMALL_STATE(41)] = 1398,
  [SMALL_STATE(42)] = 1425,
  [SMALL_STATE(43)] = 1452,
  [SMALL_STATE(44)] = 1479,
  [SMALL_STATE(45)] = 1520,
  [SMALL_STATE(46)] = 1567,
  [SMALL_STATE(47)] = 1607,
  [SMALL_STATE(48)] = 1645,
  [SMALL_STATE(49)] = 1683,
  [SMALL_STATE(50)] = 1725,
  [SMALL_STATE(51)] = 1767,
  [SMALL_STATE(52)] = 1807,
  [SMALL_STATE(53)] = 1844,
  [SMALL_STATE(54)] = 1881,
  [SMALL_STATE(55)] = 1918,
  [SMALL_STATE(56)] = 1957,
  [SMALL_STATE(57)] = 1994,
  [SMALL_STATE(58)] = 2033,
  [SMALL_STATE(59)] = 2072,
  [SMALL_STATE(60)] = 2111,
  [SMALL_STATE(61)] = 2150,
  [SMALL_STATE(62)] = 2187,
  [SMALL_STATE(63)] = 2224,
  [SMALL_STATE(64)] = 2261,
  [SMALL_STATE(65)] = 2298,
  [SMALL_STATE(66)] = 2335,
  [SMALL_STATE(67)] = 2372,
  [SMALL_STATE(68)] = 2409,
  [SMALL_STATE(69)] = 2446,
  [SMALL_STATE(70)] = 2486,
  [SMALL_STATE(71)] = 2526,
  [SMALL_STATE(72)] = 2566,
  [SMALL_STATE(73)] = 2593,
  [SMALL_STATE(74)] = 2628,
  [SMALL_STATE(75)] = 2669,
  [SMALL_STATE(76)] = 2697,
  [SMALL_STATE(77)] = 2717,
  [SMALL_STATE(78)] = 2737,
  [SMALL_STATE(79)] = 2765,
  [SMALL_STATE(80)] = 2782,
  [SMALL_STATE(81)] = 2800,
  [SMALL_STATE(82)] = 2818,
  [SMALL_STATE(83)] = 2834,
  [SMALL_STATE(84)] = 2854,
  [SMALL_STATE(85)] = 2872,
  [SMALL_STATE(86)] = 2888,
  [SMALL_STATE(87)] = 2914,
  [SMALL_STATE(88)] = 2929,
  [SMALL_STATE(89)] = 2956,
  [SMALL_STATE(90)] = 2983,
  [SMALL_STATE(91)] = 3002,
  [SMALL_STATE(92)] = 3029,
  [SMALL_STATE(93)] = 3056,
  [SMALL_STATE(94)] = 3083,
  [SMALL_STATE(95)] = 3102,
  [SMALL_STATE(96)] = 3129,
  [SMALL_STATE(97)] = 3144,
  [SMALL_STATE(98)] = 3159,
  [SMALL_STATE(99)] = 3184,
  [SMALL_STATE(100)] = 3213,
  [SMALL_STATE(101)] = 3232,
  [SMALL_STATE(102)] = 3254,
  [SMALL_STATE(103)] = 3280,
  [SMALL_STATE(104)] = 3306,
  [SMALL_STATE(105)] = 3332,
  [SMALL_STATE(106)] = 3356,
  [SMALL_STATE(107)] = 3378,
  [SMALL_STATE(108)] = 3404,
  [SMALL_STATE(109)] = 3426,
  [SMALL_STATE(110)] = 3450,
  [SMALL_STATE(111)] = 3464,
  [SMALL_STATE(112)] = 3478,
  [SMALL_STATE(113)] = 3491,
  [SMALL_STATE(114)] = 3512,
  [SMALL_STATE(115)] = 3535,
  [SMALL_STATE(116)] = 3556,
  [SMALL_STATE(117)] = 3573,
  [SMALL_STATE(118)] = 3586,
  [SMALL_STATE(119)] = 3607,
  [SMALL_STATE(120)] = 3628,
  [SMALL_STATE(121)] = 3645,
  [SMALL_STATE(122)] = 3660,
  [SMALL_STATE(123)] = 3679,
  [SMALL_STATE(124)] = 3696,
  [SMALL_STATE(125)] = 3711,
  [SMALL_STATE(126)] = 3728,
  [SMALL_STATE(127)] = 3748,
  [SMALL_STATE(128)] = 3768,
  [SMALL_STATE(129)] = 3784,
  [SMALL_STATE(130)] = 3796,
  [SMALL_STATE(131)] = 3810,
  [SMALL_STATE(132)] = 3824,
  [SMALL_STATE(133)] = 3844,
  [SMALL_STATE(134)] = 3860,
  [SMALL_STATE(135)] = 3874,
  [SMALL_STATE(136)] = 3886,
  [SMALL_STATE(137)] = 3906,
  [SMALL_STATE(138)] = 3926,
  [SMALL_STATE(139)] = 3942,
  [SMALL_STATE(140)] = 3962,
  [SMALL_STATE(141)] = 3982,
  [SMALL_STATE(142)] = 3998,
  [SMALL_STATE(143)] = 4015,
  [SMALL_STATE(144)] = 4028,
  [SMALL_STATE(145)] = 4043,
  [SMALL_STATE(146)] = 4056,
  [SMALL_STATE(147)] = 4071,
  [SMALL_STATE(148)] = 4088,
  [SMALL_STATE(149)] = 4103,
  [SMALL_STATE(150)] = 4118,
  [SMALL_STATE(151)] = 4131,
  [SMALL_STATE(152)] = 4146,
  [SMALL_STATE(153)] = 4163,
  [SMALL_STATE(154)] = 4176,
  [SMALL_STATE(155)] = 4189,
  [SMALL_STATE(156)] = 4206,
  [SMALL_STATE(157)] = 4223,
  [SMALL_STATE(158)] = 4240,
  [SMALL_STATE(159)] = 4257,
  [SMALL_STATE(160)] = 4274,
  [SMALL_STATE(161)] = 4289,
  [SMALL_STATE(162)] = 4304,
  [SMALL_STATE(163)] = 4315,
  [SMALL_STATE(164)] = 4332,
  [SMALL_STATE(165)] = 4347,
  [SMALL_STATE(166)] = 4364,
  [SMALL_STATE(167)] = 4381,
  [SMALL_STATE(168)] = 4396,
  [SMALL_STATE(169)] = 4409,
  [SMALL_STATE(170)] = 4424,
  [SMALL_STATE(171)] = 4435,
  [SMALL_STATE(172)] = 4452,
  [SMALL_STATE(173)] = 4463,
  [SMALL_STATE(174)] = 4480,
  [SMALL_STATE(175)] = 4493,
  [SMALL_STATE(176)] = 4507,
  [SMALL_STATE(177)] = 4521,
  [SMALL_STATE(178)] = 4535,
  [SMALL_STATE(179)] = 4549,
  [SMALL_STATE(180)] = 4563,
  [SMALL_STATE(181)] = 4577,
  [SMALL_STATE(182)] = 4591,
  [SMALL_STATE(183)] = 4605,
  [SMALL_STATE(184)] = 4619,
  [SMALL_STATE(185)] = 4629,
  [SMALL_STATE(186)] = 4643,
  [SMALL_STATE(187)] = 4657,
  [SMALL_STATE(188)] = 4671,
  [SMALL_STATE(189)] = 4685,
  [SMALL_STATE(190)] = 4699,
  [SMALL_STATE(191)] = 4713,
  [SMALL_STATE(192)] = 4727,
  [SMALL_STATE(193)] = 4741,
  [SMALL_STATE(194)] = 4755,
  [SMALL_STATE(195)] = 4769,
  [SMALL_STATE(196)] = 4783,
  [SMALL_STATE(197)] = 4797,
  [SMALL_STATE(198)] = 4811,
  [SMALL_STATE(199)] = 4825,
  [SMALL_STATE(200)] = 4839,
  [SMALL_STATE(201)] = 4853,
  [SMALL_STATE(202)] = 4867,
  [SMALL_STATE(203)] = 4881,
  [SMALL_STATE(204)] = 4891,
  [SMALL_STATE(205)] = 4905,
  [SMALL_STATE(206)] = 4915,
  [SMALL_STATE(207)] = 4929,
  [SMALL_STATE(208)] = 4943,
  [SMALL_STATE(209)] = 4957,
  [SMALL_STATE(210)] = 4971,
  [SMALL_STATE(211)] = 4985,
  [SMALL_STATE(212)] = 4999,
  [SMALL_STATE(213)] = 5013,
  [SMALL_STATE(214)] = 5027,
  [SMALL_STATE(215)] = 5037,
  [SMALL_STATE(216)] = 5046,
  [SMALL_STATE(217)] = 5057,
  [SMALL_STATE(218)] = 5066,
  [SMALL_STATE(219)] = 5075,
  [SMALL_STATE(220)] = 5084,
  [SMALL_STATE(221)] = 5095,
  [SMALL_STATE(222)] = 5104,
  [SMALL_STATE(223)] = 5113,
  [SMALL_STATE(224)] = 5124,
  [SMALL_STATE(225)] = 5133,
  [SMALL_STATE(226)] = 5142,
  [SMALL_STATE(227)] = 5153,
  [SMALL_STATE(228)] = 5164,
  [SMALL_STATE(229)] = 5173,
  [SMALL_STATE(230)] = 5184,
  [SMALL_STATE(231)] = 5193,
  [SMALL_STATE(232)] = 5204,
  [SMALL_STATE(233)] = 5213,
  [SMALL_STATE(234)] = 5222,
  [SMALL_STATE(235)] = 5233,
  [SMALL_STATE(236)] = 5244,
  [SMALL_STATE(237)] = 5253,
  [SMALL_STATE(238)] = 5262,
  [SMALL_STATE(239)] = 5271,
  [SMALL_STATE(240)] = 5280,
  [SMALL_STATE(241)] = 5289,
  [SMALL_STATE(242)] = 5300,
  [SMALL_STATE(243)] = 5309,
  [SMALL_STATE(244)] = 5318,
  [SMALL_STATE(245)] = 5327,
  [SMALL_STATE(246)] = 5336,
  [SMALL_STATE(247)] = 5345,
  [SMALL_STATE(248)] = 5354,
  [SMALL_STATE(249)] = 5363,
  [SMALL_STATE(250)] = 5372,
  [SMALL_STATE(251)] = 5381,
  [SMALL_STATE(252)] = 5390,
  [SMALL_STATE(253)] = 5399,
  [SMALL_STATE(254)] = 5408,
  [SMALL_STATE(255)] = 5416,
  [SMALL_STATE(256)] = 5424,
  [SMALL_STATE(257)] = 5432,
  [SMALL_STATE(258)] = 5440,
  [SMALL_STATE(259)] = 5448,
  [SMALL_STATE(260)] = 5456,
  [SMALL_STATE(261)] = 5464,
  [SMALL_STATE(262)] = 5472,
  [SMALL_STATE(263)] = 5480,
  [SMALL_STATE(264)] = 5488,
  [SMALL_STATE(265)] = 5496,
  [SMALL_STATE(266)] = 5504,
  [SMALL_STATE(267)] = 5512,
  [SMALL_STATE(268)] = 5520,
  [SMALL_STATE(269)] = 5528,
  [SMALL_STATE(270)] = 5536,
  [SMALL_STATE(271)] = 5544,
  [SMALL_STATE(272)] = 5552,
  [SMALL_STATE(273)] = 5560,
  [SMALL_STATE(274)] = 5568,
  [SMALL_STATE(275)] = 5576,
  [SMALL_STATE(276)] = 5584,
  [SMALL_STATE(277)] = 5592,
  [SMALL_STATE(278)] = 5600,
  [SMALL_STATE(279)] = 5608,
  [SMALL_STATE(280)] = 5616,
  [SMALL_STATE(281)] = 5624,
  [SMALL_STATE(282)] = 5632,
  [SMALL_STATE(283)] = 5640,
  [SMALL_STATE(284)] = 5648,
  [SMALL_STATE(285)] = 5656,
  [SMALL_STATE(286)] = 5664,
  [SMALL_STATE(287)] = 5672,
  [SMALL_STATE(288)] = 5680,
  [SMALL_STATE(289)] = 5688,
  [SMALL_STATE(290)] = 5696,
  [SMALL_STATE(291)] = 5704,
  [SMALL_STATE(292)] = 5712,
  [SMALL_STATE(293)] = 5720,
  [SMALL_STATE(294)] = 5728,
  [SMALL_STATE(295)] = 5736,
  [SMALL_STATE(296)] = 5744,
  [SMALL_STATE(297)] = 5752,
  [SMALL_STATE(298)] = 5760,
  [SMALL_STATE(299)] = 5768,
  [SMALL_STATE(300)] = 5776,
  [SMALL_STATE(301)] = 5784,
  [SMALL_STATE(302)] = 5792,
  [SMALL_STATE(303)] = 5800,
  [SMALL_STATE(304)] = 5808,
  [SMALL_STATE(305)] = 5816,
  [SMALL_STATE(306)] = 5824,
  [SMALL_STATE(307)] = 5832,
  [SMALL_STATE(308)] = 5840,
  [SMALL_STATE(309)] = 5848,
  [SMALL_STATE(310)] = 5856,
  [SMALL_STATE(311)] = 5864,
  [SMALL_STATE(312)] = 5872,
  [SMALL_STATE(313)] = 5880,
  [SMALL_STATE(314)] = 5888,
  [SMALL_STATE(315)] = 5896,
  [SMALL_STATE(316)] = 5904,
  [SMALL_STATE(317)] = 5912,
  [SMALL_STATE(318)] = 5920,
  [SMALL_STATE(319)] = 5928,
  [SMALL_STATE(320)] = 5936,
  [SMALL_STATE(321)] = 5944,
  [SMALL_STATE(322)] = 5952,
  [SMALL_STATE(323)] = 5960,
  [SMALL_STATE(324)] = 5968,
  [SMALL_STATE(325)] = 5976,
  [SMALL_STATE(326)] = 5984,
  [SMALL_STATE(327)] = 5992,
  [SMALL_STATE(328)] = 6000,
  [SMALL_STATE(329)] = 6008,
  [SMALL_STATE(330)] = 6016,
  [SMALL_STATE(331)] = 6024,
  [SMALL_STATE(332)] = 6032,
  [SMALL_STATE(333)] = 6040,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 10),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 7),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(158),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 13),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 15),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(75),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 15),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 15),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(168),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(292),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(58),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 8),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 12),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 12),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(60),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(99),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(173),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(155),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(127),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(163),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(171),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 9),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 11),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 8),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 14),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 14),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 9),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 9),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [616] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
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
