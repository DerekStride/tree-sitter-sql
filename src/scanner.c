#include "tree_sitter/parser.h"
#include <stdlib.h>
#include <string.h>
#include <wctype.h>

enum TokenType {
  DOLLAR_QUOTED_STRING_START_TAG,
  DOLLAR_QUOTED_STRING_CONTENT,
  DOLLAR_QUOTED_STRING_END_TAG
};

#define MALLOC_STRING_SIZE 1024

typedef struct LexerState {
  char* start_tag;
} LexerState;

void *tree_sitter_sql_external_scanner_create() {
  LexerState *state = malloc(sizeof(LexerState));
  state->start_tag = NULL;
  return state;
}

void *tree_sitter_sql_external_scanner_destroy(void *payload) {
  LexerState *state = (LexerState*)payload;
  if (state->start_tag != NULL) {
    free(state->start_tag);
    state->start_tag = NULL;
  }
  free(payload);
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

char* scan_dollar_string_tag(TSLexer *lexer) {
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
  LexerState *state = (LexerState*)payload;
  if (valid_symbols[DOLLAR_QUOTED_STRING_START_TAG] && state->start_tag == NULL) {
    while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);

    char* start_tag = scan_dollar_string_tag(lexer);
    if (start_tag == NULL) {
      return false;
    }
    if (state->start_tag != NULL) {
      free(state->start_tag);
      state->start_tag = NULL;
    }
    state->start_tag = start_tag;
    lexer->result_symbol = DOLLAR_QUOTED_STRING_START_TAG;
    return true;
  }

  if (valid_symbols[DOLLAR_QUOTED_STRING_END_TAG] && state->start_tag != NULL) {
    while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);

    char* end_tag = scan_dollar_string_tag(lexer);
    if (end_tag != NULL && strcmp(end_tag, state->start_tag) == 0) {
      free(state->start_tag);
      state->start_tag = NULL;
      lexer->result_symbol = DOLLAR_QUOTED_STRING_END_TAG;
      free(end_tag);
      return true;
    }
    if (end_tag != NULL) {
      free(end_tag);
    }
    return false;
  }

  if (valid_symbols[DOLLAR_QUOTED_STRING_CONTENT] && state->start_tag != NULL) {
    char* end_tag = NULL;
    // Needed to not capture the ending tag in the DOLLAR_QUOTED_STRING_CONTENT
    // token.
    lexer->mark_end(lexer);
    while (true) {
      if (lexer->eof(lexer)) {
        if (end_tag != NULL) {
          free(end_tag);
        }
        lexer->result_symbol = DOLLAR_QUOTED_STRING_CONTENT;
        return true;
      }

      end_tag = scan_dollar_string_tag(lexer);
      if (end_tag != NULL && strcmp(end_tag, state->start_tag) == 0) {
      lexer->result_symbol = DOLLAR_QUOTED_STRING_CONTENT;
      free(end_tag);
        return true;
      }

      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    }

    return true;
  }

  return false;
}

unsigned tree_sitter_sql_external_scanner_serialize(void *payload, char *buffer) {
  LexerState *state = (LexerState *)payload;
  if (state == NULL || state->start_tag == NULL) {
    return 0;
  }
  // + 1 for the '\0'
  int tag_length = strlen(state->start_tag) + 1;
  if (tag_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    return 0;
  }
  strcpy(buffer, state->start_tag);
  if (state->start_tag != NULL) {
    free(state->start_tag);
    state->start_tag = NULL;
  }
  return tag_length;
}

void tree_sitter_sql_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  LexerState *state = (LexerState *)payload;
  state->start_tag = NULL;
  // A length of 1 can't exists.
  if (length > 1) {
    state->start_tag = malloc(length - 1);
    strcpy(state->start_tag, buffer);
  }
}
