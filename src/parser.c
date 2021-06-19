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
#define STATE_COUNT 399
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 1
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 28

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
  sym__function_name = 121,
  sym_from = 122,
  sym_table_expression = 123,
  sym_index_hint = 124,
  sym_join = 125,
  sym_where = 126,
  sym_group_by = 127,
  sym__having = 128,
  sym_order_by = 129,
  sym_order_expression = 130,
  sym_limit = 131,
  sym_offset = 132,
  sym_where_expression = 133,
  sym_predicate = 134,
  sym__expression = 135,
  sym_subquery = 136,
  sym_list = 137,
  sym_literal = 138,
  sym__literal_string = 139,
  sym_identifier = 140,
  aux_sym__column_list_without_order_repeat1 = 141,
  aux_sym__table_references_repeat1 = 142,
  aux_sym_assignment_list_repeat1 = 143,
  aux_sym_table_options_repeat1 = 144,
  aux_sym_column_definitions_repeat1 = 145,
  aux_sym_constraints_repeat1 = 146,
  aux_sym_column_list_repeat1 = 147,
  aux_sym__field_list_repeat1 = 148,
  aux_sym_function_call_repeat1 = 149,
  aux_sym_from_repeat1 = 150,
  aux_sym_list_repeat1 = 151,
  anon_alias_sym_if = 152,
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
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
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
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
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
  [aux_sym_function_call_repeat1] = {
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
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 0, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 1},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 33, .length = 3},
  [20] = {.index = 36, .length = 4},
  [21] = {.index = 40, .length = 1},
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 3},
  [24] = {.index = 46, .length = 4},
  [25] = {.index = 50, .length = 1},
  [26] = {.index = 51, .length = 1},
  [27] = {.index = 52, .length = 1},
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
    {field_name, 0},
    {field_table_alias, 2},
  [11] =
    {field_alias, 4},
    {field_name, 0},
    {field_parameter, 2},
  [14] =
    {field_parameter, 1},
  [15] =
    {field_name, 0},
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [18] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [20] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [23] =
    {field_name, 4},
    {field_schema, 0},
    {field_table_alias, 2},
  [26] =
    {field_index_name, 3},
  [27] =
    {field_name, 0},
    {field_type, 1},
  [29] =
    {field_name, 1, .inherited = true},
  [30] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 3},
  [33] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2},
  [36] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [40] =
    {field_name, 0, .inherited = true},
  [41] =
    {field_name, 0},
    {field_value, 2},
  [43] =
    {field_name, 2},
    {field_schema, 0},
    {field_table_alias, 4},
  [46] =
    {field_alias, 6},
    {field_name, 0},
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [50] =
    {field_index_name, 5},
  [51] =
    {field_name, 1},
  [52] =
    {field_size, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_if,
  },
  [7] = {
    [0] = sym_identifier,
  },
  [27] = {
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
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '%') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(498);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(500);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(503);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(507);
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
      if (lookahead == '^') ADVANCE(502);
      if (lookahead == '`') ADVANCE(527);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(487);
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
      if (lookahead == '%') ADVANCE(501);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(498);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(500);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(503);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(507);
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
      if (lookahead == '^') ADVANCE(502);
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
      if (lookahead == '%') ADVANCE(501);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(498);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(500);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(503);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(507);
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
      if (lookahead == '^') ADVANCE(502);
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
          lookahead == ' ') SKIP(389)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead == 'C') ADVANCE(571);
      if (lookahead == 'D') ADVANCE(553);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(680);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 'm') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(590);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(406)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(403)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(585);
      if (lookahead == 'J') ADVANCE(576);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(661);
      if (lookahead == 'j') ADVANCE(652);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
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
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(585);
      if (lookahead == 'J') ADVANCE(576);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(661);
      if (lookahead == 'j') ADVANCE(652);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(492);
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
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'O') ADVANCE(567);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'D') ADVANCE(545);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'K') ADVANCE(544);
      if (lookahead == 'P') ADVANCE(584);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead == 'p') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'O') ADVANCE(567);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(505);
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
      if (lookahead == 'C') ADVANCE(431);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(429);
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
      if (lookahead == 'D') ADVANCE(459);
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
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(480);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(464);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(438);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(424);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(411);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(410);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(414);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(413);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(482);
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
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'N') ADVANCE(458);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(461);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(460);
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
      if (lookahead == 'G') ADVANCE(456);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(428);
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
      if (lookahead == 'L') ADVANCE(479);
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
      if (lookahead == 'T') ADVANCE(417);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'M') ADVANCE(418);
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
      if (lookahead == 'S') ADVANCE(441);
      if (lookahead == 'U') ADVANCE(190);
      if (lookahead == 'V') ADVANCE(92);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(458);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(454);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(420);
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
      if (lookahead == 'O') ADVANCE(415);
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
      if (lookahead == 'R') ADVANCE(461);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(470);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(483);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(484);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(469);
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
      if (lookahead == 'S') ADVANCE(474);
      END_STATE();
    case 171:
      if (lookahead == 'S') ADVANCE(416);
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
      if (lookahead == 'T') ADVANCE(463);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(417);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(450);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(433);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(478);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(435);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(409);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(476);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(446);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(448);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(475);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(412);
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
      if (lookahead == 'X') ADVANCE(452);
      END_STATE();
    case 202:
      if (lookahead == 'X') ADVANCE(468);
      END_STATE();
    case 203:
      if (lookahead == 'X') ADVANCE(109);
      END_STATE();
    case 204:
      if (lookahead == 'Y') ADVANCE(439);
      END_STATE();
    case 205:
      if (lookahead == 'Y') ADVANCE(436);
      END_STATE();
    case 206:
      if (lookahead == 'Y') ADVANCE(427);
      END_STATE();
    case 207:
      if (lookahead == 'Y') ADVANCE(426);
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
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(429);
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
      if (lookahead == 'd') ADVANCE(459);
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
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(482);
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
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 267:
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 268:
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(460);
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
      if (lookahead == 'g') ADVANCE(456);
      END_STATE();
    case 272:
      if (lookahead == 'g') ADVANCE(428);
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
      if (lookahead == 'l') ADVANCE(479);
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
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(418);
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
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(420);
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
      if (lookahead == 'o') ADVANCE(415);
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
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(469);
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
      if (lookahead == 's') ADVANCE(474);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(416);
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
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(412);
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
      if (lookahead == 'x') ADVANCE(452);
      END_STATE();
    case 381:
      if (lookahead == 'x') ADVANCE(468);
      END_STATE();
    case 382:
      if (lookahead == 'x') ADVANCE(288);
      END_STATE();
    case 383:
      if (lookahead == 'y') ADVANCE(439);
      END_STATE();
    case 384:
      if (lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 385:
      if (lookahead == 'y') ADVANCE(427);
      END_STATE();
    case 386:
      if (lookahead == 'y') ADVANCE(426);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
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
      if (lookahead == '%') ADVANCE(501);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(498);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(500);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(503);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(507);
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
      if (lookahead == '^') ADVANCE(502);
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
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(501);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(498);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(500);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(503);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(507);
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
      if (lookahead == '^') ADVANCE(502);
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
    case 390:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead == 'C') ADVANCE(571);
      if (lookahead == 'D') ADVANCE(553);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(680);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 'm') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 391:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 392:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(585);
      if (lookahead == 'J') ADVANCE(576);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(661);
      if (lookahead == 'j') ADVANCE(652);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 393:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(575);
      if (lookahead == 'K') ADVANCE(544);
      if (lookahead == 'P') ADVANCE(584);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead == 'p') ADVANCE(660);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 394:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(585);
      if (lookahead == 'J') ADVANCE(576);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(661);
      if (lookahead == 'j') ADVANCE(652);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 395:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(590);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 396:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 397:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'O') ADVANCE(567);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 398:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 399:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'D') ADVANCE(545);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 400:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 401:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(552);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 402:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'O') ADVANCE(567);
      if (lookahead == 'U') ADVANCE(589);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 403:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(403)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 404:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 405:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 406:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(406)
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 407:
      if (eof) ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '%') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(498);
      if (lookahead == ',') ADVANCE(495);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(500);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(503);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(507);
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
      if (lookahead == '^') ADVANCE(502);
      if (lookahead == '`') ADVANCE(527);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_insert);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_replace);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_into);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_values);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_desc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_asc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(431);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'C') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_as);
      if (lookahead == 'c') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(78);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(525);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(516);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(506);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead == '/') ADVANCE(491);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '/') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(516);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(516);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '/') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(516);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(518);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(524);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__literal_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(605);
      if (lookahead == 'I') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'i') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
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
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 6},
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
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 28},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 29},
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
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 25},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 25},
  [210] = {.lex_state = 25},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 25},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 25},
  [221] = {.lex_state = 25},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 8},
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
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
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
  [304] = {.lex_state = 8},
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
  [320] = {.lex_state = 0},
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
  [334] = {.lex_state = 0},
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
  [348] = {.lex_state = 18},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 8},
  [353] = {.lex_state = 522},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 513},
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
  [383] = {.lex_state = 513},
  [384] = {.lex_state = 522},
  [385] = {.lex_state = 8},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 8},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 8},
  [391] = {.lex_state = 8},
  [392] = {.lex_state = 8},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 18},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
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
    [sym_program] = STATE(395),
    [sym_statement] = STATE(394),
    [sym__select_statement] = STATE(389),
    [sym_select] = STATE(270),
    [sym__delete_statement] = STATE(389),
    [sym_delete] = STATE(279),
    [sym__create_statement] = STATE(389),
    [sym_create] = STATE(375),
    [sym__insert_statement] = STATE(389),
    [sym_insert] = STATE(369),
    [sym__update_statement] = STATE(389),
    [sym_update] = STATE(363),
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
  [126] = 3,
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
  [162] = 3,
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
  [195] = 4,
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
  [230] = 4,
    ACTIONS(33), 1,
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
    ACTIONS(27), 18,
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
  [298] = 4,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 4,
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
  [333] = 4,
    ACTIONS(45), 1,
      anon_sym_DOT,
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
  [368] = 3,
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
  [400] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(49), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 18,
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
  [432] = 6,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 15,
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
  [470] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 18,
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
  [502] = 3,
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
  [534] = 4,
    ACTIONS(59), 1,
      anon_sym_CARET,
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
  [568] = 9,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      sym_keyword_in,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 13,
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
  [612] = 3,
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
  [644] = 3,
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
  [676] = 3,
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
  [708] = 11,
    ACTIONS(53), 1,
      sym_keyword_or,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      sym_keyword_in,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 9,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [756] = 8,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 14,
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
  [798] = 3,
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
  [830] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 18,
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
  [862] = 15,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(260), 1,
      sym_function_call,
    STATE(393), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(49), 3,
      sym_field,
      sym_predicate,
      sym_literal,
    STATE(58), 3,
      sym__expression,
      sym_subquery,
      sym_list,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [917] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(105), 10,
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
  [950] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(105), 10,
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
  [983] = 15,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(243), 1,
      sym_function_call,
    STATE(393), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(51), 3,
      sym_field,
      sym_predicate,
      sym_literal,
    STATE(58), 3,
      sym__expression,
      sym_subquery,
      sym_list,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1038] = 15,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(222), 1,
      sym_function_call,
    STATE(393), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(50), 3,
      sym_field,
      sym_predicate,
      sym_literal,
    STATE(58), 3,
      sym__expression,
      sym_subquery,
      sym_list,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1093] = 6,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 4,
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
    ACTIONS(105), 10,
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
  [1129] = 15,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(115), 1,
      anon_sym_STAR,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(227), 1,
      sym_select_expression,
    STATE(349), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(180), 2,
      sym_field,
      sym_function_call,
    STATE(229), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1182] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(105), 10,
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
  [1213] = 15,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(119), 1,
      anon_sym_STAR,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(233), 1,
      sym_order_expression,
    STATE(397), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(143), 2,
      sym_field,
      sym_function_call,
    STATE(164), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1266] = 12,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      sym_keyword_in,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(125), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1313] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(73), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 15,
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
  [1341] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 4,
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
    ACTIONS(105), 10,
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
  [1371] = 3,
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
  [1399] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 15,
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
  [1427] = 8,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 11,
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
  [1465] = 10,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(139), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 6,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1507] = 9,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(139), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 10,
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
  [1547] = 4,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 14,
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
  [1577] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(49), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 15,
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
  [1605] = 6,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 12,
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
  [1639] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(53), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 15,
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
  [1667] = 6,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 2,
      sym_keyword_where,
      anon_sym_SEMI,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 11,
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
  [1701] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 3,
      sym_keyword_where,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 11,
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
  [1730] = 6,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 11,
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
  [1763] = 6,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 11,
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
  [1796] = 6,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 11,
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
  [1829] = 12,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(393), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(281), 3,
      sym_field,
      sym_function_call,
      sym_literal,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1873] = 11,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(139), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(141), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1914] = 14,
    ACTIONS(157), 1,
      sym_keyword_join,
    ACTIONS(159), 1,
      sym_keyword_where,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(163), 1,
      sym_keyword_group_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(84), 1,
      sym_index_hint,
    STATE(125), 1,
      sym_where,
    STATE(158), 1,
      sym_group_by,
    STATE(189), 1,
      sym_order_by,
    STATE(302), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(80), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1961] = 11,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(186), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(53), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2001] = 11,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
      sym__literal_string,
    STATE(186), 1,
      sym_where_expression,
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
  [2041] = 10,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      sym_keyword_in,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(79), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2079] = 10,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(139), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(141), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2117] = 12,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(31), 1,
      sym_predicate,
    STATE(144), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(57), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2159] = 12,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(47), 1,
      sym_predicate,
    STATE(251), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2201] = 11,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
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
    STATE(57), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2240] = 10,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
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
  [2277] = 11,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(27), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(57), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2316] = 8,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym_keyword_as,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(185), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [2349] = 10,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
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
  [2386] = 10,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
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
  [2423] = 11,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(37), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(57), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2462] = 11,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(33), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(57), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2501] = 10,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
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
  [2538] = 11,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    STATE(48), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2577] = 10,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(23), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2614] = 10,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
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
  [2651] = 10,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(14), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2688] = 10,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
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
  [2725] = 10,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(42), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2762] = 10,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(17), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2799] = 10,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(18), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2836] = 10,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
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
  [2873] = 3,
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
  [2895] = 12,
    ACTIONS(157), 1,
      sym_keyword_join,
    ACTIONS(159), 1,
      sym_keyword_where,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(163), 1,
      sym_keyword_group_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(117), 1,
      sym_where,
    STATE(157), 1,
      sym_group_by,
    STATE(219), 1,
      sym_order_by,
    STATE(280), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(98), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2935] = 7,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(201), 1,
      sym_keyword_as,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(199), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(197), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [2965] = 12,
    ACTIONS(157), 1,
      sym_keyword_join,
    ACTIONS(159), 1,
      sym_keyword_where,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(163), 1,
      sym_keyword_group_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(111), 1,
      sym_where,
    STATE(161), 1,
      sym_group_by,
    STATE(207), 1,
      sym_order_by,
    STATE(288), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(98), 2,
      sym_join,
      aux_sym_from_repeat1,
  [3005] = 3,
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
  [3027] = 12,
    ACTIONS(157), 1,
      sym_keyword_join,
    ACTIONS(159), 1,
      sym_keyword_where,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(163), 1,
      sym_keyword_group_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(117), 1,
      sym_where,
    STATE(157), 1,
      sym_group_by,
    STATE(219), 1,
      sym_order_by,
    STATE(280), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(82), 2,
      sym_join,
      aux_sym_from_repeat1,
  [3067] = 8,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(349), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_function_call,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3098] = 13,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(205), 1,
      sym_keyword_primary,
    ACTIONS(207), 1,
      sym_keyword_key,
    ACTIONS(209), 1,
      sym_keyword_constraint,
    STATE(103), 1,
      sym_identifier,
    STATE(228), 1,
      sym_constraint,
    STATE(301), 1,
      sym__primary_key,
    STATE(303), 1,
      sym_column_definition,
    STATE(310), 1,
      sym__constraint_literal,
    STATE(311), 1,
      sym__primary_key_constraint,
    STATE(313), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3139] = 8,
    ACTIONS(89), 1,
      sym_keyword_if,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(397), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(137), 2,
      sym_field,
      sym_function_call,
    ACTIONS(87), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3170] = 10,
    ACTIONS(213), 1,
      sym_keyword_primary,
    ACTIONS(215), 1,
      sym_keyword_not,
    ACTIONS(217), 1,
      sym_keyword_auto_increment,
    ACTIONS(219), 1,
      sym_keyword_default,
    STATE(184), 1,
      sym__primary_key,
    STATE(277), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(118), 2,
      sym__not_null,
      sym__default_null,
  [3205] = 6,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(91), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(223), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [3232] = 6,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(227), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [3259] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 10,
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
  [3276] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 10,
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
  [3293] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(237), 1,
      sym_keyword_as,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(239), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3320] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 10,
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
  [3337] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(243), 10,
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
  [3354] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(247), 1,
      sym_keyword_as,
    STATE(151), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(245), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(249), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3381] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(251), 1,
      sym_keyword_as,
    STATE(150), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(245), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(249), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3408] = 4,
    ACTIONS(253), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(98), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(256), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3428] = 8,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(258), 1,
      sym_keyword_as,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(187), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [3456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(262), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3472] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(264), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3496] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(268), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3512] = 7,
    ACTIONS(270), 1,
      sym_keyword_bigint,
    ACTIONS(272), 1,
      sym_keyword_date,
    ACTIONS(274), 1,
      sym_keyword_datetime,
    ACTIONS(276), 1,
      sym_keyword_char,
    ACTIONS(278), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(88), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [3538] = 3,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(280), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3556] = 3,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(284), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3574] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(264), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3598] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(288), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(290), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3622] = 3,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3640] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(296), 1,
      sym_keyword_as,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(185), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [3665] = 7,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(300), 1,
      sym_keyword_as,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(197), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(199), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [3690] = 8,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(163), 1,
      sym_keyword_group_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(168), 1,
      sym_group_by,
    STATE(190), 1,
      sym_order_by,
    STATE(306), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(302), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3717] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(235), 1,
      sym_keyword_from,
    ACTIONS(304), 1,
      sym_keyword_as,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3742] = 8,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(170), 1,
      sym_identifier,
    STATE(230), 1,
      sym_table_reference,
    STATE(343), 1,
      sym__table_references,
    STATE(345), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(344), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [3769] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(245), 1,
      sym_keyword_from,
    ACTIONS(306), 1,
      sym_keyword_as,
    STATE(150), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3794] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(245), 1,
      sym_keyword_from,
    ACTIONS(308), 1,
      sym_keyword_as,
    STATE(151), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3819] = 8,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(310), 1,
      sym_keyword_default,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(355), 1,
      sym_identifier,
    STATE(366), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(127), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [3846] = 8,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(163), 1,
      sym_keyword_group_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(161), 1,
      sym_group_by,
    STATE(207), 1,
      sym_order_by,
    STATE(288), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3873] = 7,
    ACTIONS(213), 1,
      sym_keyword_primary,
    ACTIONS(314), 1,
      sym_keyword_auto_increment,
    STATE(172), 1,
      sym__primary_key,
    STATE(282), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3898] = 3,
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
  [3915] = 3,
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
  [3932] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(318), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3947] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(320), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3962] = 9,
    ACTIONS(213), 1,
      sym_keyword_primary,
    ACTIONS(322), 1,
      sym_keyword_key,
    ACTIONS(324), 1,
      sym_keyword_constraint,
    STATE(287), 1,
      sym_constraint,
    STATE(301), 1,
      sym__primary_key,
    STATE(310), 1,
      sym__constraint_literal,
    STATE(311), 1,
      sym__primary_key_constraint,
    STATE(313), 1,
      sym__key_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3991] = 8,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(310), 1,
      sym_keyword_default,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    STATE(355), 1,
      sym_identifier,
    STATE(372), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(127), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [4018] = 8,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(163), 1,
      sym_keyword_group_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(157), 1,
      sym_group_by,
    STATE(219), 1,
      sym_order_by,
    STATE(280), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4045] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(328), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4060] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(310), 1,
      sym_keyword_default,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(142), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [4084] = 6,
    ACTIONS(213), 1,
      sym_keyword_primary,
    STATE(172), 1,
      sym__primary_key,
    STATE(282), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4106] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(332), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4120] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(332), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4134] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(334), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4148] = 6,
    ACTIONS(213), 1,
      sym_keyword_primary,
    STATE(183), 1,
      sym__primary_key,
    STATE(289), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4170] = 8,
    ACTIONS(159), 1,
      sym_keyword_where,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      sym_where,
    STATE(264), 1,
      sym_order_by,
    STATE(373), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4196] = 3,
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
  [4212] = 4,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(340), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4230] = 3,
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
  [4246] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(344), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4260] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(264), 1,
      sym_keyword_from,
    STATE(130), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4282] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(264), 1,
      sym_keyword_from,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4304] = 4,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(344), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4322] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(349), 1,
      sym_keyword_as,
    STATE(94), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(197), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [4344] = 7,
    ACTIONS(351), 1,
      sym_keyword_default,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_BQUOTE,
    ACTIONS(359), 1,
      sym__identifier,
    STATE(355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(142), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [4368] = 4,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(362), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4386] = 8,
    ACTIONS(159), 1,
      sym_keyword_where,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      sym_where,
    STATE(250), 1,
      sym_order_by,
    STATE(351), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4412] = 6,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(227), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(229), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [4434] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(236), 1,
      sym_select,
    STATE(238), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4460] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(288), 1,
      sym_keyword_from,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(290), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4482] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(366), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4496] = 6,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(91), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(225), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [4518] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(368), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(368), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4546] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(269), 1,
      sym_select,
    STATE(273), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4572] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(227), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [4591] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(370), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4604] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(372), 1,
      sym_keyword_as,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4625] = 4,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(374), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [4642] = 6,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(207), 1,
      sym_order_by,
    STATE(288), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4663] = 6,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(219), 1,
      sym_order_by,
    STATE(280), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4684] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(376), 1,
      sym_keyword_as,
    STATE(151), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4705] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(378), 1,
      sym_keyword_as,
    STATE(150), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4726] = 6,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(190), 1,
      sym_order_by,
    STATE(306), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(302), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4747] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(91), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [4766] = 7,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(380), 1,
      sym_keyword_if,
    STATE(170), 1,
      sym_identifier,
    STATE(214), 1,
      sym__if_not_exists,
    STATE(316), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4789] = 4,
    STATE(254), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(382), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4806] = 4,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [4823] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(387), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4836] = 4,
    ACTIONS(391), 1,
      sym_keyword_having,
    STATE(203), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4853] = 6,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(193), 1,
      sym_order_by,
    STATE(284), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4874] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(395), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4886] = 3,
    ACTIONS(399), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(397), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [4900] = 6,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(273), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4920] = 4,
    STATE(289), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4936] = 6,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(290), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4956] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(266), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4974] = 6,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(268), 1,
      sym_order_by,
    STATE(387), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4994] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(266), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5012] = 4,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(340), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5028] = 6,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(307), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5048] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(344), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5064] = 4,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(362), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5080] = 4,
    STATE(296), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(408), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5096] = 6,
    ACTIONS(161), 1,
      sym_keyword_order_by,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    STATE(263), 1,
      sym_order_by,
    STATE(376), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5116] = 4,
    STATE(297), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(412), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5132] = 4,
    STATE(282), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5148] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(290), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5166] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(414), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5178] = 6,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym__number,
    STATE(9), 1,
      sym__literal_string,
    STATE(218), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5198] = 6,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(170), 1,
      sym_identifier,
    STATE(237), 1,
      sym_table_reference,
    STATE(327), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5218] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(280), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5233] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(284), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5248] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(305), 1,
      sym_identifier,
    STATE(315), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5265] = 4,
    ACTIONS(416), 1,
      sym_keyword_from,
    STATE(347), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      sym_keyword_force,
      sym_keyword_use,
  [5280] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(291), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(418), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5295] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(303), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5312] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(420), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(422), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5325] = 5,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_column_definitions_repeat1,
    STATE(368), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5342] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(181), 1,
      sym_identifier,
    STATE(274), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5359] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(181), 1,
      sym_identifier,
    STATE(298), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5376] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(428), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(430), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5389] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(432), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5400] = 5,
    ACTIONS(434), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
    STATE(211), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5417] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(438), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [5428] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(440), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5439] = 4,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [5454] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(256), 1,
      sym__column_without_order,
    STATE(305), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5471] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(374), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [5486] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(306), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(302), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5501] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(196), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5518] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(445), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(447), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5531] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(449), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(451), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5544] = 4,
    ACTIONS(453), 1,
      sym_keyword_on,
    STATE(377), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(167), 2,
      sym_keyword_force,
      sym_keyword_use,
  [5559] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(170), 1,
      sym_identifier,
    STATE(309), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5576] = 5,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_column_definitions_repeat1,
    STATE(342), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5593] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(170), 1,
      sym_identifier,
    STATE(314), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5610] = 5,
    ACTIONS(457), 1,
      anon_sym_BQUOTE,
    ACTIONS(459), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(133), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5627] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(461), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(463), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5640] = 5,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(54), 1,
      sym_table_expression,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5657] = 4,
    ACTIONS(469), 1,
      sym_keyword_offset,
    STATE(283), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5672] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    STATE(288), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5687] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [5700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [5713] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5727] = 4,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5741] = 4,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(300), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5755] = 4,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5769] = 4,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
    ACTIONS(479), 1,
      sym__identifier,
    STATE(210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5783] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(481), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5793] = 4,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5817] = 4,
    ACTIONS(489), 1,
      sym_keyword_set,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5831] = 4,
    ACTIONS(457), 1,
      anon_sym_BQUOTE,
    ACTIONS(459), 1,
      sym__identifier,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5845] = 4,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5859] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(498), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5869] = 4,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5883] = 4,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5897] = 4,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5911] = 4,
    ACTIONS(509), 1,
      sym_keyword_values,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5925] = 4,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5939] = 4,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      sym_keyword_set,
    STATE(249), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5953] = 4,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5967] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5981] = 4,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5995] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6009] = 4,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6023] = 4,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6037] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6051] = 4,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6065] = 4,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6079] = 4,
    ACTIONS(533), 1,
      sym_keyword_set,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6093] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(387), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6107] = 4,
    ACTIONS(538), 1,
      sym_keyword_where,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    STATE(324), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6121] = 4,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(364), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6135] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6149] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(544), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6159] = 4,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6173] = 4,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6187] = 4,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym__identifier,
    STATE(167), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6201] = 4,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      sym__identifier,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6215] = 4,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6229] = 4,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6243] = 4,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6257] = 4,
    ACTIONS(434), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      sym__identifier,
    STATE(141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6271] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    STATE(367), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6285] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6299] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6313] = 4,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6327] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6341] = 4,
    ACTIONS(165), 1,
      sym_keyword_limit,
    ACTIONS(567), 1,
      anon_sym_SEMI,
    STATE(350), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6355] = 4,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6369] = 4,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6383] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6397] = 4,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6411] = 4,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6425] = 4,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6439] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6453] = 4,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(171), 1,
      sym__identifier,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6467] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6476] = 3,
    ACTIONS(586), 1,
      sym_keyword_for,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6487] = 3,
    ACTIONS(590), 1,
      sym_keyword_from,
    STATE(317), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6498] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6507] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(592), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6516] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6525] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(594), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6534] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(418), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6543] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(596), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6552] = 3,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(292), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6563] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(573), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6572] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(302), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6581] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(412), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6590] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(493), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6599] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(600), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6608] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(602), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6617] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(604), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6626] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(606), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6635] = 3,
    ACTIONS(213), 1,
      sym_keyword_primary,
    STATE(286), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6646] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(608), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6655] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(610), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6664] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(550), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6673] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(612), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6682] = 3,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6693] = 3,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(294), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6704] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6713] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(500), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6722] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(614), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [6731] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(616), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6740] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6749] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(618), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6758] = 3,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    STATE(370), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6769] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(533), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [6778] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(622), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6787] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(624), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6796] = 3,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    STATE(326), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(622), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6816] = 3,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6827] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(628), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6836] = 3,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6847] = 2,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6855] = 2,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6863] = 2,
    ACTIONS(634), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6871] = 2,
    ACTIONS(636), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6879] = 2,
    ACTIONS(638), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6887] = 2,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6895] = 2,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6903] = 2,
    ACTIONS(644), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6911] = 2,
    ACTIONS(646), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6919] = 2,
    ACTIONS(648), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6927] = 2,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6935] = 2,
    ACTIONS(652), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6943] = 2,
    ACTIONS(654), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6951] = 2,
    ACTIONS(656), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6959] = 2,
    ACTIONS(658), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6967] = 2,
    ACTIONS(660), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6975] = 2,
    ACTIONS(662), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6983] = 2,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6991] = 2,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6999] = 2,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7007] = 2,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7015] = 2,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7023] = 2,
    ACTIONS(672), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7031] = 2,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7039] = 2,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7047] = 2,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7055] = 2,
    ACTIONS(680), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7063] = 2,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7071] = 2,
    ACTIONS(684), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7079] = 2,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7087] = 2,
    ACTIONS(688), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7095] = 2,
    ACTIONS(690), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7103] = 2,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7111] = 2,
    ACTIONS(694), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7119] = 2,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7127] = 2,
    ACTIONS(696), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7135] = 2,
    ACTIONS(700), 1,
      aux_sym__literal_string_token2,
    ACTIONS(698), 2,
      sym_comment,
      sym_marginalia,
  [7143] = 2,
    ACTIONS(702), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7151] = 2,
    ACTIONS(704), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7159] = 2,
    ACTIONS(706), 1,
      aux_sym__literal_string_token1,
    ACTIONS(698), 2,
      sym_comment,
      sym_marginalia,
  [7167] = 2,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7175] = 2,
    ACTIONS(710), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7183] = 2,
    ACTIONS(632), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7191] = 2,
    ACTIONS(712), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7199] = 2,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7207] = 2,
    ACTIONS(716), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7215] = 2,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7223] = 2,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7231] = 2,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7239] = 2,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7247] = 2,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7255] = 2,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7263] = 2,
    ACTIONS(726), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7271] = 2,
    ACTIONS(728), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7279] = 2,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7287] = 2,
    ACTIONS(732), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7295] = 2,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7303] = 2,
    ACTIONS(734), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7311] = 2,
    ACTIONS(736), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7319] = 2,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7327] = 2,
    ACTIONS(738), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7335] = 2,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7343] = 2,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7351] = 2,
    ACTIONS(744), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7359] = 2,
    ACTIONS(746), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7367] = 2,
    ACTIONS(748), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7375] = 2,
    ACTIONS(750), 1,
      aux_sym__literal_string_token1,
    ACTIONS(698), 2,
      sym_comment,
      sym_marginalia,
  [7383] = 2,
    ACTIONS(752), 1,
      aux_sym__literal_string_token2,
    ACTIONS(698), 2,
      sym_comment,
      sym_marginalia,
  [7391] = 2,
    ACTIONS(754), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7399] = 2,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7407] = 2,
    ACTIONS(567), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7415] = 2,
    ACTIONS(758), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7423] = 2,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7431] = 2,
    ACTIONS(762), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7439] = 2,
    ACTIONS(764), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7447] = 2,
    ACTIONS(766), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7455] = 2,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7463] = 2,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7471] = 2,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7479] = 2,
    ACTIONS(774), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7487] = 2,
    ACTIONS(776), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7495] = 2,
    ACTIONS(778), 1,
      sym_keyword_table,
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
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 333,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 400,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 502,
  [SMALL_STATE(17)] = 534,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 644,
  [SMALL_STATE(21)] = 676,
  [SMALL_STATE(22)] = 708,
  [SMALL_STATE(23)] = 756,
  [SMALL_STATE(24)] = 798,
  [SMALL_STATE(25)] = 830,
  [SMALL_STATE(26)] = 862,
  [SMALL_STATE(27)] = 917,
  [SMALL_STATE(28)] = 950,
  [SMALL_STATE(29)] = 983,
  [SMALL_STATE(30)] = 1038,
  [SMALL_STATE(31)] = 1093,
  [SMALL_STATE(32)] = 1129,
  [SMALL_STATE(33)] = 1182,
  [SMALL_STATE(34)] = 1213,
  [SMALL_STATE(35)] = 1266,
  [SMALL_STATE(36)] = 1313,
  [SMALL_STATE(37)] = 1341,
  [SMALL_STATE(38)] = 1371,
  [SMALL_STATE(39)] = 1399,
  [SMALL_STATE(40)] = 1427,
  [SMALL_STATE(41)] = 1465,
  [SMALL_STATE(42)] = 1507,
  [SMALL_STATE(43)] = 1547,
  [SMALL_STATE(44)] = 1577,
  [SMALL_STATE(45)] = 1605,
  [SMALL_STATE(46)] = 1639,
  [SMALL_STATE(47)] = 1667,
  [SMALL_STATE(48)] = 1701,
  [SMALL_STATE(49)] = 1730,
  [SMALL_STATE(50)] = 1763,
  [SMALL_STATE(51)] = 1796,
  [SMALL_STATE(52)] = 1829,
  [SMALL_STATE(53)] = 1873,
  [SMALL_STATE(54)] = 1914,
  [SMALL_STATE(55)] = 1961,
  [SMALL_STATE(56)] = 2001,
  [SMALL_STATE(57)] = 2041,
  [SMALL_STATE(58)] = 2079,
  [SMALL_STATE(59)] = 2117,
  [SMALL_STATE(60)] = 2159,
  [SMALL_STATE(61)] = 2201,
  [SMALL_STATE(62)] = 2240,
  [SMALL_STATE(63)] = 2277,
  [SMALL_STATE(64)] = 2316,
  [SMALL_STATE(65)] = 2349,
  [SMALL_STATE(66)] = 2386,
  [SMALL_STATE(67)] = 2423,
  [SMALL_STATE(68)] = 2462,
  [SMALL_STATE(69)] = 2501,
  [SMALL_STATE(70)] = 2538,
  [SMALL_STATE(71)] = 2577,
  [SMALL_STATE(72)] = 2614,
  [SMALL_STATE(73)] = 2651,
  [SMALL_STATE(74)] = 2688,
  [SMALL_STATE(75)] = 2725,
  [SMALL_STATE(76)] = 2762,
  [SMALL_STATE(77)] = 2799,
  [SMALL_STATE(78)] = 2836,
  [SMALL_STATE(79)] = 2873,
  [SMALL_STATE(80)] = 2895,
  [SMALL_STATE(81)] = 2935,
  [SMALL_STATE(82)] = 2965,
  [SMALL_STATE(83)] = 3005,
  [SMALL_STATE(84)] = 3027,
  [SMALL_STATE(85)] = 3067,
  [SMALL_STATE(86)] = 3098,
  [SMALL_STATE(87)] = 3139,
  [SMALL_STATE(88)] = 3170,
  [SMALL_STATE(89)] = 3205,
  [SMALL_STATE(90)] = 3232,
  [SMALL_STATE(91)] = 3259,
  [SMALL_STATE(92)] = 3276,
  [SMALL_STATE(93)] = 3293,
  [SMALL_STATE(94)] = 3320,
  [SMALL_STATE(95)] = 3337,
  [SMALL_STATE(96)] = 3354,
  [SMALL_STATE(97)] = 3381,
  [SMALL_STATE(98)] = 3408,
  [SMALL_STATE(99)] = 3428,
  [SMALL_STATE(100)] = 3456,
  [SMALL_STATE(101)] = 3472,
  [SMALL_STATE(102)] = 3496,
  [SMALL_STATE(103)] = 3512,
  [SMALL_STATE(104)] = 3538,
  [SMALL_STATE(105)] = 3556,
  [SMALL_STATE(106)] = 3574,
  [SMALL_STATE(107)] = 3598,
  [SMALL_STATE(108)] = 3622,
  [SMALL_STATE(109)] = 3640,
  [SMALL_STATE(110)] = 3665,
  [SMALL_STATE(111)] = 3690,
  [SMALL_STATE(112)] = 3717,
  [SMALL_STATE(113)] = 3742,
  [SMALL_STATE(114)] = 3769,
  [SMALL_STATE(115)] = 3794,
  [SMALL_STATE(116)] = 3819,
  [SMALL_STATE(117)] = 3846,
  [SMALL_STATE(118)] = 3873,
  [SMALL_STATE(119)] = 3898,
  [SMALL_STATE(120)] = 3915,
  [SMALL_STATE(121)] = 3932,
  [SMALL_STATE(122)] = 3947,
  [SMALL_STATE(123)] = 3962,
  [SMALL_STATE(124)] = 3991,
  [SMALL_STATE(125)] = 4018,
  [SMALL_STATE(126)] = 4045,
  [SMALL_STATE(127)] = 4060,
  [SMALL_STATE(128)] = 4084,
  [SMALL_STATE(129)] = 4106,
  [SMALL_STATE(130)] = 4120,
  [SMALL_STATE(131)] = 4134,
  [SMALL_STATE(132)] = 4148,
  [SMALL_STATE(133)] = 4170,
  [SMALL_STATE(134)] = 4196,
  [SMALL_STATE(135)] = 4212,
  [SMALL_STATE(136)] = 4230,
  [SMALL_STATE(137)] = 4246,
  [SMALL_STATE(138)] = 4260,
  [SMALL_STATE(139)] = 4282,
  [SMALL_STATE(140)] = 4304,
  [SMALL_STATE(141)] = 4322,
  [SMALL_STATE(142)] = 4344,
  [SMALL_STATE(143)] = 4368,
  [SMALL_STATE(144)] = 4386,
  [SMALL_STATE(145)] = 4412,
  [SMALL_STATE(146)] = 4434,
  [SMALL_STATE(147)] = 4460,
  [SMALL_STATE(148)] = 4482,
  [SMALL_STATE(149)] = 4496,
  [SMALL_STATE(150)] = 4518,
  [SMALL_STATE(151)] = 4532,
  [SMALL_STATE(152)] = 4546,
  [SMALL_STATE(153)] = 4572,
  [SMALL_STATE(154)] = 4591,
  [SMALL_STATE(155)] = 4604,
  [SMALL_STATE(156)] = 4625,
  [SMALL_STATE(157)] = 4642,
  [SMALL_STATE(158)] = 4663,
  [SMALL_STATE(159)] = 4684,
  [SMALL_STATE(160)] = 4705,
  [SMALL_STATE(161)] = 4726,
  [SMALL_STATE(162)] = 4747,
  [SMALL_STATE(163)] = 4766,
  [SMALL_STATE(164)] = 4789,
  [SMALL_STATE(165)] = 4806,
  [SMALL_STATE(166)] = 4823,
  [SMALL_STATE(167)] = 4836,
  [SMALL_STATE(168)] = 4853,
  [SMALL_STATE(169)] = 4874,
  [SMALL_STATE(170)] = 4886,
  [SMALL_STATE(171)] = 4900,
  [SMALL_STATE(172)] = 4920,
  [SMALL_STATE(173)] = 4936,
  [SMALL_STATE(174)] = 4956,
  [SMALL_STATE(175)] = 4974,
  [SMALL_STATE(176)] = 4994,
  [SMALL_STATE(177)] = 5012,
  [SMALL_STATE(178)] = 5028,
  [SMALL_STATE(179)] = 5048,
  [SMALL_STATE(180)] = 5064,
  [SMALL_STATE(181)] = 5080,
  [SMALL_STATE(182)] = 5096,
  [SMALL_STATE(183)] = 5116,
  [SMALL_STATE(184)] = 5132,
  [SMALL_STATE(185)] = 5148,
  [SMALL_STATE(186)] = 5166,
  [SMALL_STATE(187)] = 5178,
  [SMALL_STATE(188)] = 5198,
  [SMALL_STATE(189)] = 5218,
  [SMALL_STATE(190)] = 5233,
  [SMALL_STATE(191)] = 5248,
  [SMALL_STATE(192)] = 5265,
  [SMALL_STATE(193)] = 5280,
  [SMALL_STATE(194)] = 5295,
  [SMALL_STATE(195)] = 5312,
  [SMALL_STATE(196)] = 5325,
  [SMALL_STATE(197)] = 5342,
  [SMALL_STATE(198)] = 5359,
  [SMALL_STATE(199)] = 5376,
  [SMALL_STATE(200)] = 5389,
  [SMALL_STATE(201)] = 5400,
  [SMALL_STATE(202)] = 5417,
  [SMALL_STATE(203)] = 5428,
  [SMALL_STATE(204)] = 5439,
  [SMALL_STATE(205)] = 5454,
  [SMALL_STATE(206)] = 5471,
  [SMALL_STATE(207)] = 5486,
  [SMALL_STATE(208)] = 5501,
  [SMALL_STATE(209)] = 5518,
  [SMALL_STATE(210)] = 5531,
  [SMALL_STATE(211)] = 5544,
  [SMALL_STATE(212)] = 5559,
  [SMALL_STATE(213)] = 5576,
  [SMALL_STATE(214)] = 5593,
  [SMALL_STATE(215)] = 5610,
  [SMALL_STATE(216)] = 5627,
  [SMALL_STATE(217)] = 5640,
  [SMALL_STATE(218)] = 5657,
  [SMALL_STATE(219)] = 5672,
  [SMALL_STATE(220)] = 5687,
  [SMALL_STATE(221)] = 5700,
  [SMALL_STATE(222)] = 5713,
  [SMALL_STATE(223)] = 5727,
  [SMALL_STATE(224)] = 5741,
  [SMALL_STATE(225)] = 5755,
  [SMALL_STATE(226)] = 5769,
  [SMALL_STATE(227)] = 5783,
  [SMALL_STATE(228)] = 5793,
  [SMALL_STATE(229)] = 5807,
  [SMALL_STATE(230)] = 5817,
  [SMALL_STATE(231)] = 5831,
  [SMALL_STATE(232)] = 5845,
  [SMALL_STATE(233)] = 5859,
  [SMALL_STATE(234)] = 5869,
  [SMALL_STATE(235)] = 5883,
  [SMALL_STATE(236)] = 5897,
  [SMALL_STATE(237)] = 5911,
  [SMALL_STATE(238)] = 5925,
  [SMALL_STATE(239)] = 5939,
  [SMALL_STATE(240)] = 5953,
  [SMALL_STATE(241)] = 5967,
  [SMALL_STATE(242)] = 5981,
  [SMALL_STATE(243)] = 5995,
  [SMALL_STATE(244)] = 6009,
  [SMALL_STATE(245)] = 6023,
  [SMALL_STATE(246)] = 6037,
  [SMALL_STATE(247)] = 6051,
  [SMALL_STATE(248)] = 6065,
  [SMALL_STATE(249)] = 6079,
  [SMALL_STATE(250)] = 6093,
  [SMALL_STATE(251)] = 6107,
  [SMALL_STATE(252)] = 6121,
  [SMALL_STATE(253)] = 6135,
  [SMALL_STATE(254)] = 6149,
  [SMALL_STATE(255)] = 6159,
  [SMALL_STATE(256)] = 6173,
  [SMALL_STATE(257)] = 6187,
  [SMALL_STATE(258)] = 6201,
  [SMALL_STATE(259)] = 6215,
  [SMALL_STATE(260)] = 6229,
  [SMALL_STATE(261)] = 6243,
  [SMALL_STATE(262)] = 6257,
  [SMALL_STATE(263)] = 6271,
  [SMALL_STATE(264)] = 6285,
  [SMALL_STATE(265)] = 6299,
  [SMALL_STATE(266)] = 6313,
  [SMALL_STATE(267)] = 6327,
  [SMALL_STATE(268)] = 6341,
  [SMALL_STATE(269)] = 6355,
  [SMALL_STATE(270)] = 6369,
  [SMALL_STATE(271)] = 6383,
  [SMALL_STATE(272)] = 6397,
  [SMALL_STATE(273)] = 6411,
  [SMALL_STATE(274)] = 6425,
  [SMALL_STATE(275)] = 6439,
  [SMALL_STATE(276)] = 6453,
  [SMALL_STATE(277)] = 6467,
  [SMALL_STATE(278)] = 6476,
  [SMALL_STATE(279)] = 6487,
  [SMALL_STATE(280)] = 6498,
  [SMALL_STATE(281)] = 6507,
  [SMALL_STATE(282)] = 6516,
  [SMALL_STATE(283)] = 6525,
  [SMALL_STATE(284)] = 6534,
  [SMALL_STATE(285)] = 6543,
  [SMALL_STATE(286)] = 6552,
  [SMALL_STATE(287)] = 6563,
  [SMALL_STATE(288)] = 6572,
  [SMALL_STATE(289)] = 6581,
  [SMALL_STATE(290)] = 6590,
  [SMALL_STATE(291)] = 6599,
  [SMALL_STATE(292)] = 6608,
  [SMALL_STATE(293)] = 6617,
  [SMALL_STATE(294)] = 6626,
  [SMALL_STATE(295)] = 6635,
  [SMALL_STATE(296)] = 6646,
  [SMALL_STATE(297)] = 6655,
  [SMALL_STATE(298)] = 6664,
  [SMALL_STATE(299)] = 6673,
  [SMALL_STATE(300)] = 6682,
  [SMALL_STATE(301)] = 6693,
  [SMALL_STATE(302)] = 6704,
  [SMALL_STATE(303)] = 6713,
  [SMALL_STATE(304)] = 6722,
  [SMALL_STATE(305)] = 6731,
  [SMALL_STATE(306)] = 6740,
  [SMALL_STATE(307)] = 6749,
  [SMALL_STATE(308)] = 6758,
  [SMALL_STATE(309)] = 6769,
  [SMALL_STATE(310)] = 6778,
  [SMALL_STATE(311)] = 6787,
  [SMALL_STATE(312)] = 6796,
  [SMALL_STATE(313)] = 6807,
  [SMALL_STATE(314)] = 6816,
  [SMALL_STATE(315)] = 6827,
  [SMALL_STATE(316)] = 6836,
  [SMALL_STATE(317)] = 6847,
  [SMALL_STATE(318)] = 6855,
  [SMALL_STATE(319)] = 6863,
  [SMALL_STATE(320)] = 6871,
  [SMALL_STATE(321)] = 6879,
  [SMALL_STATE(322)] = 6887,
  [SMALL_STATE(323)] = 6895,
  [SMALL_STATE(324)] = 6903,
  [SMALL_STATE(325)] = 6911,
  [SMALL_STATE(326)] = 6919,
  [SMALL_STATE(327)] = 6927,
  [SMALL_STATE(328)] = 6935,
  [SMALL_STATE(329)] = 6943,
  [SMALL_STATE(330)] = 6951,
  [SMALL_STATE(331)] = 6959,
  [SMALL_STATE(332)] = 6967,
  [SMALL_STATE(333)] = 6975,
  [SMALL_STATE(334)] = 6983,
  [SMALL_STATE(335)] = 6991,
  [SMALL_STATE(336)] = 6999,
  [SMALL_STATE(337)] = 7007,
  [SMALL_STATE(338)] = 7015,
  [SMALL_STATE(339)] = 7023,
  [SMALL_STATE(340)] = 7031,
  [SMALL_STATE(341)] = 7039,
  [SMALL_STATE(342)] = 7047,
  [SMALL_STATE(343)] = 7055,
  [SMALL_STATE(344)] = 7063,
  [SMALL_STATE(345)] = 7071,
  [SMALL_STATE(346)] = 7079,
  [SMALL_STATE(347)] = 7087,
  [SMALL_STATE(348)] = 7095,
  [SMALL_STATE(349)] = 7103,
  [SMALL_STATE(350)] = 7111,
  [SMALL_STATE(351)] = 7119,
  [SMALL_STATE(352)] = 7127,
  [SMALL_STATE(353)] = 7135,
  [SMALL_STATE(354)] = 7143,
  [SMALL_STATE(355)] = 7151,
  [SMALL_STATE(356)] = 7159,
  [SMALL_STATE(357)] = 7167,
  [SMALL_STATE(358)] = 7175,
  [SMALL_STATE(359)] = 7183,
  [SMALL_STATE(360)] = 7191,
  [SMALL_STATE(361)] = 7199,
  [SMALL_STATE(362)] = 7207,
  [SMALL_STATE(363)] = 7215,
  [SMALL_STATE(364)] = 7223,
  [SMALL_STATE(365)] = 7231,
  [SMALL_STATE(366)] = 7239,
  [SMALL_STATE(367)] = 7247,
  [SMALL_STATE(368)] = 7255,
  [SMALL_STATE(369)] = 7263,
  [SMALL_STATE(370)] = 7271,
  [SMALL_STATE(371)] = 7279,
  [SMALL_STATE(372)] = 7287,
  [SMALL_STATE(373)] = 7295,
  [SMALL_STATE(374)] = 7303,
  [SMALL_STATE(375)] = 7311,
  [SMALL_STATE(376)] = 7319,
  [SMALL_STATE(377)] = 7327,
  [SMALL_STATE(378)] = 7335,
  [SMALL_STATE(379)] = 7343,
  [SMALL_STATE(380)] = 7351,
  [SMALL_STATE(381)] = 7359,
  [SMALL_STATE(382)] = 7367,
  [SMALL_STATE(383)] = 7375,
  [SMALL_STATE(384)] = 7383,
  [SMALL_STATE(385)] = 7391,
  [SMALL_STATE(386)] = 7399,
  [SMALL_STATE(387)] = 7407,
  [SMALL_STATE(388)] = 7415,
  [SMALL_STATE(389)] = 7423,
  [SMALL_STATE(390)] = 7431,
  [SMALL_STATE(391)] = 7439,
  [SMALL_STATE(392)] = 7447,
  [SMALL_STATE(393)] = 7455,
  [SMALL_STATE(394)] = 7463,
  [SMALL_STATE(395)] = 7471,
  [SMALL_STATE(396)] = 7479,
  [SMALL_STATE(397)] = 7487,
  [SMALL_STATE(398)] = 7495,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 14),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 14),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 3, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 16),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 4, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 5, .production_id = 23),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 8),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 4, .production_id = 18),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(201),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 15),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 11),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 11),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 25),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 16),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 27),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 27),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 27),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 24),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 19),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(87),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(199),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(352),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 20),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(68),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(85),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 16),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(70),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 22),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 22),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(173),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(194),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 12),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 12), SHIFT_REPEAT(52),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(191),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(212),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(198),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(123),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 10),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 26),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 26),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 16),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 21),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 17),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 17),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 17),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [772] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
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
