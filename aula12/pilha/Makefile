CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99 -g
LDFLAGS=
LDLIBS=

PROGRAM=test_stack

$(PROGRAM): $(PROGRAM).o stack.o

$(PROGRAM).o: $(PROGRAM).c stack.h

stack.o: stack.c stack.h

.PHONY: clean
clean:
	rm -f $(PROGRAM) *.o
