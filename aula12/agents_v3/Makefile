CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99 -g
LDFLAGS=
LDLIBS=-lg2

PROGRAM=test_agents
CANVAS=world_canvas_g2
#CANVAS=world_canvas_ascii

$(PROGRAM): $(PROGRAM).o $(CANVAS).o world.o

$(PROGRAM).o: $(PROGRAM).c agent.h world.h world_canvas.h

world.o: world.c world.h agent.h

$(CANVAS).o: $(CANVAS).c world_canvas.h world.h agent.h

.PHONY: clean
clean:
	rm -f $(PROGRAM) *.o
