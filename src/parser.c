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
#define STATE_COUNT 247
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_keyword_select = 1,
  sym_keyword_delete = 2,
  sym_keyword_create = 3,
  sym_keyword_from = 4,
  sym_keyword_join = 5,
  sym_keyword_on = 6,
  sym_keyword_where = 7,
  sym_keyword_order_by = 8,
  sym_keyword_group_by = 9,
  sym_keyword_having = 10,
  sym_keyword_desc = 11,
  sym_keyword_asc = 12,
  sym_keyword_limit = 13,
  sym_keyword_offset = 14,
  sym_keyword_primary = 15,
  sym_keyword_table = 16,
  sym_keyword_key = 17,
  sym_keyword_distinct = 18,
  sym_keyword_constraint = 19,
  sym_keyword_count = 20,
  sym_keyword_max = 21,
  sym_keyword_min = 22,
  sym_keyword_avg = 23,
  sym_keyword_in = 24,
  sym_keyword_and = 25,
  sym_keyword_or = 26,
  sym_keyword_not = 27,
  sym_keyword_force = 28,
  sym_keyword_use = 29,
  sym_keyword_index = 30,
  sym_keyword_for = 31,
  sym_keyword_if = 32,
  sym_keyword_exists = 33,
  sym_keyword_auto_increment = 34,
  sym_keyword_default = 35,
  sym_keyword_bigint = 36,
  sym_keyword_null = 37,
  sym_keyword_date = 38,
  sym_keyword_datetime = 39,
  sym_keyword_char = 40,
  sym_keyword_varchar = 41,
  sym_comment = 42,
  sym_marginalia = 43,
  anon_sym_SEMI = 44,
  anon_sym_EQ = 45,
  anon_sym_LPAREN = 46,
  anon_sym_COMMA = 47,
  anon_sym_RPAREN = 48,
  anon_sym_DOT = 49,
  anon_sym_STAR = 50,
  anon_sym_PLUS = 51,
  anon_sym_DASH = 52,
  anon_sym_SLASH = 53,
  anon_sym_PERCENT = 54,
  anon_sym_CARET = 55,
  anon_sym_LT = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_GT = 60,
  sym__literal_string = 61,
  sym__string = 62,
  anon_sym_BQUOTE = 63,
  sym__number = 64,
  sym_program = 65,
  sym__not_null = 66,
  sym__primary_key = 67,
  sym__if_not_exists = 68,
  sym__default_null = 69,
  sym_direction = 70,
  sym_statement = 71,
  sym__select_statement = 72,
  sym_select = 73,
  sym_select_expression = 74,
  sym__delete_statement = 75,
  sym_delete = 76,
  sym__delete_from = 77,
  sym__create_statement = 78,
  sym_create = 79,
  sym_table_options = 80,
  sym_table_option = 81,
  sym_column_definitions = 82,
  sym_column_definition = 83,
  sym_constraints = 84,
  sym_constraint = 85,
  sym__constraint_literal = 86,
  sym__primary_key_constraint = 87,
  sym__key_constraint = 88,
  sym_column_list = 89,
  sym_column = 90,
  sym__type = 91,
  sym_bigint = 92,
  sym_char = 93,
  sym_varchar = 94,
  sym__create_table_expression = 95,
  sym__field_list = 96,
  sym_field = 97,
  sym_function_call = 98,
  sym__function_name = 99,
  sym_from = 100,
  sym_table_expression = 101,
  sym_index_hint = 102,
  sym_join = 103,
  sym_where = 104,
  sym_group_by = 105,
  sym__having = 106,
  sym_order_by = 107,
  sym_order_expression = 108,
  sym_limit = 109,
  sym_offset = 110,
  sym_where_expression = 111,
  sym_predicate = 112,
  sym__expression = 113,
  sym_list = 114,
  sym_literal = 115,
  sym_identifier = 116,
  sym__escaped_string = 117,
  aux_sym_table_options_repeat1 = 118,
  aux_sym_column_definitions_repeat1 = 119,
  aux_sym_constraints_repeat1 = 120,
  aux_sym_column_list_repeat1 = 121,
  aux_sym__field_list_repeat1 = 122,
  aux_sym_from_repeat1 = 123,
  aux_sym_list_repeat1 = 124,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_delete] = "keyword_delete",
  [sym_keyword_create] = "keyword_create",
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
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym__literal_string] = "_literal_string",
  [sym__string] = "_string",
  [anon_sym_BQUOTE] = "`",
  [sym__number] = "_number",
  [sym_program] = "program",
  [sym__not_null] = "_not_null",
  [sym__primary_key] = "_primary_key",
  [sym__if_not_exists] = "_if_not_exists",
  [sym__default_null] = "_default_null",
  [sym_direction] = "direction",
  [sym_statement] = "statement",
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
  [sym_identifier] = "identifier",
  [sym__escaped_string] = "_escaped_string",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym__literal_string] = sym__literal_string,
  [sym__string] = sym__string,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__number] = sym__number,
  [sym_program] = sym_program,
  [sym__not_null] = sym__not_null,
  [sym__primary_key] = sym__primary_key,
  [sym__if_not_exists] = sym__if_not_exists,
  [sym__default_null] = sym__default_null,
  [sym_direction] = sym_direction,
  [sym_statement] = sym_statement,
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
  [sym_identifier] = sym_identifier,
  [sym__escaped_string] = sym__escaped_string,
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
  [anon_sym_EQ] = {
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
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__number] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__escaped_string] = {
    .visible = false,
    .named = true,
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

static const TSFieldMapSlice ts_field_map_slices[17] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 0, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 1},
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
    {field_index_name, 3},
  [14] =
    {field_name, 0},
    {field_type, 1},
  [16] =
    {field_name, 0, .inherited = true},
  [17] =
    {field_name, 0},
    {field_value, 2},
  [19] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [22] =
    {field_index_name, 5},
  [23] =
    {field_name, 1},
  [24] =
    {field_size, 2},
};

