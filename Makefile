CC = gcc 
CFLAGS = -Wall -Wextra -Wpedantic

all : hello warnings

hello :
	mkdir -p bin 
	$(CC) $(CFLAGS) src/phase0/hello_memory.c -o bin/hello_memory

warnings :
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/warnings_demo.c -o bin/warnings_demo

clean: 
	rm -rf bin

