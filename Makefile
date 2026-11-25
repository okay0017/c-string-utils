CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: build

build:
	$(CC) $(CFLAGS) -I src -o app src/main.c src/string_utils.c

test: build
	$(CC) $(CFLAGS) -I src -o test_runner tests/test_string_utils.c src/string_utils.c
	./test_runner
	@echo "All tests passed"

clean:
	rm -f app test_runner
