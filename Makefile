ts := $(shell which tree-sitter 2> /dev/null)
ifeq (, ${ts})
	ts := $(shell which tree-sitter-cli 2> /dev/null)
endif

generate:
	${ts} generate

test: generate
	${ts} test

compile: generate
	gcc -shared -o target/parser.so -fPIC src/parser.c -I./src
