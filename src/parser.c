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
#define STATE_COUNT 384
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 1
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 25

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
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 4},
  [19] = {.index = 34, .length = 1},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 4},
  [22] = {.index = 41, .length = 1},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 1},
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
    {field_index_name, 3},
  [24] =
    {field_name, 0},
    {field_type, 1},
  [26] =
    {field_name, 1, .inherited = true},
  [27] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2},
  [30] =
    {field_alias, 5},
    {field_name, 0},
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [34] =
    {field_name, 0, .inherited = true},
  [35] =
    {field_name, 0},
    {field_value, 2},
  [37] =
    {field_alias, 6},
    {field_name, 0},
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [41] =
    {field_index_name, 5},
  [42] =
    {field_name, 1},
  [43] =
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
  [24] = {
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
          lookahead == ' ') SKIP(396)
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
          lookahead == ' ') SKIP(397)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == 'D') ADVANCE(545);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 25:
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
          lookahead == ' ') SKIP(399)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(22);
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
          lookahead == ' ') SKIP(401)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
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
    case 397:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (lookahead == '-') ADVANCE(22);
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
    case 398:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
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
    case 399:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 6},
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
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
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
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 6},
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
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 26},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 28},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
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
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 24},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 24},
  [192] = {.lex_state = 24},
  [193] = {.lex_state = 24},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 24},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 24},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 8},
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
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 8},
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
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
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
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 522},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 513},
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
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 513},
  [369] = {.lex_state = 522},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 8},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
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
    [sym_program] = STATE(380),
    [sym_statement] = STATE(379),
    [sym__select_statement] = STATE(374),
    [sym_select] = STATE(223),
    [sym__delete_statement] = STATE(374),
    [sym_delete] = STATE(283),
    [sym__create_statement] = STATE(374),
    [sym_create] = STATE(361),
    [sym__insert_statement] = STATE(374),
    [sym_insert] = STATE(355),
    [sym__update_statement] = STATE(374),
    [sym_update] = STATE(350),
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
  [197] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 20,
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
  [230] = 4,
    ACTIONS(33), 1,
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
  [298] = 9,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
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
  [342] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 18,
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
  [374] = 3,
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
  [406] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(57), 5,
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
  [438] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 19,
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
  [470] = 3,
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
  [502] = 6,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
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
  [540] = 4,
    ACTIONS(53), 1,
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
  [574] = 3,
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
  [606] = 11,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(43), 1,
      sym_keyword_or,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 4,
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
  [654] = 8,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
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
  [696] = 3,
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
  [728] = 3,
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
  [760] = 3,
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
  [825] = 15,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(237), 1,
      sym_function_call,
    STATE(378), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(47), 3,
      sym_field,
      sym_predicate,
      sym_literal,
    STATE(54), 3,
      sym__expression,
      sym_subquery,
      sym_list,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [880] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 7,
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
  [913] = 15,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(242), 1,
      sym_function_call,
    STATE(378), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(49), 3,
      sym_field,
      sym_predicate,
      sym_literal,
    STATE(54), 3,
      sym__expression,
      sym_subquery,
      sym_list,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [968] = 15,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(254), 1,
      sym_function_call,
    STATE(378), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(48), 3,
      sym_field,
      sym_predicate,
      sym_literal,
    STATE(54), 3,
      sym__expression,
      sym_subquery,
      sym_list,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1023] = 6,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 4,
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
  [1059] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(83), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 5,
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
  [1090] = 15,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(226), 1,
      sym_order_expression,
    STATE(382), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(117), 2,
      sym_field,
      sym_function_call,
    STATE(143), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1143] = 15,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_STAR,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(216), 1,
      sym_select_expression,
    STATE(333), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(168), 2,
      sym_field,
      sym_function_call,
    STATE(217), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1196] = 12,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_CARET,
    ACTIONS(115), 1,
      sym_keyword_and,
    ACTIONS(117), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1243] = 6,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
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
  [1277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
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
  [1305] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(65), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 15,
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
  [1333] = 3,
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
  [1361] = 10,
    ACTIONS(121), 1,
      sym_keyword_in,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 6,
      sym_keyword_where,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1403] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 4,
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
  [1433] = 3,
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
  [1461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(57), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 15,
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
  [1489] = 9,
    ACTIONS(121), 1,
      sym_keyword_in,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 10,
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
  [1529] = 8,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 11,
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
  [1567] = 4,
    ACTIONS(133), 1,
      anon_sym_CARET,
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
  [1597] = 6,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 12,
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
  [1631] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 3,
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
  [1660] = 6,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
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
  [1693] = 6,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
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
  [1726] = 6,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
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
  [1759] = 12,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(378), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(267), 3,
      sym_field,
      sym_function_call,
      sym_literal,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1803] = 14,
    ACTIONS(147), 1,
      sym_keyword_join,
    ACTIONS(149), 1,
      sym_keyword_where,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(153), 1,
      sym_keyword_group_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(78), 1,
      sym_index_hint,
    STATE(114), 1,
      sym_where,
    STATE(144), 1,
      sym_group_by,
    STATE(207), 1,
      sym_order_by,
    STATE(292), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 2,
      sym_keyword_force,
      sym_keyword_use,
    ACTIONS(159), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(76), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1850] = 11,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(121), 1,
      sym_keyword_in,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1891] = 11,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(11), 1,
      sym__literal_string,
    STATE(167), 1,
      sym_where_expression,
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
  [1931] = 10,
    ACTIONS(121), 1,
      sym_keyword_in,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1969] = 11,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(167), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(52), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2009] = 10,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(45), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(67), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2047] = 12,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(29), 1,
      sym_predicate,
    STATE(130), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2089] = 12,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(34), 1,
      sym_predicate,
    STATE(215), 1,
      sym_assignment_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(54), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2131] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(11), 1,
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
  [2168] = 11,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(30), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2207] = 11,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(46), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(54), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2246] = 11,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(39), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2285] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(11), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(20), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2322] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(11), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(19), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2359] = 10,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
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
  [2396] = 11,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(24), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2435] = 10,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
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
  [2472] = 11,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
    STATE(26), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 5,
      sym_field,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2511] = 10,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
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
  [2548] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(11), 1,
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
  [2585] = 10,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
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
  [2622] = 10,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
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
  [2659] = 10,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(7), 1,
      sym__literal_string,
    STATE(8), 1,
      sym_identifier,
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
  [2696] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(11), 1,
      sym__literal_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(16), 6,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_subquery,
      sym_list,
      sym_literal,
  [2733] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(11), 1,
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
  [2770] = 12,
    ACTIONS(147), 1,
      sym_keyword_join,
    ACTIONS(149), 1,
      sym_keyword_where,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(153), 1,
      sym_keyword_group_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(112), 1,
      sym_where,
    STATE(148), 1,
      sym_group_by,
    STATE(204), 1,
      sym_order_by,
    STATE(300), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(98), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2810] = 7,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(183), 1,
      sym_keyword_as,
    ACTIONS(185), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(181), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(179), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [2840] = 12,
    ACTIONS(147), 1,
      sym_keyword_join,
    ACTIONS(149), 1,
      sym_keyword_where,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(153), 1,
      sym_keyword_group_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(112), 1,
      sym_where,
    STATE(148), 1,
      sym_group_by,
    STATE(204), 1,
      sym_order_by,
    STATE(300), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(79), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2880] = 12,
    ACTIONS(147), 1,
      sym_keyword_join,
    ACTIONS(149), 1,
      sym_keyword_where,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(153), 1,
      sym_keyword_group_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(113), 1,
      sym_where,
    STATE(149), 1,
      sym_group_by,
    STATE(203), 1,
      sym_order_by,
    STATE(291), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(98), 2,
      sym_join,
      aux_sym_from_repeat1,
  [2920] = 13,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(189), 1,
      sym_keyword_primary,
    ACTIONS(191), 1,
      sym_keyword_key,
    ACTIONS(193), 1,
      sym_keyword_constraint,
    STATE(100), 1,
      sym_identifier,
    STATE(222), 1,
      sym_constraint,
    STATE(263), 1,
      sym__primary_key,
    STATE(294), 1,
      sym__key_constraint,
    STATE(296), 1,
      sym__primary_key_constraint,
    STATE(298), 1,
      sym__constraint_literal,
    STATE(299), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2961] = 10,
    ACTIONS(197), 1,
      sym_keyword_primary,
    ACTIONS(199), 1,
      sym_keyword_not,
    ACTIONS(201), 1,
      sym_keyword_auto_increment,
    ACTIONS(203), 1,
      sym_keyword_default,
    STATE(176), 1,
      sym__primary_key,
    STATE(284), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(205), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(104), 2,
      sym__not_null,
      sym__default_null,
  [2996] = 6,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      sym__identifier,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(209), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(207), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [3023] = 8,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(382), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(120), 2,
      sym_field,
      sym_function_call,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3054] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [3075] = 8,
    ACTIONS(87), 1,
      sym_keyword_if,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(333), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(120), 2,
      sym_field,
      sym_function_call,
    ACTIONS(85), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [3106] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [3127] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_keyword_as,
    STATE(138), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(215), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3154] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(217), 10,
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
  [3171] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_keyword_as,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(219), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(223), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3198] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(225), 10,
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
  [3215] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(227), 1,
      sym_keyword_as,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(211), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(215), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3242] = 3,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3260] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(235), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3284] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3300] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(233), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(235), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3324] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 3,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
    ACTIONS(241), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3348] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(243), 9,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3364] = 4,
    ACTIONS(245), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(98), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(248), 6,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3384] = 3,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(250), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3402] = 7,
    ACTIONS(254), 1,
      sym_keyword_bigint,
    ACTIONS(256), 1,
      sym_keyword_date,
    ACTIONS(258), 1,
      sym_keyword_datetime,
    ACTIONS(260), 1,
      sym_keyword_char,
    ACTIONS(262), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(81), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [3428] = 3,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(264), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(268), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3461] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(270), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3476] = 7,
    ACTIONS(197), 1,
      sym_keyword_primary,
    ACTIONS(272), 1,
      sym_keyword_auto_increment,
    STATE(166), 1,
      sym__primary_key,
    STATE(266), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(274), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3501] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_from,
    ACTIONS(276), 1,
      sym_keyword_as,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3526] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym_keyword_from,
    ACTIONS(278), 1,
      sym_keyword_as,
    STATE(138), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3551] = 2,
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
  [3566] = 7,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      sym__identifier,
    ACTIONS(282), 1,
      sym_keyword_as,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(181), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [3591] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(219), 1,
      sym_keyword_from,
    ACTIONS(284), 1,
      sym_keyword_as,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3616] = 8,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(286), 1,
      sym_keyword_default,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(359), 1,
      sym_table_options,
    STATE(362), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(128), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [3643] = 8,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(286), 1,
      sym_keyword_default,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(358), 1,
      sym_table_options,
    STATE(362), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(128), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [3670] = 8,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(153), 1,
      sym_keyword_group_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(149), 1,
      sym_group_by,
    STATE(203), 1,
      sym_order_by,
    STATE(291), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3697] = 8,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(153), 1,
      sym_keyword_group_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(153), 1,
      sym_group_by,
    STATE(184), 1,
      sym_order_by,
    STATE(274), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3724] = 8,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(153), 1,
      sym_keyword_group_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(148), 1,
      sym_group_by,
    STATE(204), 1,
      sym_order_by,
    STATE(300), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3751] = 9,
    ACTIONS(197), 1,
      sym_keyword_primary,
    ACTIONS(294), 1,
      sym_keyword_key,
    ACTIONS(296), 1,
      sym_keyword_constraint,
    STATE(263), 1,
      sym__primary_key,
    STATE(275), 1,
      sym_constraint,
    STATE(294), 1,
      sym__key_constraint,
    STATE(296), 1,
      sym__primary_key_constraint,
    STATE(298), 1,
      sym__constraint_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3780] = 8,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(177), 1,
      sym_identifier,
    STATE(240), 1,
      sym_table_reference,
    STATE(322), 1,
      sym__table_references,
    STATE(324), 1,
      sym_update_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(323), 2,
      sym__single_table_update,
      sym__multi_table_update,
  [3807] = 4,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(298), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3825] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(236), 1,
      sym_select,
    STATE(247), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3851] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(302), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3865] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3879] = 6,
    ACTIONS(197), 1,
      sym_keyword_primary,
    STATE(173), 1,
      sym__primary_key,
    STATE(278), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(306), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3901] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(308), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3915] = 8,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(244), 1,
      sym_select,
    STATE(252), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3941] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(308), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3955] = 4,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(310), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3973] = 8,
    ACTIONS(149), 1,
      sym_keyword_where,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_where,
    STATE(234), 1,
      sym_order_by,
    STATE(342), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3999] = 7,
    ACTIONS(314), 1,
      sym_keyword_default,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_BQUOTE,
    ACTIONS(322), 1,
      sym__identifier,
    STATE(362), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(127), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [4023] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(286), 1,
      sym_keyword_default,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    STATE(362), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(127), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [4047] = 4,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4065] = 8,
    ACTIONS(149), 1,
      sym_keyword_where,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      sym_where,
    STATE(220), 1,
      sym_order_by,
    STATE(316), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4091] = 6,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      sym__identifier,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(207), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(209), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [4113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 4,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [4129] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(233), 1,
      sym_keyword_from,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4151] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(332), 1,
      sym_keyword_as,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [4173] = 2,
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
  [4187] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 4,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_as,
      sym__identifier,
  [4203] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(233), 1,
      sym_keyword_from,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4225] = 2,
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
  [4239] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_keyword_from,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4261] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(336), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4275] = 6,
    ACTIONS(197), 1,
      sym_keyword_primary,
    STATE(166), 1,
      sym__primary_key,
    STATE(266), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(274), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4297] = 4,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [4314] = 4,
    STATE(232), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(341), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4331] = 6,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(204), 1,
      sym_order_by,
    STATE(300), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4352] = 4,
    ACTIONS(345), 1,
      sym_keyword_having,
    STATE(199), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(343), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4369] = 3,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 5,
      sym_keyword_on,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [4384] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(207), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [4403] = 6,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(203), 1,
      sym_order_by,
    STATE(291), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4424] = 6,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(184), 1,
      sym_order_by,
    STATE(274), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4445] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(347), 1,
      sym_keyword_as,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4466] = 7,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(349), 1,
      sym_keyword_if,
    STATE(177), 1,
      sym_identifier,
    STATE(201), 1,
      sym__if_not_exists,
    STATE(295), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4489] = 3,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 5,
      sym_keyword_on,
      sym_keyword_as,
      sym_keyword_force,
      sym_keyword_use,
      sym__identifier,
  [4504] = 6,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(188), 1,
      sym_order_by,
    STATE(269), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4525] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(353), 1,
      sym_keyword_as,
    STATE(138), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4546] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(355), 1,
      sym_keyword_as,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(215), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4567] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(357), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4580] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(359), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4593] = 4,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 4,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [4610] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4628] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4646] = 4,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(304), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4662] = 4,
    STATE(285), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(366), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4678] = 6,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(293), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4698] = 6,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(209), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4718] = 4,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(310), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4734] = 4,
    STATE(278), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(306), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4750] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(370), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4762] = 4,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(298), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4778] = 6,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(247), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4798] = 6,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      sym_order_by,
    STATE(349), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4818] = 6,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__number,
    STATE(7), 1,
      sym__literal_string,
    STATE(276), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4838] = 6,
    ACTIONS(151), 1,
      sym_keyword_order_by,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(227), 1,
      sym_order_by,
    STATE(372), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4858] = 4,
    STATE(286), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4874] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4892] = 6,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(177), 1,
      sym_identifier,
    STATE(224), 1,
      sym_table_reference,
    STATE(304), 1,
      sym_insert_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4912] = 4,
    STATE(266), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(274), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4928] = 3,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(378), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [4942] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(382), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4954] = 4,
    ACTIONS(384), 1,
      sym_keyword_from,
    STATE(330), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 2,
      sym_keyword_force,
      sym_keyword_use,
  [4969] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(386), 4,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4980] = 5,
    ACTIONS(388), 1,
      anon_sym_BQUOTE,
    ACTIONS(390), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
    STATE(126), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4997] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(198), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5014] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(287), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5031] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(269), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5046] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(213), 1,
      sym__column_without_order,
    STATE(264), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5063] = 5,
    ACTIONS(392), 1,
      anon_sym_BQUOTE,
    ACTIONS(394), 1,
      sym__identifier,
    STATE(51), 1,
      sym_table_expression,
    STATE(77), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5080] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(264), 1,
      sym_identifier,
    STATE(279), 1,
      sym__column_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5097] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(280), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(396), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5112] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(398), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(400), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5125] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(248), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(19), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(21), 2,
      sym_keyword_default,
      sym__identifier,
  [5155] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(402), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(404), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5168] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__identifier,
  [5181] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(406), 4,
      sym_keyword_values,
      sym_keyword_set,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [5192] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(177), 1,
      sym_identifier,
    STATE(289), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5209] = 5,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_column_definitions_repeat1,
    STATE(335), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5226] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(361), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [5241] = 5,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_column_definitions_repeat1,
    STATE(356), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5258] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(414), 4,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5269] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(416), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(418), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5282] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(177), 1,
      sym_identifier,
    STATE(273), 1,
      sym_table_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5299] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(420), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(422), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5312] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(274), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5327] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(291), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5342] = 4,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_assignment_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(107), 2,
      sym_keyword_where,
      anon_sym_SEMI,
  [5357] = 5,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(299), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5374] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    STATE(300), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5389] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(427), 2,
      sym_keyword_default,
      sym__identifier,
    ACTIONS(429), 2,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
  [5402] = 4,
    ACTIONS(431), 1,
      sym_keyword_offset,
    STATE(290), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5417] = 5,
    ACTIONS(435), 1,
      anon_sym_BQUOTE,
    ACTIONS(437), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(211), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5434] = 4,
    ACTIONS(439), 1,
      sym_keyword_on,
    STATE(341), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(157), 2,
      sym_keyword_force,
      sym_keyword_use,
  [5449] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5463] = 4,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5477] = 4,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5491] = 4,
    ACTIONS(447), 1,
      sym_keyword_where,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    STATE(364), 1,
      sym_where,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5505] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(451), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5515] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(453), 3,
      sym_keyword_from,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5525] = 4,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(270), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5539] = 4,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(268), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5553] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    STATE(349), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5567] = 4,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5581] = 4,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5595] = 4,
    ACTIONS(459), 1,
      sym_keyword_from,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5609] = 4,
    ACTIONS(463), 1,
      sym_keyword_values,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym__column_list_without_order,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5623] = 4,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5637] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(467), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5647] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5661] = 4,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5675] = 4,
    ACTIONS(476), 1,
      sym_keyword_set,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5689] = 4,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(194), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5703] = 4,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5717] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(485), 3,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5727] = 4,
    ACTIONS(487), 1,
      sym_keyword_set,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5741] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(372), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5755] = 4,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5769] = 4,
    ACTIONS(459), 1,
      sym_keyword_from,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5783] = 4,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5797] = 4,
    ACTIONS(155), 1,
      sym_keyword_limit,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    STATE(325), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5811] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5825] = 4,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      sym_keyword_set,
    STATE(229), 1,
      aux_sym__table_references_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5839] = 4,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5853] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5867] = 4,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym__column_list_without_order_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5881] = 4,
    ACTIONS(459), 1,
      sym_keyword_from,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5895] = 4,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5909] = 4,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5923] = 4,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5937] = 4,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5951] = 4,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5965] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5979] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [5993] = 4,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6007] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6021] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6035] = 4,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6049] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6063] = 4,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6077] = 4,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(354), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6091] = 4,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6105] = 4,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      sym__identifier,
    STATE(339), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6119] = 4,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6133] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(554), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6142] = 3,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6153] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(558), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6162] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(560), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [6171] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(306), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6180] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(562), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6189] = 3,
    ACTIONS(197), 1,
      sym_keyword_primary,
    STATE(272), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6200] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(396), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6209] = 3,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(271), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6220] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(564), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6229] = 3,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(281), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6240] = 3,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6251] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(351), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6260] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(568), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6278] = 3,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(363), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6289] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6298] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(572), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6307] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(574), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6316] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(576), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6325] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(578), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6334] = 3,
    ACTIONS(580), 1,
      sym_keyword_from,
    STATE(313), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6345] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(274), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6354] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(582), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6363] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(584), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6372] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(480), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6381] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(586), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6390] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(487), 2,
      sym_keyword_set,
      anon_sym_COMMA,
  [6399] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(588), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6408] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(292), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6417] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6426] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(545), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6435] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(590), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6444] = 3,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6455] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(592), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6464] = 3,
    ACTIONS(594), 1,
      sym_keyword_for,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6475] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(590), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6484] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(471), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6493] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6502] = 3,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6513] = 2,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6521] = 2,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6529] = 2,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6537] = 2,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6545] = 2,
    ACTIONS(606), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6553] = 2,
    ACTIONS(608), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6561] = 2,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6569] = 2,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6577] = 2,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6585] = 2,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6593] = 2,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6601] = 2,
    ACTIONS(618), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6609] = 2,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6617] = 2,
    ACTIONS(622), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6625] = 2,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6633] = 2,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6641] = 2,
    ACTIONS(626), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6649] = 2,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6657] = 2,
    ACTIONS(630), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6665] = 2,
    ACTIONS(632), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6673] = 2,
    ACTIONS(634), 1,
      sym_keyword_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6681] = 2,
    ACTIONS(636), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6689] = 2,
    ACTIONS(638), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6697] = 2,
    ACTIONS(640), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6705] = 2,
    ACTIONS(642), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6713] = 2,
    ACTIONS(644), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6721] = 2,
    ACTIONS(646), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6729] = 2,
    ACTIONS(648), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6737] = 2,
    ACTIONS(650), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6745] = 2,
    ACTIONS(652), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6753] = 2,
    ACTIONS(654), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6761] = 2,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6769] = 2,
    ACTIONS(658), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6777] = 2,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6785] = 2,
    ACTIONS(662), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6793] = 2,
    ACTIONS(664), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6801] = 2,
    ACTIONS(668), 1,
      aux_sym__literal_string_token2,
    ACTIONS(666), 2,
      sym_comment,
      sym_marginalia,
  [6809] = 2,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6817] = 2,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6825] = 2,
    ACTIONS(674), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6833] = 2,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6841] = 2,
    ACTIONS(676), 1,
      aux_sym__literal_string_token1,
    ACTIONS(666), 2,
      sym_comment,
      sym_marginalia,
  [6849] = 2,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6857] = 2,
    ACTIONS(680), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6865] = 2,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6873] = 2,
    ACTIONS(682), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6881] = 2,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6889] = 2,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6897] = 2,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6905] = 2,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6913] = 2,
    ACTIONS(690), 1,
      sym_keyword_values,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6921] = 2,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6929] = 2,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6937] = 2,
    ACTIONS(696), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6945] = 2,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6953] = 2,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6961] = 2,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6969] = 2,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6977] = 2,
    ACTIONS(702), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6985] = 2,
    ACTIONS(704), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [6993] = 2,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7001] = 2,
    ACTIONS(708), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7009] = 2,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7017] = 2,
    ACTIONS(712), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7025] = 2,
    ACTIONS(714), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7033] = 2,
    ACTIONS(716), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7041] = 2,
    ACTIONS(718), 1,
      aux_sym__literal_string_token1,
    ACTIONS(666), 2,
      sym_comment,
      sym_marginalia,
  [7049] = 2,
    ACTIONS(720), 1,
      aux_sym__literal_string_token2,
    ACTIONS(666), 2,
      sym_comment,
      sym_marginalia,
  [7057] = 2,
    ACTIONS(722), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7065] = 2,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7073] = 2,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7081] = 2,
    ACTIONS(726), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7089] = 2,
    ACTIONS(728), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7097] = 2,
    ACTIONS(730), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7105] = 2,
    ACTIONS(732), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7113] = 2,
    ACTIONS(734), 1,
      sym__identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7121] = 2,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7129] = 2,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7137] = 2,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7145] = 2,
    ACTIONS(742), 1,
      sym_keyword_into,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7153] = 2,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [7161] = 2,
    ACTIONS(746), 1,
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
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 438,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 502,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 574,
  [SMALL_STATE(19)] = 606,
  [SMALL_STATE(20)] = 654,
  [SMALL_STATE(21)] = 696,
  [SMALL_STATE(22)] = 728,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 825,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 913,
  [SMALL_STATE(28)] = 968,
  [SMALL_STATE(29)] = 1023,
  [SMALL_STATE(30)] = 1059,
  [SMALL_STATE(31)] = 1090,
  [SMALL_STATE(32)] = 1143,
  [SMALL_STATE(33)] = 1196,
  [SMALL_STATE(34)] = 1243,
  [SMALL_STATE(35)] = 1277,
  [SMALL_STATE(36)] = 1305,
  [SMALL_STATE(37)] = 1333,
  [SMALL_STATE(38)] = 1361,
  [SMALL_STATE(39)] = 1403,
  [SMALL_STATE(40)] = 1433,
  [SMALL_STATE(41)] = 1461,
  [SMALL_STATE(42)] = 1489,
  [SMALL_STATE(43)] = 1529,
  [SMALL_STATE(44)] = 1567,
  [SMALL_STATE(45)] = 1597,
  [SMALL_STATE(46)] = 1631,
  [SMALL_STATE(47)] = 1660,
  [SMALL_STATE(48)] = 1693,
  [SMALL_STATE(49)] = 1726,
  [SMALL_STATE(50)] = 1759,
  [SMALL_STATE(51)] = 1803,
  [SMALL_STATE(52)] = 1850,
  [SMALL_STATE(53)] = 1891,
  [SMALL_STATE(54)] = 1931,
  [SMALL_STATE(55)] = 1969,
  [SMALL_STATE(56)] = 2009,
  [SMALL_STATE(57)] = 2047,
  [SMALL_STATE(58)] = 2089,
  [SMALL_STATE(59)] = 2131,
  [SMALL_STATE(60)] = 2168,
  [SMALL_STATE(61)] = 2207,
  [SMALL_STATE(62)] = 2246,
  [SMALL_STATE(63)] = 2285,
  [SMALL_STATE(64)] = 2322,
  [SMALL_STATE(65)] = 2359,
  [SMALL_STATE(66)] = 2396,
  [SMALL_STATE(67)] = 2435,
  [SMALL_STATE(68)] = 2472,
  [SMALL_STATE(69)] = 2511,
  [SMALL_STATE(70)] = 2548,
  [SMALL_STATE(71)] = 2585,
  [SMALL_STATE(72)] = 2622,
  [SMALL_STATE(73)] = 2659,
  [SMALL_STATE(74)] = 2696,
  [SMALL_STATE(75)] = 2733,
  [SMALL_STATE(76)] = 2770,
  [SMALL_STATE(77)] = 2810,
  [SMALL_STATE(78)] = 2840,
  [SMALL_STATE(79)] = 2880,
  [SMALL_STATE(80)] = 2920,
  [SMALL_STATE(81)] = 2961,
  [SMALL_STATE(82)] = 2996,
  [SMALL_STATE(83)] = 3023,
  [SMALL_STATE(84)] = 3054,
  [SMALL_STATE(85)] = 3075,
  [SMALL_STATE(86)] = 3106,
  [SMALL_STATE(87)] = 3127,
  [SMALL_STATE(88)] = 3154,
  [SMALL_STATE(89)] = 3171,
  [SMALL_STATE(90)] = 3198,
  [SMALL_STATE(91)] = 3215,
  [SMALL_STATE(92)] = 3242,
  [SMALL_STATE(93)] = 3260,
  [SMALL_STATE(94)] = 3284,
  [SMALL_STATE(95)] = 3300,
  [SMALL_STATE(96)] = 3324,
  [SMALL_STATE(97)] = 3348,
  [SMALL_STATE(98)] = 3364,
  [SMALL_STATE(99)] = 3384,
  [SMALL_STATE(100)] = 3402,
  [SMALL_STATE(101)] = 3428,
  [SMALL_STATE(102)] = 3446,
  [SMALL_STATE(103)] = 3461,
  [SMALL_STATE(104)] = 3476,
  [SMALL_STATE(105)] = 3501,
  [SMALL_STATE(106)] = 3526,
  [SMALL_STATE(107)] = 3551,
  [SMALL_STATE(108)] = 3566,
  [SMALL_STATE(109)] = 3591,
  [SMALL_STATE(110)] = 3616,
  [SMALL_STATE(111)] = 3643,
  [SMALL_STATE(112)] = 3670,
  [SMALL_STATE(113)] = 3697,
  [SMALL_STATE(114)] = 3724,
  [SMALL_STATE(115)] = 3751,
  [SMALL_STATE(116)] = 3780,
  [SMALL_STATE(117)] = 3807,
  [SMALL_STATE(118)] = 3825,
  [SMALL_STATE(119)] = 3851,
  [SMALL_STATE(120)] = 3865,
  [SMALL_STATE(121)] = 3879,
  [SMALL_STATE(122)] = 3901,
  [SMALL_STATE(123)] = 3915,
  [SMALL_STATE(124)] = 3941,
  [SMALL_STATE(125)] = 3955,
  [SMALL_STATE(126)] = 3973,
  [SMALL_STATE(127)] = 3999,
  [SMALL_STATE(128)] = 4023,
  [SMALL_STATE(129)] = 4047,
  [SMALL_STATE(130)] = 4065,
  [SMALL_STATE(131)] = 4091,
  [SMALL_STATE(132)] = 4113,
  [SMALL_STATE(133)] = 4129,
  [SMALL_STATE(134)] = 4151,
  [SMALL_STATE(135)] = 4173,
  [SMALL_STATE(136)] = 4187,
  [SMALL_STATE(137)] = 4203,
  [SMALL_STATE(138)] = 4225,
  [SMALL_STATE(139)] = 4239,
  [SMALL_STATE(140)] = 4261,
  [SMALL_STATE(141)] = 4275,
  [SMALL_STATE(142)] = 4297,
  [SMALL_STATE(143)] = 4314,
  [SMALL_STATE(144)] = 4331,
  [SMALL_STATE(145)] = 4352,
  [SMALL_STATE(146)] = 4369,
  [SMALL_STATE(147)] = 4384,
  [SMALL_STATE(148)] = 4403,
  [SMALL_STATE(149)] = 4424,
  [SMALL_STATE(150)] = 4445,
  [SMALL_STATE(151)] = 4466,
  [SMALL_STATE(152)] = 4489,
  [SMALL_STATE(153)] = 4504,
  [SMALL_STATE(154)] = 4525,
  [SMALL_STATE(155)] = 4546,
  [SMALL_STATE(156)] = 4567,
  [SMALL_STATE(157)] = 4580,
  [SMALL_STATE(158)] = 4593,
  [SMALL_STATE(159)] = 4610,
  [SMALL_STATE(160)] = 4628,
  [SMALL_STATE(161)] = 4646,
  [SMALL_STATE(162)] = 4662,
  [SMALL_STATE(163)] = 4678,
  [SMALL_STATE(164)] = 4698,
  [SMALL_STATE(165)] = 4718,
  [SMALL_STATE(166)] = 4734,
  [SMALL_STATE(167)] = 4750,
  [SMALL_STATE(168)] = 4762,
  [SMALL_STATE(169)] = 4778,
  [SMALL_STATE(170)] = 4798,
  [SMALL_STATE(171)] = 4818,
  [SMALL_STATE(172)] = 4838,
  [SMALL_STATE(173)] = 4858,
  [SMALL_STATE(174)] = 4874,
  [SMALL_STATE(175)] = 4892,
  [SMALL_STATE(176)] = 4912,
  [SMALL_STATE(177)] = 4928,
  [SMALL_STATE(178)] = 4942,
  [SMALL_STATE(179)] = 4954,
  [SMALL_STATE(180)] = 4969,
  [SMALL_STATE(181)] = 4980,
  [SMALL_STATE(182)] = 4997,
  [SMALL_STATE(183)] = 5014,
  [SMALL_STATE(184)] = 5031,
  [SMALL_STATE(185)] = 5046,
  [SMALL_STATE(186)] = 5063,
  [SMALL_STATE(187)] = 5080,
  [SMALL_STATE(188)] = 5097,
  [SMALL_STATE(189)] = 5112,
  [SMALL_STATE(190)] = 5125,
  [SMALL_STATE(191)] = 5142,
  [SMALL_STATE(192)] = 5155,
  [SMALL_STATE(193)] = 5168,
  [SMALL_STATE(194)] = 5181,
  [SMALL_STATE(195)] = 5192,
  [SMALL_STATE(196)] = 5209,
  [SMALL_STATE(197)] = 5226,
  [SMALL_STATE(198)] = 5241,
  [SMALL_STATE(199)] = 5258,
  [SMALL_STATE(200)] = 5269,
  [SMALL_STATE(201)] = 5282,
  [SMALL_STATE(202)] = 5299,
  [SMALL_STATE(203)] = 5312,
  [SMALL_STATE(204)] = 5327,
  [SMALL_STATE(205)] = 5342,
  [SMALL_STATE(206)] = 5357,
  [SMALL_STATE(207)] = 5374,
  [SMALL_STATE(208)] = 5389,
  [SMALL_STATE(209)] = 5402,
  [SMALL_STATE(210)] = 5417,
  [SMALL_STATE(211)] = 5434,
  [SMALL_STATE(212)] = 5449,
  [SMALL_STATE(213)] = 5463,
  [SMALL_STATE(214)] = 5477,
  [SMALL_STATE(215)] = 5491,
  [SMALL_STATE(216)] = 5505,
  [SMALL_STATE(217)] = 5515,
  [SMALL_STATE(218)] = 5525,
  [SMALL_STATE(219)] = 5539,
  [SMALL_STATE(220)] = 5553,
  [SMALL_STATE(221)] = 5567,
  [SMALL_STATE(222)] = 5581,
  [SMALL_STATE(223)] = 5595,
  [SMALL_STATE(224)] = 5609,
  [SMALL_STATE(225)] = 5623,
  [SMALL_STATE(226)] = 5637,
  [SMALL_STATE(227)] = 5647,
  [SMALL_STATE(228)] = 5661,
  [SMALL_STATE(229)] = 5675,
  [SMALL_STATE(230)] = 5689,
  [SMALL_STATE(231)] = 5703,
  [SMALL_STATE(232)] = 5717,
  [SMALL_STATE(233)] = 5727,
  [SMALL_STATE(234)] = 5741,
  [SMALL_STATE(235)] = 5755,
  [SMALL_STATE(236)] = 5769,
  [SMALL_STATE(237)] = 5783,
  [SMALL_STATE(238)] = 5797,
  [SMALL_STATE(239)] = 5811,
  [SMALL_STATE(240)] = 5825,
  [SMALL_STATE(241)] = 5839,
  [SMALL_STATE(242)] = 5853,
  [SMALL_STATE(243)] = 5867,
  [SMALL_STATE(244)] = 5881,
  [SMALL_STATE(245)] = 5895,
  [SMALL_STATE(246)] = 5909,
  [SMALL_STATE(247)] = 5923,
  [SMALL_STATE(248)] = 5937,
  [SMALL_STATE(249)] = 5951,
  [SMALL_STATE(250)] = 5965,
  [SMALL_STATE(251)] = 5979,
  [SMALL_STATE(252)] = 5993,
  [SMALL_STATE(253)] = 6007,
  [SMALL_STATE(254)] = 6021,
  [SMALL_STATE(255)] = 6035,
  [SMALL_STATE(256)] = 6049,
  [SMALL_STATE(257)] = 6063,
  [SMALL_STATE(258)] = 6077,
  [SMALL_STATE(259)] = 6091,
  [SMALL_STATE(260)] = 6105,
  [SMALL_STATE(261)] = 6119,
  [SMALL_STATE(262)] = 6133,
  [SMALL_STATE(263)] = 6142,
  [SMALL_STATE(264)] = 6153,
  [SMALL_STATE(265)] = 6162,
  [SMALL_STATE(266)] = 6171,
  [SMALL_STATE(267)] = 6180,
  [SMALL_STATE(268)] = 6189,
  [SMALL_STATE(269)] = 6200,
  [SMALL_STATE(270)] = 6209,
  [SMALL_STATE(271)] = 6220,
  [SMALL_STATE(272)] = 6229,
  [SMALL_STATE(273)] = 6240,
  [SMALL_STATE(274)] = 6251,
  [SMALL_STATE(275)] = 6260,
  [SMALL_STATE(276)] = 6269,
  [SMALL_STATE(277)] = 6278,
  [SMALL_STATE(278)] = 6289,
  [SMALL_STATE(279)] = 6298,
  [SMALL_STATE(280)] = 6307,
  [SMALL_STATE(281)] = 6316,
  [SMALL_STATE(282)] = 6325,
  [SMALL_STATE(283)] = 6334,
  [SMALL_STATE(284)] = 6345,
  [SMALL_STATE(285)] = 6354,
  [SMALL_STATE(286)] = 6363,
  [SMALL_STATE(287)] = 6372,
  [SMALL_STATE(288)] = 6381,
  [SMALL_STATE(289)] = 6390,
  [SMALL_STATE(290)] = 6399,
  [SMALL_STATE(291)] = 6408,
  [SMALL_STATE(292)] = 6417,
  [SMALL_STATE(293)] = 6426,
  [SMALL_STATE(294)] = 6435,
  [SMALL_STATE(295)] = 6444,
  [SMALL_STATE(296)] = 6455,
  [SMALL_STATE(297)] = 6464,
  [SMALL_STATE(298)] = 6475,
  [SMALL_STATE(299)] = 6484,
  [SMALL_STATE(300)] = 6493,
  [SMALL_STATE(301)] = 6502,
  [SMALL_STATE(302)] = 6513,
  [SMALL_STATE(303)] = 6521,
  [SMALL_STATE(304)] = 6529,
  [SMALL_STATE(305)] = 6537,
  [SMALL_STATE(306)] = 6545,
  [SMALL_STATE(307)] = 6553,
  [SMALL_STATE(308)] = 6561,
  [SMALL_STATE(309)] = 6569,
  [SMALL_STATE(310)] = 6577,
  [SMALL_STATE(311)] = 6585,
  [SMALL_STATE(312)] = 6593,
  [SMALL_STATE(313)] = 6601,
  [SMALL_STATE(314)] = 6609,
  [SMALL_STATE(315)] = 6617,
  [SMALL_STATE(316)] = 6625,
  [SMALL_STATE(317)] = 6633,
  [SMALL_STATE(318)] = 6641,
  [SMALL_STATE(319)] = 6649,
  [SMALL_STATE(320)] = 6657,
  [SMALL_STATE(321)] = 6665,
  [SMALL_STATE(322)] = 6673,
  [SMALL_STATE(323)] = 6681,
  [SMALL_STATE(324)] = 6689,
  [SMALL_STATE(325)] = 6697,
  [SMALL_STATE(326)] = 6705,
  [SMALL_STATE(327)] = 6713,
  [SMALL_STATE(328)] = 6721,
  [SMALL_STATE(329)] = 6729,
  [SMALL_STATE(330)] = 6737,
  [SMALL_STATE(331)] = 6745,
  [SMALL_STATE(332)] = 6753,
  [SMALL_STATE(333)] = 6761,
  [SMALL_STATE(334)] = 6769,
  [SMALL_STATE(335)] = 6777,
  [SMALL_STATE(336)] = 6785,
  [SMALL_STATE(337)] = 6793,
  [SMALL_STATE(338)] = 6801,
  [SMALL_STATE(339)] = 6809,
  [SMALL_STATE(340)] = 6817,
  [SMALL_STATE(341)] = 6825,
  [SMALL_STATE(342)] = 6833,
  [SMALL_STATE(343)] = 6841,
  [SMALL_STATE(344)] = 6849,
  [SMALL_STATE(345)] = 6857,
  [SMALL_STATE(346)] = 6865,
  [SMALL_STATE(347)] = 6873,
  [SMALL_STATE(348)] = 6881,
  [SMALL_STATE(349)] = 6889,
  [SMALL_STATE(350)] = 6897,
  [SMALL_STATE(351)] = 6905,
  [SMALL_STATE(352)] = 6913,
  [SMALL_STATE(353)] = 6921,
  [SMALL_STATE(354)] = 6929,
  [SMALL_STATE(355)] = 6937,
  [SMALL_STATE(356)] = 6945,
  [SMALL_STATE(357)] = 6953,
  [SMALL_STATE(358)] = 6961,
  [SMALL_STATE(359)] = 6969,
  [SMALL_STATE(360)] = 6977,
  [SMALL_STATE(361)] = 6985,
  [SMALL_STATE(362)] = 6993,
  [SMALL_STATE(363)] = 7001,
  [SMALL_STATE(364)] = 7009,
  [SMALL_STATE(365)] = 7017,
  [SMALL_STATE(366)] = 7025,
  [SMALL_STATE(367)] = 7033,
  [SMALL_STATE(368)] = 7041,
  [SMALL_STATE(369)] = 7049,
  [SMALL_STATE(370)] = 7057,
  [SMALL_STATE(371)] = 7065,
  [SMALL_STATE(372)] = 7073,
  [SMALL_STATE(373)] = 7081,
  [SMALL_STATE(374)] = 7089,
  [SMALL_STATE(375)] = 7097,
  [SMALL_STATE(376)] = 7105,
  [SMALL_STATE(377)] = 7113,
  [SMALL_STATE(378)] = 7121,
  [SMALL_STATE(379)] = 7129,
  [SMALL_STATE(380)] = 7137,
  [SMALL_STATE(381)] = 7145,
  [SMALL_STATE(382)] = 7153,
  [SMALL_STATE(383)] = 7161,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 15),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3, .production_id = 8),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 11),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 11),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 22),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 14),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(210),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 24),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 24),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 15),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 24),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 15),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 21),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(200),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(337),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(83),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 18),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(60),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(85),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 15),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 20),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 20),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_list_repeat1, 2), SHIFT_REPEAT(61),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(206),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_references, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(183),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__table_references_repeat1, 2), SHIFT_REPEAT(195),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 5),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2), SHIFT_REPEAT(187),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(115),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 12),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 12), SHIFT_REPEAT(50),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(163),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_without_order, 1, .production_id = 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 10),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 23),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__column_list_without_order_repeat1, 2, .production_id = 16),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 23),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 15),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 19),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_statement, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insert_statement, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_table_update, 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 4, .production_id = 16),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_list_without_order, 3, .production_id = 16),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_expression, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_table_update, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [740] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
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
