TARGETS=main
CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic

all: $(TARGETS)

main: main.c
	$(CC) $(CFLAGS) -lmingw32 -lSDL2main -lSDL2 -o $@ $<

clean: 
	@rm -f $(TARGETS) a.out *.o
