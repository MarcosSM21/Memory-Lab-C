CC = gcc 
CFLAGS = -Wall -Wextra -Wpedantic

all : hello warnings size

hello :
	mkdir -p bin 
	$(CC) $(CFLAGS) src/phase0/hello_memory.c -o bin/hello_memory

warnings :
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/warnings_demo.c -o bin/warnings_demo

size :
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/size_and_addresses.c -o bin/size_and_addresses

clean: 
	rm -rf bin

