#include "tree_sitter/parser.h"
#include <stdlib.h>
#include <string.h>
#include <wctype.h>

enum TokenType {
  DOLLAR_STRING
};

#define MALLOC_STRING_SIZE 1024

void *tree_sitter_sql_external_scanner_create() {
  return NULL;
}

void *tree_sitter_sql_external_scanner_destroy(void *payload) {
}

char* add_char(char* text, int* text_size, char c, int index) {
  if (text == NULL) {
    text = malloc(sizeof(char) * MALLOC_STRING_SIZE);
    *text_size = MALLOC_STRING_SIZE;
    text[index] = c;
    text[index + 1] = '\0';
  }

  if (index + 1 == *text_size) {
    *text_size += MALLOC_STRING_SIZE;
    char* tmp = malloc(*text_size * sizeof(char));
    strcpy(tmp, text);
    free(text);
    text = tmp;
  }

  text[index] = c;
  text[index + 1] = '\0';
  return text;
}

char* scan_dollar_string_tag(TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[DOLLAR_STRING]) {
    return NULL;
  }

  char* tag = NULL;
  int index = 0;
  int* text_size = malloc(sizeof(int));
  *text_size = 0;
  if (lexer->lookahead == '$') {
    tag = add_char(tag, text_size, '$', index);
    lexer->advance(lexer, false);
  } else {
    return NULL;
  }

  while (iswalpha(lexer->lookahead)) {
    tag = add_char(tag, text_size, lexer->lookahead, ++index);
    lexer->advance(lexer, false);
  }

  if (lexer->lookahead == '$') {
    tag = add_char(tag, text_size, lexer->lookahead, ++index);
    lexer->advance(lexer, false);
    free(text_size);
    return tag;
  } else {
    free(tag);
    free(text_size);
    return NULL;
  }
}

bool tree_sitter_sql_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[DOLLAR_STRING]) {
    return false;
  }

  while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);

  char* start_tag = scan_dollar_string_tag(lexer, valid_symbols);
  if (start_tag == NULL) {
    return false;
  }

  char* end_tag = NULL;
  while (true) {
    if (lexer->eof(lexer)) {
      free(start_tag);
      free(end_tag);
      return false;
    }

    if (lexer->lookahead != '$') {
      lexer->advance(lexer, false);
      continue;
    }

    end_tag = scan_dollar_string_tag(lexer, valid_symbols);
    if (end_tag == NULL) {
      continue;
    }

    if (strcmp(end_tag, start_tag) == 0) {
      free(start_tag);
      free(end_tag);
      lexer->result_symbol = DOLLAR_STRING;
      return true;
    }

    free(end_tag);
    end_tag = NULL;
  }
}


unsigned tree_sitter_sql_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}


void tree_sitter_sql_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}
