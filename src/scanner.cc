#include <tree_sitter/parser.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>

namespace {

  using std::vector;
  using std::string;

  enum TokenType {
    START_DOLLAR_QUOTE,
    END_DOLLAR_QUOTE
  };

  struct Scanner {
    Scanner() {}

    unsigned serialize(char *buffer) {
      uint16_t tag_count = quotes.size() > UINT16_MAX ? UINT16_MAX : quotes.size();
      uint16_t serialized_tag_count = 0;

      unsigned i = sizeof(tag_count);
      std::memcpy(&buffer[i], &tag_count, sizeof(tag_count));
      i += sizeof(tag_count);

      for (; serialized_tag_count < tag_count; serialized_tag_count++) {
        string &quote = quotes[serialized_tag_count];
        unsigned name_length = quote.size();
        if (name_length > UINT8_MAX) name_length = UINT8_MAX;
        if (i + 2 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) break;
        buffer[i++] = name_length;
        quote.copy(&buffer[i], name_length);
        i += name_length;
      }

      std::memcpy(&buffer[0], &serialized_tag_count, sizeof(serialized_tag_count));
      return i;
    }

    void deserialize(const char *buffer, unsigned length) {
      quotes.clear();
      if (length > 0) {
        unsigned i = 0;
        uint16_t tag_count, serialized_tag_count;

        std::memcpy(&serialized_tag_count, &buffer[i], sizeof(serialized_tag_count));
        i += sizeof(serialized_tag_count);

        std::memcpy(&tag_count, &buffer[i], sizeof(tag_count));
        i += sizeof(tag_count);

        quotes.resize(tag_count);
        for (unsigned j = 0; j < serialized_tag_count; j++) {
          string &quote = quotes[j];
          uint16_t name_length = static_cast<uint8_t>(buffer[i++]);
          quote.assign(&buffer[i], &buffer[i + name_length]);
          i += name_length;
        }
      }
    }

    bool scan_dollar_quote(TSLexer *lexer) {
      string quote;
      printf("check");
      printf("start %s", lexer->lookahead);
      while (iswalnum(lexer->lookahead) || lexer->lookahead == '_') {
        printf("in %s", lexer->lookahead);
        quote += towupper(lexer->lookahead);
        lexer->advance(lexer, false);
      }

      printf("check");
      if (quote.empty()) return false; // this line segfaults
      printf("check2");

      if (!quotes.empty() && quotes.back() == quote) {
        quotes.pop_back();
        lexer->result_symbol = END_DOLLAR_QUOTE;
      } else {
        quotes.push_back(quote);
        lexer->result_symbol = START_DOLLAR_QUOTE;
      }
      return true;
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
      while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
      }

      switch (lexer->lookahead) {
        case '$':
          printf("dollar");
          lexer->mark_end(lexer);
          lexer->advance(lexer, false);

          break;

        default:
          if ((valid_symbols[START_DOLLAR_QUOTE] || valid_symbols[END_DOLLAR_QUOTE])) {
            printf("scanning");
            return scan_dollar_quote(lexer);
          }
      }

      return false;
    }

    vector<string> quotes;
  };

}

extern "C" {

  void *tree_sitter_sql_external_scanner_create() {
    return new Scanner();
  }

  bool tree_sitter_sql_external_scanner_scan(void *payload, TSLexer *lexer,
      const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_sql_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_sql_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
  }

  void tree_sitter_sql_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

}
