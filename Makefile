CC = gcc 
CFLAGS = -Wall -Wextra -Wpedantic

all : hello warnings size storage stack_demo pass_value

hello :
	mkdir -p bin 
	$(CC) $(CFLAGS) src/phase0/hello_memory.c -o bin/hello_memory

warnings :
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/warnings_demo.c -o bin/warnings_demo

size :
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/size_and_addresses.c -o bin/size_and_addresses

storage :
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/storage_classes_demo.c -o bin/storage_classes_demo

stack_demo:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase1/stack_frame_demo.c -o bin/stack_frame_demo

pass_value:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase1/pass_by_value_demo.c -o bin/pass_by_value_demo

clean: 
	rm -rf bin