static TSSymbol ts_alias_sequences[17][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = sym_identifier,
  },
  [16] = {
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
      if (eof) ADVANCE(336);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(411);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(408);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == 'G') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'K') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(139);
      if (lookahead == 'V') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(72);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'g') ADVANCE(280);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'j') ADVANCE(270);
      if (lookahead == 'k') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(223);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(411);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(408);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'G') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(139);
      if (lookahead == 'V') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(72);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'g') ADVANCE(280);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'j') ADVANCE(270);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(411);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(408);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(126);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(485);
      if (lookahead == 'C') ADVANCE(458);
      if (lookahead == 'D') ADVANCE(441);
      if (lookahead == 'M') ADVANCE(423);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(400);
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
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == 'D') ADVANCE(434);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(470);
      if (lookahead == 'J') ADVANCE(462);
      if (lookahead == 'L') ADVANCE(443);
      if (lookahead == 'O') ADVANCE(464);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == 'W') ADVANCE(440);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(536);
      if (lookahead == 'j') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead == 'w') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == 'L') ADVANCE(443);
      if (lookahead == 'O') ADVANCE(464);
      if (lookahead == 'W') ADVANCE(440);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == 'w') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == 'K') ADVANCE(430);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == 'k') ADVANCE(496);
      if (lookahead == 'p') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'O') ADVANCE(454);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(415);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(159);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(170);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(351);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(350);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(149);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(151);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(135);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(373);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(380);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(394);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(378);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(345);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'N') ADVANCE(372);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(375);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(143);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(370);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(349);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'H') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'H') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'H') ADVANCE(31);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(393);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(150);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(340);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'M') ADVANCE(64);
      END_STATE();
    case 97:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(155);
      if (lookahead == 'V') ADVANCE(69);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(372);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(375);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(368);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(341);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(161);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(171);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(384);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(397);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(398);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(374);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(383);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(168);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(388);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(158);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(157);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(377);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(364);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(352);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(392);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(354);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(337);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(390);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(362);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(389);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 161:
      if (lookahead == 'U') ADVANCE(122);
      END_STATE();
    case 162:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 163:
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 164:
      if (lookahead == 'X') ADVANCE(366);
      END_STATE();
    case 165:
      if (lookahead == 'X') ADVANCE(382);
      END_STATE();
    case 166:
      if (lookahead == 'X') ADVANCE(86);
      END_STATE();
    case 167:
      if (lookahead == 'Y') ADVANCE(358);
      END_STATE();
    case 168:
      if (lookahead == 'Y') ADVANCE(355);
      END_STATE();
    case 169:
      if (lookahead == 'Y') ADVANCE(348);
      END_STATE();
    case 170:
      if (lookahead == 'Y') ADVANCE(347);
      END_STATE();
    case 171:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 172:
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(320);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(321);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(294);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(370);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(340);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 273:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 314:
      if (lookahead == 'v') ADVANCE(232);
      END_STATE();
    case 315:
      if (lookahead == 'x') ADVANCE(366);
      END_STATE();
    case 316:
      if (lookahead == 'x') ADVANCE(382);
      END_STATE();
    case 317:
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 318:
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 319:
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 320:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 321:
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 322:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(411);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(408);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'G') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(139);
      if (lookahead == 'V') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(72);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'g') ADVANCE(280);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'j') ADVANCE(270);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(223);
      END_STATE();
    case 324:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(485);
      if (lookahead == 'C') ADVANCE(458);
      if (lookahead == 'D') ADVANCE(441);
      if (lookahead == 'M') ADVANCE(423);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 325:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(411);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(408);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(126);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 326:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == 'K') ADVANCE(430);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == 'k') ADVANCE(496);
      if (lookahead == 'p') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 327:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(470);
      if (lookahead == 'J') ADVANCE(462);
      if (lookahead == 'L') ADVANCE(443);
      if (lookahead == 'O') ADVANCE(464);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == 'W') ADVANCE(440);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(536);
      if (lookahead == 'j') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead == 'w') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 328:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 329:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == 'D') ADVANCE(434);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'd') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 330:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == 'L') ADVANCE(443);
      if (lookahead == 'O') ADVANCE(464);
      if (lookahead == 'W') ADVANCE(440);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == 'w') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 331:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'O') ADVANCE(454);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == 'u') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 332:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 333:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 334:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 335:
      if (eof) ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(411);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(408);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == ';') ADVANCE(401);
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == 'G') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'K') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(139);
      if (lookahead == 'V') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(72);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'g') ADVANCE(280);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'j') ADVANCE(270);
      if (lookahead == 'k') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(223);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_keyword_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_keyword_primary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_keyword_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_keyword_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_keyword_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(60);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_keyword_force);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_keyword_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_keyword_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_keyword_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__literal_string);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(486);
      if (lookahead == 'I') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'F') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'F') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'G') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'L') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'P') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'V') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'X') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'Y') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'Y') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'c') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'd') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'f') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'f') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'g') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'h') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'i') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'l') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'm') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'n') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'o') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'p') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'r') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 's') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 't') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'u') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'v') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'x') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'y') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'y') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
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
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 7},
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
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 9},
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
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 9},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_delete] = ACTIONS(1),
    [sym_keyword_create] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym__literal_string] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(232),
    [sym_statement] = STATE(229),
    [sym__select_statement] = STATE(228),
    [sym_select] = STATE(141),
    [sym__delete_statement] = STATE(228),
    [sym_delete] = STATE(161),
    [sym__create_statement] = STATE(228),
    [sym_create] = STATE(225),
    [sym_keyword_select] = ACTIONS(5),
    [sym_keyword_delete] = ACTIONS(7),
    [sym_keyword_create] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_marginalia] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 6,
      sym_keyword_or,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 32,
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
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [47] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 6,
      sym_keyword_or,
      sym_keyword_date,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 32,
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
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [94] = 3,
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
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [130] = 4,
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
    ACTIONS(23), 21,
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
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [168] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(21), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 19,
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
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [205] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 21,
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
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [240] = 4,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 15,
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
  [272] = 6,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(35), 4,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 13,
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
  [308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(35), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 16,
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
  [338] = 9,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      sym_keyword_in,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(35), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 11,
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
  [380] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 16,
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
  [410] = 11,
    ACTIONS(35), 1,
      sym_keyword_or,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      sym_keyword_in,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(33), 7,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_and,
      anon_sym_SEMI,
  [456] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(59), 10,
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
  [488] = 8,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(35), 3,
      sym_keyword_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 12,
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
  [528] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(61), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(59), 10,
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
  [560] = 3,
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
  [590] = 12,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      sym_keyword_in,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      sym_keyword_and,
    ACTIONS(73), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(69), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [636] = 13,
    ACTIONS(77), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    STATE(172), 1,
      sym_order_expression,
    STATE(221), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(81), 2,
      sym_field,
      sym_function_call,
    STATE(101), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [683] = 13,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(87), 1,
      anon_sym_STAR,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    STATE(162), 1,
      sym_select_expression,
    STATE(221), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(81), 2,
      sym_field,
      sym_function_call,
    STATE(163), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [730] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(89), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(61), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 10,
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
  [759] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 12,
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
  [784] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 12,
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
  [809] = 4,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(25), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 11,
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
  [836] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 11,
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
  [863] = 10,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      sym_keyword_in,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(53), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [901] = 3,
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
  [925] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(31), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 11,
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
  [949] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 11,
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
  [973] = 14,
    ACTIONS(93), 1,
      sym_keyword_join,
    ACTIONS(95), 1,
      sym_keyword_where,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(99), 1,
      sym_keyword_group_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_index_hint,
    STATE(73), 1,
      sym_where,
    STATE(107), 1,
      sym_group_by,
    STATE(145), 1,
      sym_order_by,
    STATE(212), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym_keyword_force,
      sym_keyword_use,
    STATE(39), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(21), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 11,
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
  [1043] = 13,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(107), 1,
      sym_keyword_primary,
    ACTIONS(109), 1,
      sym_keyword_key,
    ACTIONS(111), 1,
      sym_keyword_constraint,
    ACTIONS(113), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(61), 1,
      sym_identifier,
    STATE(138), 1,
      sym_constraint,
    STATE(184), 1,
      sym__primary_key,
    STATE(186), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(178), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [1086] = 9,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    STATE(221), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(189), 2,
      sym_field,
      sym_function_call,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1120] = 9,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    STATE(221), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(90), 2,
      sym_field,
      sym_function_call,
    ACTIONS(75), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1154] = 8,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(117), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(115), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [1186] = 10,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    STATE(127), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(18), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1222] = 9,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(9), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1255] = 12,
    ACTIONS(93), 1,
      sym_keyword_join,
    ACTIONS(95), 1,
      sym_keyword_where,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(99), 1,
      sym_keyword_group_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_where,
    STATE(124), 1,
      sym_group_by,
    STATE(154), 1,
      sym_order_by,
    STATE(201), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(64), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1294] = 12,
    ACTIONS(93), 1,
      sym_keyword_join,
    ACTIONS(95), 1,
      sym_keyword_where,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(99), 1,
      sym_keyword_group_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_where,
    STATE(105), 1,
      sym_group_by,
    STATE(151), 1,
      sym_order_by,
    STATE(242), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(64), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1333] = 9,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(10), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1366] = 10,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      sym__literal_string,
    ACTIONS(129), 1,
      sym__string,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__number,
    STATE(21), 1,
      sym_predicate,
    STATE(23), 1,
      sym__escaped_string,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1401] = 9,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(11), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1434] = 12,
    ACTIONS(93), 1,
      sym_keyword_join,
    ACTIONS(95), 1,
      sym_keyword_where,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(99), 1,
      sym_keyword_group_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_where,
    STATE(105), 1,
      sym_group_by,
    STATE(151), 1,
      sym_order_by,
    STATE(242), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(38), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1473] = 9,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(13), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1506] = 9,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(8), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1539] = 10,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      sym__literal_string,
    ACTIONS(129), 1,
      sym__string,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__number,
    STATE(16), 1,
      sym_predicate,
    STATE(23), 1,
      sym__escaped_string,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1574] = 10,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      sym__literal_string,
    ACTIONS(129), 1,
      sym__string,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym__number,
    STATE(14), 1,
      sym_predicate,
    STATE(23), 1,
      sym__escaped_string,
    STATE(24), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1609] = 9,
    ACTIONS(79), 1,
      sym__literal_string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(113), 1,
      sym__string,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__escaped_string,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(15), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1642] = 10,
    ACTIONS(137), 1,
      sym_keyword_primary,
    ACTIONS(139), 1,
      sym_keyword_not,
    ACTIONS(141), 1,
      sym_keyword_auto_increment,
    ACTIONS(143), 1,
      sym_keyword_default,
    STATE(106), 1,
      sym__primary_key,
    STATE(164), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(71), 2,
      sym__not_null,
      sym__default_null,
  [1677] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
    ACTIONS(17), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [1697] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 5,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
    ACTIONS(13), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [1717] = 10,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    ACTIONS(147), 1,
      sym_keyword_default,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      sym__escaped_string,
    STATE(209), 1,
      sym_table_options,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [1750] = 10,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    ACTIONS(147), 1,
      sym_keyword_default,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      sym__escaped_string,
    STATE(219), 1,
      sym_identifier,
    STATE(235), 1,
      sym_table_options,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(56), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [1783] = 3,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(153), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1801] = 8,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(117), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [1829] = 9,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    ACTIONS(147), 1,
      sym_keyword_default,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      sym__escaped_string,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [1859] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 9,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      anon_sym_SEMI,
  [1875] = 9,
    ACTIONS(161), 1,
      sym_keyword_default,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      sym__string,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(172), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 2,
      sym_table_option,
      aux_sym_table_options_repeat1,
  [1905] = 3,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(175), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1923] = 3,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(179), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1941] = 7,
    ACTIONS(183), 1,
      sym_keyword_bigint,
    ACTIONS(185), 1,
      sym_keyword_date,
    ACTIONS(187), 1,
      sym_keyword_datetime,
    ACTIONS(189), 1,
      sym_keyword_char,
    ACTIONS(191), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(49), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [1967] = 7,
    ACTIONS(137), 1,
      sym_keyword_primary,
    ACTIONS(193), 1,
      sym_keyword_key,
    ACTIONS(195), 1,
      sym_keyword_constraint,
    STATE(179), 1,
      sym_constraint,
    STATE(184), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(178), 3,
      sym__constraint_literal,
      sym__primary_key_constraint,
      sym__key_constraint,
  [1992] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(197), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2007] = 4,
    ACTIONS(199), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(64), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(202), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2026] = 7,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    STATE(3), 1,
      sym__escaped_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(115), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [2051] = 9,
    ACTIONS(81), 1,
      sym__string,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__number,
    ACTIONS(204), 1,
      sym_keyword_if,
    STATE(3), 1,
      sym__escaped_string,
    STATE(92), 1,
      sym__if_not_exists,
    STATE(160), 1,
      sym_identifier,
    STATE(182), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2080] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(206), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2095] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(208), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2110] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(210), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2125] = 2,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2140] = 7,
    ACTIONS(137), 1,
      sym_keyword_primary,
    ACTIONS(214), 1,
      sym_keyword_auto_increment,
    STATE(97), 1,
      sym__primary_key,
    STATE(185), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2165] = 6,
    ACTIONS(137), 1,
      sym_keyword_primary,
    STATE(123), 1,
      sym__primary_key,
    STATE(176), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2187] = 8,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(99), 1,
      sym_keyword_group_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_group_by,
    STATE(151), 1,
      sym_order_by,
    STATE(242), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2213] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
    ACTIONS(11), 4,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2229] = 6,
    ACTIONS(137), 1,
      sym_keyword_primary,
    STATE(97), 1,
      sym__primary_key,
    STATE(185), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2251] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
    ACTIONS(15), 4,
      sym_keyword_order_by,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2267] = 8,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(99), 1,
      sym_keyword_group_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_group_by,
    STATE(155), 1,
      sym_order_by,
    STATE(210), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2293] = 8,
    ACTIONS(95), 1,
      sym_keyword_where,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_where,
    STATE(157), 1,
      sym_order_by,
    STATE(213), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2319] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(224), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2333] = 8,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(99), 1,
      sym_keyword_group_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_group_by,
    STATE(154), 1,
      sym_order_by,
    STATE(201), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2359] = 4,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(82), 1,
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
  [2377] = 4,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(230), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2395] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(232), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2413] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(237), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2426] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      anon_sym_BQUOTE,
      sym__number,
    ACTIONS(13), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [2441] = 6,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(121), 1,
      sym_identifier,
    STATE(167), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2462] = 6,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
    STATE(55), 1,
      sym_identifier,
    STATE(76), 1,
      sym__escaped_string,
    STATE(78), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(239), 2,
      sym__string,
      sym__number,
  [2483] = 6,
    ACTIONS(245), 1,
      anon_sym_BQUOTE,
    STATE(30), 1,
      sym_table_expression,
    STATE(35), 1,
      sym_identifier,
    STATE(50), 1,
      sym__escaped_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(243), 2,
      sym__string,
      sym__number,
  [2504] = 6,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(61), 1,
      sym_identifier,
    STATE(186), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2525] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(232), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2538] = 6,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(121), 1,
      sym_identifier,
    STATE(134), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2559] = 6,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(160), 1,
      sym_identifier,
    STATE(171), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2580] = 6,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(61), 1,
      sym_identifier,
    STATE(128), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2601] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(247), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_auto_increment,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2614] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(15), 2,
      anon_sym_BQUOTE,
      sym__number,
    ACTIONS(17), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [2629] = 6,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    STATE(65), 1,
      sym_identifier,
    STATE(95), 1,
      sym__escaped_string,
    STATE(125), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(249), 2,
      sym__string,
      sym__number,
  [2650] = 4,
    STATE(176), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2666] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2684] = 6,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_order_by,
    STATE(193), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2704] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(227), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2722] = 4,
    STATE(165), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(255), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2738] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(257), 2,
      sym_keyword_default,
      sym__string,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2752] = 4,
    ACTIONS(263), 1,
      sym_keyword_having,
    STATE(144), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(261), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2768] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(103), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2786] = 6,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      sym_order_by,
    STATE(201), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2806] = 4,
    STATE(185), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2822] = 6,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_order_by,
    STATE(242), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(265), 5,
      sym_keyword_desc,
      sym_keyword_asc,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2854] = 6,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(146), 1,
      sym_order_by,
    STATE(236), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2874] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(197), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 2,
      sym_keyword_default,
      sym__string,
    ACTIONS(11), 3,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2906] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(269), 2,
      sym_keyword_default,
      sym__string,
    ACTIONS(271), 3,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 2,
      sym_keyword_default,
      sym__string,
    ACTIONS(15), 3,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2934] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(222), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [2952] = 5,
    ACTIONS(275), 1,
      anon_sym_BQUOTE,
    STATE(102), 1,
      sym_identifier,
    STATE(113), 1,
      sym__escaped_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(273), 2,
      sym__string,
      sym__number,
  [2970] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(277), 2,
      sym_keyword_default,
      sym__string,
    ACTIONS(279), 3,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2984] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(281), 2,
      sym_keyword_default,
      sym__string,
    ACTIONS(283), 3,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [2998] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [3016] = 5,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      sym__escaped_string,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(129), 2,
      sym__string,
      sym__number,
  [3034] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym__escaped_string,
    STATE(159), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(113), 2,
      sym__string,
      sym__number,
  [3052] = 4,
    STATE(169), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(287), 2,
      sym_keyword_default,
      sym__string,
    ACTIONS(289), 3,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym__number,
  [3082] = 4,
    STATE(168), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(135), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3098] = 6,
    ACTIONS(97), 1,
      sym_keyword_order_by,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      sym_order_by,
    STATE(210), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3118] = 4,
    ACTIONS(293), 1,
      sym_keyword_on,
    STATE(230), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym_keyword_force,
      sym_keyword_use,
  [3133] = 4,
    ACTIONS(295), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 2,
      sym_keyword_force,
      sym_keyword_use,
  [3148] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(297), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3159] = 5,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_column_definitions_repeat1,
    STATE(231), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3176] = 5,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_column_definitions_repeat1,
    STATE(203), 1,
      sym_constraints,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3193] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(305), 4,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3204] = 4,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_column_definitions_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3218] = 4,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3232] = 4,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3246] = 4,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3260] = 4,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3274] = 4,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3288] = 4,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3302] = 4,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3316] = 4,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3330] = 4,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3344] = 4,
    ACTIONS(342), 1,
      sym_keyword_from,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(188), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3358] = 3,
    STATE(211), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      sym__literal_string,
      sym__number,
  [3370] = 3,
    STATE(140), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      sym__literal_string,
      sym__number,
  [3382] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(346), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3392] = 4,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3406] = 4,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3420] = 4,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3434] = 3,
    STATE(152), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      sym__literal_string,
      sym__number,
  [3446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(355), 3,
      sym__string,
      anon_sym_BQUOTE,
      sym__number,
  [3456] = 4,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3470] = 4,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3484] = 4,
    ACTIONS(359), 1,
      sym_keyword_offset,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3498] = 3,
    STATE(132), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      sym__literal_string,
      sym__number,
  [3510] = 4,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    STATE(210), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3524] = 4,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3538] = 3,
    STATE(183), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(79), 2,
      sym__literal_string,
      sym__number,
  [3550] = 4,
    ACTIONS(101), 1,
      sym_keyword_limit,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3564] = 4,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3578] = 3,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3589] = 3,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3600] = 3,
    ACTIONS(371), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3611] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(373), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3620] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(375), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3629] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3638] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(377), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3647] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3656] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3665] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3683] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3692] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3703] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(389), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3712] = 3,
    ACTIONS(137), 1,
      sym_keyword_primary,
    STATE(180), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3723] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3732] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3741] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3750] = 3,
    ACTIONS(395), 1,
      sym_keyword_for,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3770] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3779] = 3,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3790] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3799] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3810] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3819] = 3,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3830] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3839] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3848] = 2,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3856] = 2,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3864] = 2,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3872] = 2,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3880] = 2,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3888] = 2,
    ACTIONS(413), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3896] = 2,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3904] = 2,
    ACTIONS(415), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3912] = 2,
    ACTIONS(417), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3920] = 2,
    ACTIONS(419), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3928] = 2,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3936] = 2,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3944] = 2,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3952] = 2,
    ACTIONS(427), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3960] = 2,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3968] = 2,
    ACTIONS(429), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3976] = 2,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3984] = 2,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3992] = 2,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4000] = 2,
    ACTIONS(437), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4008] = 2,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4016] = 2,
    ACTIONS(441), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4024] = 2,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4032] = 2,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4040] = 2,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4048] = 2,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4056] = 2,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4064] = 2,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4072] = 2,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4080] = 2,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4088] = 2,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4096] = 2,
    ACTIONS(455), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4104] = 2,
    ACTIONS(457), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4112] = 2,
    ACTIONS(459), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4120] = 2,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4128] = 2,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4136] = 2,
    ACTIONS(465), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4144] = 2,
    ACTIONS(467), 1,
      sym__string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4152] = 2,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4160] = 2,
    ACTIONS(471), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4168] = 2,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4176] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4184] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4192] = 2,
    ACTIONS(479), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4200] = 2,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4208] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4216] = 2,
    ACTIONS(483), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4224] = 2,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4232] = 2,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4240] = 2,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4248] = 2,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4256] = 2,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4264] = 2,
    ACTIONS(493), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4272] = 2,
    ACTIONS(495), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4280] = 2,
    ACTIONS(497), 1,
      sym__string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4288] = 2,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4296] = 2,
    ACTIONS(499), 1,
      sym__string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4304] = 2,
    ACTIONS(501), 1,
      sym__string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4312] = 2,
    ACTIONS(503), 1,
      sym__string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [4320] = 2,
    ACTIONS(505), 1,
      sym__string,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 410,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 528,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 590,
  [SMALL_STATE(19)] = 636,
  [SMALL_STATE(20)] = 683,
  [SMALL_STATE(21)] = 730,
  [SMALL_STATE(22)] = 759,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 809,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 863,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 925,
  [SMALL_STATE(29)] = 949,
  [SMALL_STATE(30)] = 973,
  [SMALL_STATE(31)] = 1019,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1086,
  [SMALL_STATE(34)] = 1120,
  [SMALL_STATE(35)] = 1154,
  [SMALL_STATE(36)] = 1186,
  [SMALL_STATE(37)] = 1222,
  [SMALL_STATE(38)] = 1255,
  [SMALL_STATE(39)] = 1294,
  [SMALL_STATE(40)] = 1333,
  [SMALL_STATE(41)] = 1366,
  [SMALL_STATE(42)] = 1401,
  [SMALL_STATE(43)] = 1434,
  [SMALL_STATE(44)] = 1473,
  [SMALL_STATE(45)] = 1506,
  [SMALL_STATE(46)] = 1539,
  [SMALL_STATE(47)] = 1574,
  [SMALL_STATE(48)] = 1609,
  [SMALL_STATE(49)] = 1642,
  [SMALL_STATE(50)] = 1677,
  [SMALL_STATE(51)] = 1697,
  [SMALL_STATE(52)] = 1717,
  [SMALL_STATE(53)] = 1750,
  [SMALL_STATE(54)] = 1783,
  [SMALL_STATE(55)] = 1801,
  [SMALL_STATE(56)] = 1829,
  [SMALL_STATE(57)] = 1859,
  [SMALL_STATE(58)] = 1875,
  [SMALL_STATE(59)] = 1905,
  [SMALL_STATE(60)] = 1923,
  [SMALL_STATE(61)] = 1941,
  [SMALL_STATE(62)] = 1967,
  [SMALL_STATE(63)] = 1992,
  [SMALL_STATE(64)] = 2007,
  [SMALL_STATE(65)] = 2026,
  [SMALL_STATE(66)] = 2051,
  [SMALL_STATE(67)] = 2080,
  [SMALL_STATE(68)] = 2095,
  [SMALL_STATE(69)] = 2110,
  [SMALL_STATE(70)] = 2125,
  [SMALL_STATE(71)] = 2140,
  [SMALL_STATE(72)] = 2165,
  [SMALL_STATE(73)] = 2187,
  [SMALL_STATE(74)] = 2213,
  [SMALL_STATE(75)] = 2229,
  [SMALL_STATE(76)] = 2251,
  [SMALL_STATE(77)] = 2267,
  [SMALL_STATE(78)] = 2293,
  [SMALL_STATE(79)] = 2319,
  [SMALL_STATE(80)] = 2333,
  [SMALL_STATE(81)] = 2359,
  [SMALL_STATE(82)] = 2377,
  [SMALL_STATE(83)] = 2395,
  [SMALL_STATE(84)] = 2413,
  [SMALL_STATE(85)] = 2426,
  [SMALL_STATE(86)] = 2441,
  [SMALL_STATE(87)] = 2462,
  [SMALL_STATE(88)] = 2483,
  [SMALL_STATE(89)] = 2504,
  [SMALL_STATE(90)] = 2525,
  [SMALL_STATE(91)] = 2538,
  [SMALL_STATE(92)] = 2559,
  [SMALL_STATE(93)] = 2580,
  [SMALL_STATE(94)] = 2601,
  [SMALL_STATE(95)] = 2614,
  [SMALL_STATE(96)] = 2629,
  [SMALL_STATE(97)] = 2650,
  [SMALL_STATE(98)] = 2666,
  [SMALL_STATE(99)] = 2684,
  [SMALL_STATE(100)] = 2704,
  [SMALL_STATE(101)] = 2722,
  [SMALL_STATE(102)] = 2738,
  [SMALL_STATE(103)] = 2752,
  [SMALL_STATE(104)] = 2768,
  [SMALL_STATE(105)] = 2786,
  [SMALL_STATE(106)] = 2806,
  [SMALL_STATE(107)] = 2822,
  [SMALL_STATE(108)] = 2842,
  [SMALL_STATE(109)] = 2854,
  [SMALL_STATE(110)] = 2874,
  [SMALL_STATE(111)] = 2892,
  [SMALL_STATE(112)] = 2906,
  [SMALL_STATE(113)] = 2920,
  [SMALL_STATE(114)] = 2934,
  [SMALL_STATE(115)] = 2952,
  [SMALL_STATE(116)] = 2970,
  [SMALL_STATE(117)] = 2984,
  [SMALL_STATE(118)] = 2998,
  [SMALL_STATE(119)] = 3016,
  [SMALL_STATE(120)] = 3034,
  [SMALL_STATE(121)] = 3052,
  [SMALL_STATE(122)] = 3068,
  [SMALL_STATE(123)] = 3082,
  [SMALL_STATE(124)] = 3098,
  [SMALL_STATE(125)] = 3118,
  [SMALL_STATE(126)] = 3133,
  [SMALL_STATE(127)] = 3148,
  [SMALL_STATE(128)] = 3159,
  [SMALL_STATE(129)] = 3176,
  [SMALL_STATE(130)] = 3193,
  [SMALL_STATE(131)] = 3204,
  [SMALL_STATE(132)] = 3218,
  [SMALL_STATE(133)] = 3232,
  [SMALL_STATE(134)] = 3246,
  [SMALL_STATE(135)] = 3260,
  [SMALL_STATE(136)] = 3274,
  [SMALL_STATE(137)] = 3288,
  [SMALL_STATE(138)] = 3302,
  [SMALL_STATE(139)] = 3316,
  [SMALL_STATE(140)] = 3330,
  [SMALL_STATE(141)] = 3344,
  [SMALL_STATE(142)] = 3358,
  [SMALL_STATE(143)] = 3370,
  [SMALL_STATE(144)] = 3382,
  [SMALL_STATE(145)] = 3392,
  [SMALL_STATE(146)] = 3406,
  [SMALL_STATE(147)] = 3420,
  [SMALL_STATE(148)] = 3434,
  [SMALL_STATE(149)] = 3446,
  [SMALL_STATE(150)] = 3456,
  [SMALL_STATE(151)] = 3470,
  [SMALL_STATE(152)] = 3484,
  [SMALL_STATE(153)] = 3498,
  [SMALL_STATE(154)] = 3510,
  [SMALL_STATE(155)] = 3524,
  [SMALL_STATE(156)] = 3538,
  [SMALL_STATE(157)] = 3550,
  [SMALL_STATE(158)] = 3564,
  [SMALL_STATE(159)] = 3578,
  [SMALL_STATE(160)] = 3589,
  [SMALL_STATE(161)] = 3600,
  [SMALL_STATE(162)] = 3611,
  [SMALL_STATE(163)] = 3620,
  [SMALL_STATE(164)] = 3629,
  [SMALL_STATE(165)] = 3638,
  [SMALL_STATE(166)] = 3647,
  [SMALL_STATE(167)] = 3656,
  [SMALL_STATE(168)] = 3665,
  [SMALL_STATE(169)] = 3674,
  [SMALL_STATE(170)] = 3683,
  [SMALL_STATE(171)] = 3692,
  [SMALL_STATE(172)] = 3703,
  [SMALL_STATE(173)] = 3712,
  [SMALL_STATE(174)] = 3723,
  [SMALL_STATE(175)] = 3732,
  [SMALL_STATE(176)] = 3741,
  [SMALL_STATE(177)] = 3750,
  [SMALL_STATE(178)] = 3761,
  [SMALL_STATE(179)] = 3770,
  [SMALL_STATE(180)] = 3779,
  [SMALL_STATE(181)] = 3790,
  [SMALL_STATE(182)] = 3799,
  [SMALL_STATE(183)] = 3810,
  [SMALL_STATE(184)] = 3819,
  [SMALL_STATE(185)] = 3830,
  [SMALL_STATE(186)] = 3839,
  [SMALL_STATE(187)] = 3848,
  [SMALL_STATE(188)] = 3856,
  [SMALL_STATE(189)] = 3864,
  [SMALL_STATE(190)] = 3872,
  [SMALL_STATE(191)] = 3880,
  [SMALL_STATE(192)] = 3888,
  [SMALL_STATE(193)] = 3896,
  [SMALL_STATE(194)] = 3904,
  [SMALL_STATE(195)] = 3912,
  [SMALL_STATE(196)] = 3920,
  [SMALL_STATE(197)] = 3928,
  [SMALL_STATE(198)] = 3936,
  [SMALL_STATE(199)] = 3944,
  [SMALL_STATE(200)] = 3952,
  [SMALL_STATE(201)] = 3960,
  [SMALL_STATE(202)] = 3968,
  [SMALL_STATE(203)] = 3976,
  [SMALL_STATE(204)] = 3984,
  [SMALL_STATE(205)] = 3992,
  [SMALL_STATE(206)] = 4000,
  [SMALL_STATE(207)] = 4008,
  [SMALL_STATE(208)] = 4016,
  [SMALL_STATE(209)] = 4024,
  [SMALL_STATE(210)] = 4032,
  [SMALL_STATE(211)] = 4040,
  [SMALL_STATE(212)] = 4048,
  [SMALL_STATE(213)] = 4056,
  [SMALL_STATE(214)] = 4064,
  [SMALL_STATE(215)] = 4072,
  [SMALL_STATE(216)] = 4080,
  [SMALL_STATE(217)] = 4088,
  [SMALL_STATE(218)] = 4096,
  [SMALL_STATE(219)] = 4104,
  [SMALL_STATE(220)] = 4112,
  [SMALL_STATE(221)] = 4120,
  [SMALL_STATE(222)] = 4128,
  [SMALL_STATE(223)] = 4136,
  [SMALL_STATE(224)] = 4144,
  [SMALL_STATE(225)] = 4152,
  [SMALL_STATE(226)] = 4160,
  [SMALL_STATE(227)] = 4168,
  [SMALL_STATE(228)] = 4176,
  [SMALL_STATE(229)] = 4184,
  [SMALL_STATE(230)] = 4192,
  [SMALL_STATE(231)] = 4200,
  [SMALL_STATE(232)] = 4208,
  [SMALL_STATE(233)] = 4216,
  [SMALL_STATE(234)] = 4224,
  [SMALL_STATE(235)] = 4232,
  [SMALL_STATE(236)] = 4240,
  [SMALL_STATE(237)] = 4248,
  [SMALL_STATE(238)] = 4256,
  [SMALL_STATE(239)] = 4264,
  [SMALL_STATE(240)] = 4272,
  [SMALL_STATE(241)] = 4280,
  [SMALL_STATE(242)] = 4288,
  [SMALL_STATE(243)] = 4296,
  [SMALL_STATE(244)] = 4304,
  [SMALL_STATE(245)] = 4312,
  [SMALL_STATE(246)] = 4320,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 4),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(122),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(224),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 14),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(96),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 9),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 16),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 16),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 16),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 10),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 10),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 3, .production_id = 12),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 3, .production_id = 12),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definitions, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option, 1, .production_id = 7),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 10),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(89),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(86),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(156),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(62),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 1, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 10),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_literal, 4, .production_id = 15),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key_constraint, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 11),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_constraint, 3, .production_id = 15),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5, .production_id = 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 3, .production_id = 8),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [481] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 6, .production_id = 6),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
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
