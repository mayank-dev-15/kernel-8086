CC=gcc
CFLAGS=-Wall -Wextra -O2 -std=c11
all: main
main: src/main.c src/core.c
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm -f main *.o
test: main
	./main
