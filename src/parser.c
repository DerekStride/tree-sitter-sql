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
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
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
  anon_sym_LPAREN = 45,
  anon_sym_COMMA = 46,
  anon_sym_RPAREN = 47,
  anon_sym_DOT = 48,
  anon_sym_STAR = 49,
  anon_sym_PLUS = 50,
  anon_sym_DASH = 51,
  anon_sym_SLASH = 52,
  anon_sym_PERCENT = 53,
  anon_sym_CARET = 54,
  anon_sym_EQ = 55,
  anon_sym_LT = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_GT = 60,
  sym__literal_string = 61,
  sym__string = 62,
  sym__number = 63,
  sym_program = 64,
  sym_statement = 65,
  sym__select_statement = 66,
  sym_select = 67,
  sym_select_expression = 68,
  sym__delete_statement = 69,
  sym_delete = 70,
  sym__delete_from = 71,
  sym__create_statement = 72,
  sym_create = 73,
  sym__if_not_exists = 74,
  sym_column_definitions = 75,
  sym_column_definition = 76,
  sym__not_null = 77,
  sym__default_null = 78,
  sym_constraint = 79,
  sym_column_list = 80,
  sym_column = 81,
  sym__type = 82,
  sym_bigint = 83,
  sym_char = 84,
  sym_varchar = 85,
  sym__primary_key = 86,
  sym__create_table_expression = 87,
  sym__field_list = 88,
  sym_field = 89,
  sym_function_call = 90,
  sym__function_name = 91,
  sym_from = 92,
  sym_table_expression = 93,
  sym_index_hint = 94,
  sym_join = 95,
  sym_where = 96,
  sym_group_by = 97,
  sym__having = 98,
  sym_order_by = 99,
  sym_order_expression = 100,
  sym_limit = 101,
  sym_offset = 102,
  sym_where_expression = 103,
  sym_predicate = 104,
  sym__expression = 105,
  sym_list = 106,
  sym_direction = 107,
  sym_literal = 108,
  sym_identifier = 109,
  aux_sym__field_list_repeat1 = 110,
  aux_sym_from_repeat1 = 111,
  aux_sym_list_repeat1 = 112,
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
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [sym__literal_string] = "_literal_string",
  [sym__string] = "_string",
  [sym__number] = "_number",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym__select_statement] = "_select_statement",
  [sym_select] = "select",
  [sym_select_expression] = "select_expression",
  [sym__delete_statement] = "_delete_statement",
  [sym_delete] = "delete",
  [sym__delete_from] = "from",
  [sym__create_statement] = "_create_statement",
  [sym_create] = "create",
  [sym__if_not_exists] = "_if_not_exists",
  [sym_column_definitions] = "column_definitions",
  [sym_column_definition] = "column_definition",
  [sym__not_null] = "_not_null",
  [sym__default_null] = "_default_null",
  [sym_constraint] = "constraint",
  [sym_column_list] = "column_list",
  [sym_column] = "column",
  [sym__type] = "_type",
  [sym_bigint] = "bigint",
  [sym_char] = "char",
  [sym_varchar] = "varchar",
  [sym__primary_key] = "_primary_key",
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
  [sym_direction] = "direction",
  [sym_literal] = "literal",
  [sym_identifier] = "identifier",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [sym__literal_string] = sym__literal_string,
  [sym__string] = sym__string,
  [sym__number] = sym__number,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym__select_statement] = sym__select_statement,
  [sym_select] = sym_select,
  [sym_select_expression] = sym_select_expression,
  [sym__delete_statement] = sym__delete_statement,
  [sym_delete] = sym_delete,
  [sym__delete_from] = sym_from,
  [sym__create_statement] = sym__create_statement,
  [sym_create] = sym_create,
  [sym__if_not_exists] = sym__if_not_exists,
  [sym_column_definitions] = sym_column_definitions,
  [sym_column_definition] = sym_column_definition,
  [sym__not_null] = sym__not_null,
  [sym__default_null] = sym__default_null,
  [sym_constraint] = sym_constraint,
  [sym_column_list] = sym_column_list,
  [sym_column] = sym_column,
  [sym__type] = sym__type,
  [sym_bigint] = sym_bigint,
  [sym_char] = sym_char,
  [sym_varchar] = sym_varchar,
  [sym__primary_key] = sym__primary_key,
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
  [sym_direction] = sym_direction,
  [sym_literal] = sym_literal,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_EQ] = {
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
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
  [sym__if_not_exists] = {
    .visible = false,
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
  [sym__not_null] = {
    .visible = false,
    .named = true,
  },
  [sym__default_null] = {
    .visible = false,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
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
  [sym__primary_key] = {
    .visible = false,
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
  [sym_direction] = {
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
};

static const TSFieldMapSlice ts_field_map_slices[14] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 1},
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
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [19] =
    {field_index_name, 5},
  [20] =
    {field_name, 1},
  [21] =
    {field_size, 2},
};

static TSSymbol ts_alias_sequences[14][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [13] = {
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
      if (eof) ADVANCE(333);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(397);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(396);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'E') ADVANCE(164);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'J') ADVANCE(117);
      if (lookahead == 'K') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(70);
      if (lookahead == '^') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'j') ADVANCE(268);
      if (lookahead == 'k') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(221);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(397);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(396);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'J') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(70);
      if (lookahead == '^') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'j') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'F') ADVANCE(119);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == '^') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(458);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'D') ADVANCE(429);
      if (lookahead == 'M') ADVANCE(417);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(393);
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
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(442);
      if (lookahead == 'G') ADVANCE(448);
      if (lookahead == 'J') ADVANCE(443);
      if (lookahead == 'L') ADVANCE(430);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead == 'W') ADVANCE(428);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'g') ADVANCE(491);
      if (lookahead == 'j') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead == 'w') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == 'L') ADVANCE(430);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == 'W') ADVANCE(428);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'w') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(442);
      if (lookahead == 'O') ADVANCE(438);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(426);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(408);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(160);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(168);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(348);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(347);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(147);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(149);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(367);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(387);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(372);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(353);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(389);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(380);
      if (lookahead == 'N') ADVANCE(366);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(340);
      if (lookahead == 'R') ADVANCE(369);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(364);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(346);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'H') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(27);
      END_STATE();
    case 72:
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 73:
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(386);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead == 'M') ADVANCE(337);
      END_STATE();
    case 92:
      if (lookahead == 'M') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(62);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(153);
      if (lookahead == 'V') ADVANCE(67);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(366);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(340);
      if (lookahead == 'R') ADVANCE(369);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(338);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(143);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(150);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(139);
      if (lookahead == 'U') ADVANCE(106);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(159);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(169);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(378);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(390);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(391);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(368);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(382);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(45);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(371);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(358);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(385);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(351);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(334);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(384);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(355);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(357);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(383);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 159:
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 160:
      if (lookahead == 'U') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'V') ADVANCE(79);
      END_STATE();
    case 162:
      if (lookahead == 'X') ADVANCE(360);
      END_STATE();
    case 163:
      if (lookahead == 'X') ADVANCE(376);
      END_STATE();
    case 164:
      if (lookahead == 'X') ADVANCE(84);
      END_STATE();
    case 165:
      if (lookahead == 'Y') ADVANCE(354);
      END_STATE();
    case 166:
      if (lookahead == 'Y') ADVANCE(352);
      END_STATE();
    case 167:
      if (lookahead == 'Y') ADVANCE(345);
      END_STATE();
    case 168:
      if (lookahead == 'Y') ADVANCE(344);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 170:
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(318);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(319);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(292);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(346);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 221:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 243:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(304);
      if (lookahead == 'v') ADVANCE(218);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 271:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 312:
      if (lookahead == 'v') ADVANCE(230);
      END_STATE();
    case 313:
      if (lookahead == 'x') ADVANCE(360);
      END_STATE();
    case 314:
      if (lookahead == 'x') ADVANCE(376);
      END_STATE();
    case 315:
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 316:
      if (lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 317:
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 318:
      if (lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 319:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 320:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 321:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(397);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(396);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'J') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(70);
      if (lookahead == '^') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'j') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 322:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'F') ADVANCE(119);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == '^') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 323:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(458);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'D') ADVANCE(429);
      if (lookahead == 'M') ADVANCE(417);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 324:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 325:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(442);
      if (lookahead == 'G') ADVANCE(448);
      if (lookahead == 'J') ADVANCE(443);
      if (lookahead == 'L') ADVANCE(430);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead == 'W') ADVANCE(428);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'g') ADVANCE(491);
      if (lookahead == 'j') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead == 'w') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 326:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == 'L') ADVANCE(430);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == 'W') ADVANCE(428);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'w') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 327:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(442);
      if (lookahead == 'O') ADVANCE(438);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 328:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(426);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 329:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 330:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 331:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 332:
      if (eof) ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(397);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(396);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'E') ADVANCE(164);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'J') ADVANCE(117);
      if (lookahead == 'K') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(70);
      if (lookahead == '^') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'j') ADVANCE(268);
      if (lookahead == 'k') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(221);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_keyword_join);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_keyword_on);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_keyword_where);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_order_by);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_keyword_offset);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_keyword_count);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_keyword_max);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_keyword_min);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_keyword_or);
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_keyword_force);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_keyword_force);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_keyword_use);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_keyword_use);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_keyword_index);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_keyword_for);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_keyword_for);
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_keyword_if);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_keyword_auto_increment);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_keyword_char);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_keyword_varchar);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_marginalia);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__literal_string);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'A') ADVANCE(459);
      if (lookahead == 'I') ADVANCE(435);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'C') ADVANCE(422);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(343);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(447);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'F') ADVANCE(381);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'G') ADVANCE(365);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'H') ADVANCE(424);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(363);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(418);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(339);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(341);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'N') ADVANCE(452);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(457);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(456);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(446);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'O') ADVANCE(432);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'P') ADVANCE(413);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(420);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(419);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(423);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(441);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'R') ADVANCE(415);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(455);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'S') ADVANCE(421);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'T') ADVANCE(431);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(444);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'U') ADVANCE(439);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'V') ADVANCE(427);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == 'X') ADVANCE(361);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'd') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'g') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'h') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'm') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 's') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 's') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'v') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == 'x') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '`') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 0},
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
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
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
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
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
  [196] = {.lex_state = 18},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__literal_string] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(206),
    [sym_statement] = STATE(205),
    [sym__select_statement] = STATE(204),
    [sym_select] = STATE(110),
    [sym__delete_statement] = STATE(204),
    [sym_delete] = STATE(151),
    [sym__create_statement] = STATE(204),
    [sym_create] = STATE(201),
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
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [47] = 4,
    ACTIONS(19), 1,
      anon_sym_DOT,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [85] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(23), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 22,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [121] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 21,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [156] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(23), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 19,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [193] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(33), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(31), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [225] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(37), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [255] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(33), 5,
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
    ACTIONS(31), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [287] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 16,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [317] = 9,
    ACTIONS(47), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 3,
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
  [359] = 8,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 3,
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
  [399] = 11,
    ACTIONS(47), 1,
      sym_keyword_in,
    ACTIONS(49), 1,
      sym_keyword_or,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 4,
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
  [445] = 4,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(49), 5,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [477] = 6,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
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
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [513] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(49), 5,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [543] = 12,
    ACTIONS(47), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      sym_keyword_and,
    ACTIONS(69), 1,
      sym_keyword_or,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [589] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(71), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
    ACTIONS(33), 5,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 10,
      sym_keyword_in,
      sym_keyword_and,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [618] = 3,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [643] = 11,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(81), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(138), 1,
      sym_order_expression,
    STATE(197), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(71), 2,
      sym_field,
      sym_function_call,
    STATE(90), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(73), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [684] = 11,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(3), 1,
      sym_identifier,
    STATE(149), 1,
      sym_select_expression,
    STATE(197), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(71), 2,
      sym_field,
      sym_function_call,
    STATE(148), 2,
      sym__field_list,
      sym_literal,
    ACTIONS(73), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [725] = 4,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(17), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [752] = 4,
    ACTIONS(11), 1,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [779] = 3,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [803] = 3,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [827] = 10,
    ACTIONS(47), 1,
      sym_keyword_in,
    ACTIONS(53), 1,
      anon_sym_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      sym_keyword_and,
      sym_keyword_or,
    ACTIONS(61), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [865] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(27), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [889] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 4,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 11,
      sym_keyword_in,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [913] = 14,
    ACTIONS(87), 1,
      sym_keyword_join,
    ACTIONS(89), 1,
      sym_keyword_where,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_group_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_index_hint,
    STATE(70), 1,
      sym_where,
    STATE(85), 1,
      sym_group_by,
    STATE(116), 1,
      sym_order_by,
    STATE(163), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      sym_keyword_force,
      sym_keyword_use,
    STATE(31), 2,
      sym_join,
      aux_sym_from_repeat1,
  [959] = 11,
    ACTIONS(103), 1,
      sym_keyword_primary,
    ACTIONS(107), 1,
      sym_keyword_not,
    ACTIONS(109), 1,
      sym_keyword_auto_increment,
    ACTIONS(111), 1,
      sym_keyword_default,
    STATE(35), 1,
      sym__not_null,
    STATE(52), 1,
      sym__default_null,
    STATE(81), 1,
      sym__primary_key,
    STATE(136), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(105), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [997] = 12,
    ACTIONS(87), 1,
      sym_keyword_join,
    ACTIONS(89), 1,
      sym_keyword_where,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_group_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_where,
    STATE(87), 1,
      sym_group_by,
    STATE(134), 1,
      sym_order_by,
    STATE(177), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1036] = 12,
    ACTIONS(87), 1,
      sym_keyword_join,
    ACTIONS(89), 1,
      sym_keyword_where,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_group_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_where,
    STATE(87), 1,
      sym_group_by,
    STATE(134), 1,
      sym_order_by,
    STATE(177), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(33), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1075] = 12,
    ACTIONS(87), 1,
      sym_keyword_join,
    ACTIONS(89), 1,
      sym_keyword_where,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_group_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_where,
    STATE(91), 1,
      sym_group_by,
    STATE(118), 1,
      sym_order_by,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 2,
      sym_join,
      aux_sym_from_repeat1,
  [1114] = 8,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    STATE(102), 1,
      sym_where_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(17), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1144] = 9,
    ACTIONS(103), 1,
      sym_keyword_primary,
    ACTIONS(111), 1,
      sym_keyword_default,
    ACTIONS(123), 1,
      sym_keyword_auto_increment,
    STATE(51), 1,
      sym__default_null,
    STATE(82), 1,
      sym__primary_key,
    STATE(123), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(121), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1176] = 6,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(119), 1,
      sym__number,
    STATE(50), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(127), 3,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
    ACTIONS(125), 5,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
  [1202] = 7,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(119), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(197), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(75), 2,
      sym_field,
      sym_function_call,
    ACTIONS(73), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1230] = 7,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(119), 1,
      sym__number,
    STATE(3), 1,
      sym_identifier,
    STATE(197), 1,
      sym__function_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(168), 2,
      sym_field,
      sym_function_call,
    ACTIONS(73), 5,
      sym_keyword_distinct,
      sym_keyword_count,
      sym_keyword_max,
      sym_keyword_min,
      sym_keyword_avg,
  [1258] = 8,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym__literal_string,
    ACTIONS(133), 1,
      sym__string,
    ACTIONS(135), 1,
      sym__number,
    STATE(7), 1,
      sym_predicate,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1287] = 8,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym__literal_string,
    ACTIONS(133), 1,
      sym__string,
    ACTIONS(135), 1,
      sym__number,
    STATE(9), 1,
      sym_predicate,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1316] = 7,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__string,
    STATE(3), 1,
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
  [1343] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(13), 6,
      sym_keyword_join,
      sym_keyword_where,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [1362] = 7,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(14), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1389] = 7,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__string,
    STATE(3), 1,
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
  [1416] = 3,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(137), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_constraint,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1435] = 7,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(16), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1462] = 8,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym__literal_string,
    ACTIONS(133), 1,
      sym__string,
    ACTIONS(135), 1,
      sym__number,
    STATE(18), 1,
      sym_predicate,
    STATE(22), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(26), 4,
      sym_field,
      sym__expression,
      sym_list,
      sym_literal,
  [1491] = 7,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__string,
    STATE(3), 1,
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
  [1518] = 7,
    ACTIONS(77), 1,
      sym__literal_string,
    ACTIONS(81), 1,
      sym__number,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__string,
    STATE(3), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(12), 5,
      sym_field,
      sym_predicate,
      sym__expression,
      sym_list,
      sym_literal,
  [1545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(141), 9,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_force,
      sym_keyword_use,
      anon_sym_SEMI,
  [1561] = 7,
    ACTIONS(103), 1,
      sym_keyword_primary,
    ACTIONS(145), 1,
      sym_keyword_auto_increment,
    STATE(80), 1,
      sym__primary_key,
    STATE(129), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(143), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1587] = 7,
    ACTIONS(103), 1,
      sym_keyword_primary,
    ACTIONS(123), 1,
      sym_keyword_auto_increment,
    STATE(82), 1,
      sym__primary_key,
    STATE(123), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(121), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1613] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(147), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_constraint,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1629] = 7,
    ACTIONS(149), 1,
      sym_keyword_bigint,
    ACTIONS(151), 1,
      sym_keyword_date,
    ACTIONS(153), 1,
      sym_keyword_datetime,
    ACTIONS(155), 1,
      sym_keyword_char,
    ACTIONS(157), 1,
      sym_keyword_varchar,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(30), 4,
      sym__type,
      sym_bigint,
      sym_char,
      sym_varchar,
  [1655] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(159), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_constraint,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1671] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(161), 9,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_constraint,
      sym_keyword_not,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1687] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(163), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1702] = 4,
    ACTIONS(165), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    STATE(58), 2,
      sym_join,
      aux_sym_from_repeat1,
    ACTIONS(168), 5,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1721] = 6,
    ACTIONS(103), 1,
      sym_keyword_primary,
    STATE(82), 1,
      sym__primary_key,
    STATE(123), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(121), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1744] = 6,
    ACTIONS(103), 1,
      sym_keyword_primary,
    STATE(79), 1,
      sym__primary_key,
    STATE(125), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(170), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1767] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(172), 8,
      sym_keyword_from,
      sym_keyword_join,
      sym_keyword_on,
      sym_keyword_where,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1782] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(174), 8,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_constraint,
      sym_keyword_auto_increment,
      sym_keyword_default,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1797] = 6,
    ACTIONS(103), 1,
      sym_keyword_primary,
    STATE(80), 1,
      sym__primary_key,
    STATE(129), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(143), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(176), 7,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_primary,
      sym_keyword_constraint,
      sym_keyword_auto_increment,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1834] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(178), 7,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1848] = 4,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(180), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1866] = 8,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_group_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_group_by,
    STATE(118), 1,
      sym_order_by,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1892] = 8,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_group_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_group_by,
    STATE(111), 1,
      sym_order_by,
    STATE(155), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1918] = 8,
    ACTIONS(89), 1,
      sym_keyword_where,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_where,
    STATE(122), 1,
      sym_order_by,
    STATE(164), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1944] = 8,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(93), 1,
      sym_keyword_group_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_group_by,
    STATE(134), 1,
      sym_order_by,
    STATE(177), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [1970] = 4,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(189), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [1988] = 6,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(119), 1,
      sym__number,
    STATE(50), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 2,
      sym_keyword_where,
      sym_keyword_limit,
    ACTIONS(127), 2,
      sym_keyword_order_by,
      anon_sym_SEMI,
  [2010] = 4,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym__field_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(193), 5,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2028] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(195), 6,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_constraint,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2041] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(180), 6,
      sym_keyword_from,
      sym_keyword_desc,
      sym_keyword_asc,
      sym_keyword_limit,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2054] = 5,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(119), 1,
      sym__number,
    STATE(50), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(125), 3,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
  [2073] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(11), 3,
      sym_keyword_order_by,
      anon_sym_SEMI,
      sym__number,
    ACTIONS(13), 3,
      sym_keyword_where,
      sym_keyword_limit,
      sym__string,
  [2088] = 7,
    ACTIONS(79), 1,
      sym__string,
    ACTIONS(119), 1,
      sym__number,
    ACTIONS(197), 1,
      sym_keyword_if,
    STATE(98), 1,
      sym__if_not_exists,
    STATE(139), 1,
      sym_identifier,
    STATE(140), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2111] = 4,
    STATE(121), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(199), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2128] = 4,
    STATE(125), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(170), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2145] = 4,
    STATE(123), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(121), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2162] = 4,
    STATE(129), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(143), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2179] = 4,
    ACTIONS(203), 1,
      sym_keyword_having,
    STATE(114), 1,
      sym__having,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(201), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2195] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(205), 5,
      sym_keyword_limit,
      sym_keyword_constraint,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2207] = 6,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      sym_order_by,
    STATE(177), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2227] = 3,
    ACTIONS(11), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(13), 4,
      sym_keyword_on,
      sym_keyword_force,
      sym_keyword_use,
      sym__string,
  [2241] = 6,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      sym_order_by,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2261] = 6,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_order_by,
    STATE(172), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2281] = 6,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_order_by,
    STATE(199), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2301] = 4,
    STATE(150), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(211), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2317] = 6,
    ACTIONS(91), 1,
      sym_keyword_order_by,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_order_by,
    STATE(155), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2337] = 4,
    STATE(147), 1,
      sym_direction,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 2,
      sym_keyword_desc,
      sym_keyword_asc,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2353] = 4,
    STATE(54), 1,
      sym_identifier,
    STATE(101), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2368] = 4,
    ACTIONS(215), 1,
      sym_keyword_on,
    STATE(161), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      sym_keyword_force,
      sym_keyword_use,
  [2383] = 4,
    STATE(54), 1,
      sym_identifier,
    STATE(124), 1,
      sym_column_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2398] = 4,
    ACTIONS(217), 1,
      sym_keyword_from,
    STATE(195), 1,
      sym_index_hint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 2,
      sym_keyword_force,
      sym_keyword_use,
  [2413] = 4,
    STATE(69), 1,
      sym_table_expression,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(219), 2,
      sym__string,
      sym__number,
  [2428] = 4,
    STATE(139), 1,
      sym_identifier,
    STATE(146), 1,
      sym__create_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2443] = 4,
    STATE(92), 1,
      sym_identifier,
    STATE(192), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2458] = 4,
    STATE(29), 1,
      sym_table_expression,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(221), 2,
      sym__string,
      sym__number,
  [2473] = 5,
    ACTIONS(223), 1,
      sym_keyword_constraint,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2490] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(229), 4,
      sym_keyword_order_by,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2501] = 4,
    STATE(92), 1,
      sym_identifier,
    STATE(144), 1,
      sym_column,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2516] = 4,
    STATE(76), 1,
      sym_identifier,
    STATE(94), 1,
      sym_table_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(231), 2,
      sym__string,
      sym__number,
  [2531] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2545] = 4,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2559] = 3,
    STATE(109), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      sym__literal_string,
      sym__number,
  [2571] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2585] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2599] = 4,
    ACTIONS(246), 1,
      sym_keyword_from,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(188), 1,
      sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2613] = 4,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2627] = 3,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2639] = 3,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2651] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(250), 3,
      sym_keyword_order_by,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2661] = 3,
    STATE(182), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      sym__literal_string,
      sym__number,
  [2673] = 4,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(177), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2687] = 3,
    STATE(191), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2699] = 4,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2713] = 3,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2725] = 3,
    STATE(27), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(133), 2,
      sym__string,
      sym__number,
  [2737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(252), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2747] = 4,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(143), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2771] = 4,
    ACTIONS(223), 1,
      sym_keyword_constraint,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2785] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(199), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2795] = 3,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2807] = 3,
    STATE(5), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 2,
      sym__string,
      sym__number,
  [2819] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(170), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2843] = 3,
    STATE(141), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      sym__literal_string,
      sym__number,
  [2855] = 4,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2869] = 3,
    STATE(135), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      sym__literal_string,
      sym__number,
  [2881] = 4,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2895] = 4,
    ACTIONS(95), 1,
      sym_keyword_limit,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      sym_limit,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2909] = 4,
    ACTIONS(262), 1,
      sym_keyword_offset,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2923] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(121), 3,
      sym_keyword_constraint,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2933] = 3,
    STATE(105), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(77), 2,
      sym__literal_string,
      sym__number,
  [2945] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(266), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [2954] = 3,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2965] = 3,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2976] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2985] = 3,
    ACTIONS(274), 1,
      sym_keyword_for,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [2996] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(278), 2,
      sym__string,
      sym__number,
  [3005] = 3,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3016] = 3,
    ACTIONS(103), 1,
      sym_keyword_primary,
    STATE(152), 1,
      sym__primary_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3027] = 3,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_column_definitions,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3038] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3047] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(286), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(288), 2,
      sym_keyword_from,
      anon_sym_SEMI,
  [3065] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(290), 2,
      sym_keyword_limit,
      anon_sym_SEMI,
  [3074] = 3,
    ACTIONS(292), 1,
      sym_keyword_from,
    STATE(187), 1,
      sym__delete_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3085] = 3,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_column_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3096] = 2,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3104] = 2,
    ACTIONS(298), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3112] = 2,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3120] = 2,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3128] = 2,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3136] = 2,
    ACTIONS(304), 1,
      sym_keyword_table,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3144] = 2,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3152] = 2,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3160] = 2,
    ACTIONS(310), 1,
      sym_keyword_on,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3168] = 2,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3176] = 2,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3184] = 2,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3192] = 2,
    ACTIONS(314), 1,
      sym_keyword_exists,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3200] = 2,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3208] = 2,
    ACTIONS(318), 1,
      sym_keyword_join,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3216] = 2,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3224] = 2,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3232] = 2,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3240] = 2,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3248] = 2,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3256] = 2,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3264] = 2,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3272] = 2,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3280] = 2,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3288] = 2,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3296] = 2,
    ACTIONS(336), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3304] = 2,
    ACTIONS(338), 1,
      sym_keyword_not,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3312] = 2,
    ACTIONS(340), 1,
      sym_keyword_null,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3320] = 2,
    ACTIONS(342), 1,
      sym_keyword_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3328] = 2,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3336] = 2,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3344] = 2,
    ACTIONS(348), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3352] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3360] = 2,
    ACTIONS(352), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3368] = 2,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3376] = 2,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3384] = 2,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3392] = 2,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3400] = 2,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3408] = 2,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3416] = 2,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3424] = 2,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3432] = 2,
    ACTIONS(370), 1,
      sym_keyword_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3440] = 2,
    ACTIONS(372), 1,
      sym_keyword_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3448] = 2,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3456] = 2,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3464] = 2,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3472] = 2,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3480] = 2,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3488] = 2,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3496] = 2,
    ACTIONS(382), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3504] = 2,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3512] = 2,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3520] = 2,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3528] = 2,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3536] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
  [3544] = 2,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_marginalia,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 317,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 445,
  [SMALL_STATE(15)] = 477,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 543,
  [SMALL_STATE(18)] = 589,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 643,
  [SMALL_STATE(21)] = 684,
  [SMALL_STATE(22)] = 725,
  [SMALL_STATE(23)] = 752,
  [SMALL_STATE(24)] = 779,
  [SMALL_STATE(25)] = 803,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 865,
  [SMALL_STATE(28)] = 889,
  [SMALL_STATE(29)] = 913,
  [SMALL_STATE(30)] = 959,
  [SMALL_STATE(31)] = 997,
  [SMALL_STATE(32)] = 1036,
  [SMALL_STATE(33)] = 1075,
  [SMALL_STATE(34)] = 1114,
  [SMALL_STATE(35)] = 1144,
  [SMALL_STATE(36)] = 1176,
  [SMALL_STATE(37)] = 1202,
  [SMALL_STATE(38)] = 1230,
  [SMALL_STATE(39)] = 1258,
  [SMALL_STATE(40)] = 1287,
  [SMALL_STATE(41)] = 1316,
  [SMALL_STATE(42)] = 1343,
  [SMALL_STATE(43)] = 1362,
  [SMALL_STATE(44)] = 1389,
  [SMALL_STATE(45)] = 1416,
  [SMALL_STATE(46)] = 1435,
  [SMALL_STATE(47)] = 1462,
  [SMALL_STATE(48)] = 1491,
  [SMALL_STATE(49)] = 1518,
  [SMALL_STATE(50)] = 1545,
  [SMALL_STATE(51)] = 1561,
  [SMALL_STATE(52)] = 1587,
  [SMALL_STATE(53)] = 1613,
  [SMALL_STATE(54)] = 1629,
  [SMALL_STATE(55)] = 1655,
  [SMALL_STATE(56)] = 1671,
  [SMALL_STATE(57)] = 1687,
  [SMALL_STATE(58)] = 1702,
  [SMALL_STATE(59)] = 1721,
  [SMALL_STATE(60)] = 1744,
  [SMALL_STATE(61)] = 1767,
  [SMALL_STATE(62)] = 1782,
  [SMALL_STATE(63)] = 1797,
  [SMALL_STATE(64)] = 1820,
  [SMALL_STATE(65)] = 1834,
  [SMALL_STATE(66)] = 1848,
  [SMALL_STATE(67)] = 1866,
  [SMALL_STATE(68)] = 1892,
  [SMALL_STATE(69)] = 1918,
  [SMALL_STATE(70)] = 1944,
  [SMALL_STATE(71)] = 1970,
  [SMALL_STATE(72)] = 1988,
  [SMALL_STATE(73)] = 2010,
  [SMALL_STATE(74)] = 2028,
  [SMALL_STATE(75)] = 2041,
  [SMALL_STATE(76)] = 2054,
  [SMALL_STATE(77)] = 2073,
  [SMALL_STATE(78)] = 2088,
  [SMALL_STATE(79)] = 2111,
  [SMALL_STATE(80)] = 2128,
  [SMALL_STATE(81)] = 2145,
  [SMALL_STATE(82)] = 2162,
  [SMALL_STATE(83)] = 2179,
  [SMALL_STATE(84)] = 2195,
  [SMALL_STATE(85)] = 2207,
  [SMALL_STATE(86)] = 2227,
  [SMALL_STATE(87)] = 2241,
  [SMALL_STATE(88)] = 2261,
  [SMALL_STATE(89)] = 2281,
  [SMALL_STATE(90)] = 2301,
  [SMALL_STATE(91)] = 2317,
  [SMALL_STATE(92)] = 2337,
  [SMALL_STATE(93)] = 2353,
  [SMALL_STATE(94)] = 2368,
  [SMALL_STATE(95)] = 2383,
  [SMALL_STATE(96)] = 2398,
  [SMALL_STATE(97)] = 2413,
  [SMALL_STATE(98)] = 2428,
  [SMALL_STATE(99)] = 2443,
  [SMALL_STATE(100)] = 2458,
  [SMALL_STATE(101)] = 2473,
  [SMALL_STATE(102)] = 2490,
  [SMALL_STATE(103)] = 2501,
  [SMALL_STATE(104)] = 2516,
  [SMALL_STATE(105)] = 2531,
  [SMALL_STATE(106)] = 2545,
  [SMALL_STATE(107)] = 2559,
  [SMALL_STATE(108)] = 2571,
  [SMALL_STATE(109)] = 2585,
  [SMALL_STATE(110)] = 2599,
  [SMALL_STATE(111)] = 2613,
  [SMALL_STATE(112)] = 2627,
  [SMALL_STATE(113)] = 2639,
  [SMALL_STATE(114)] = 2651,
  [SMALL_STATE(115)] = 2661,
  [SMALL_STATE(116)] = 2673,
  [SMALL_STATE(117)] = 2687,
  [SMALL_STATE(118)] = 2699,
  [SMALL_STATE(119)] = 2713,
  [SMALL_STATE(120)] = 2725,
  [SMALL_STATE(121)] = 2737,
  [SMALL_STATE(122)] = 2747,
  [SMALL_STATE(123)] = 2761,
  [SMALL_STATE(124)] = 2771,
  [SMALL_STATE(125)] = 2785,
  [SMALL_STATE(126)] = 2795,
  [SMALL_STATE(127)] = 2807,
  [SMALL_STATE(128)] = 2819,
  [SMALL_STATE(129)] = 2833,
  [SMALL_STATE(130)] = 2843,
  [SMALL_STATE(131)] = 2855,
  [SMALL_STATE(132)] = 2869,
  [SMALL_STATE(133)] = 2881,
  [SMALL_STATE(134)] = 2895,
  [SMALL_STATE(135)] = 2909,
  [SMALL_STATE(136)] = 2923,
  [SMALL_STATE(137)] = 2933,
  [SMALL_STATE(138)] = 2945,
  [SMALL_STATE(139)] = 2954,
  [SMALL_STATE(140)] = 2965,
  [SMALL_STATE(141)] = 2976,
  [SMALL_STATE(142)] = 2985,
  [SMALL_STATE(143)] = 2996,
  [SMALL_STATE(144)] = 3005,
  [SMALL_STATE(145)] = 3016,
  [SMALL_STATE(146)] = 3027,
  [SMALL_STATE(147)] = 3038,
  [SMALL_STATE(148)] = 3047,
  [SMALL_STATE(149)] = 3056,
  [SMALL_STATE(150)] = 3065,
  [SMALL_STATE(151)] = 3074,
  [SMALL_STATE(152)] = 3085,
  [SMALL_STATE(153)] = 3096,
  [SMALL_STATE(154)] = 3104,
  [SMALL_STATE(155)] = 3112,
  [SMALL_STATE(156)] = 3120,
  [SMALL_STATE(157)] = 3128,
  [SMALL_STATE(158)] = 3136,
  [SMALL_STATE(159)] = 3144,
  [SMALL_STATE(160)] = 3152,
  [SMALL_STATE(161)] = 3160,
  [SMALL_STATE(162)] = 3168,
  [SMALL_STATE(163)] = 3176,
  [SMALL_STATE(164)] = 3184,
  [SMALL_STATE(165)] = 3192,
  [SMALL_STATE(166)] = 3200,
  [SMALL_STATE(167)] = 3208,
  [SMALL_STATE(168)] = 3216,
  [SMALL_STATE(169)] = 3224,
  [SMALL_STATE(170)] = 3232,
  [SMALL_STATE(171)] = 3240,
  [SMALL_STATE(172)] = 3248,
  [SMALL_STATE(173)] = 3256,
  [SMALL_STATE(174)] = 3264,
  [SMALL_STATE(175)] = 3272,
  [SMALL_STATE(176)] = 3280,
  [SMALL_STATE(177)] = 3288,
  [SMALL_STATE(178)] = 3296,
  [SMALL_STATE(179)] = 3304,
  [SMALL_STATE(180)] = 3312,
  [SMALL_STATE(181)] = 3320,
  [SMALL_STATE(182)] = 3328,
  [SMALL_STATE(183)] = 3336,
  [SMALL_STATE(184)] = 3344,
  [SMALL_STATE(185)] = 3352,
  [SMALL_STATE(186)] = 3360,
  [SMALL_STATE(187)] = 3368,
  [SMALL_STATE(188)] = 3376,
  [SMALL_STATE(189)] = 3384,
  [SMALL_STATE(190)] = 3392,
  [SMALL_STATE(191)] = 3400,
  [SMALL_STATE(192)] = 3408,
  [SMALL_STATE(193)] = 3416,
  [SMALL_STATE(194)] = 3424,
  [SMALL_STATE(195)] = 3432,
  [SMALL_STATE(196)] = 3440,
  [SMALL_STATE(197)] = 3448,
  [SMALL_STATE(198)] = 3456,
  [SMALL_STATE(199)] = 3464,
  [SMALL_STATE(200)] = 3472,
  [SMALL_STATE(201)] = 3480,
  [SMALL_STATE(202)] = 3488,
  [SMALL_STATE(203)] = 3496,
  [SMALL_STATE(204)] = 3504,
  [SMALL_STATE(205)] = 3512,
  [SMALL_STATE(206)] = 3520,
  [SMALL_STATE(207)] = 3528,
  [SMALL_STATE(208)] = 3536,
  [SMALL_STATE(209)] = 3544,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 9),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 2, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigint, 4, .production_id = 13),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 13),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 7, .production_id = 11),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(104),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 5, .production_id = 9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_hint, 5, .production_id = 8),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_null, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(37),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 6, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(130),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 7, .production_id = 9),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 1, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 4, .production_id = 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_statement, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 5, .production_id = 6),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_table_expression, 3, .production_id = 7),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 12),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_statement, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delete_from, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [388] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
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
