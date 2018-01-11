CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99 -g
LDFLAGS=
LDLIBS=

PROGRAM=aloca

$(PROGRAM): $(PROGRAM).o

$(PROGRAM).o: $(PROGRAM).c

.PHONY: clean
clean:
	rm -f $(PROGRAM) $(PROGRAM).o
