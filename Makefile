CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic

all: hello warnings sizes storage stack_demo pass_value pass_reference pointer_basics null_demo array_contiguity

hello:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/hello_memory.c -o bin/hello_memory

warnings:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/warnings_demo.c -o bin/warnings_demo

sizes:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/sizes_and_addresses.c -o bin/sizes_and_addresses

storage:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase0/storage_classes_demo.c -o bin/storage_classes_demo

stack_demo:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase1/stack_frame_demo.c -o bin/stack_frame_demo

pass_value:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase1/pass_by_value_demo.c -o bin/pass_by_value_demo

pass_reference:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase1/pass_by_reference_demo.c -o bin/pass_by_reference_demo

pointer_basics:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase1/pointer_basics_demo.c -o bin/pointer_basics_demo

null_demo:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase1/null_pointer_demo.c -o bin/null_pointer_demo

array_contiguity:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase2/array_contiguity_demo.c -o bin/array_contiguity_demo

clean:
	rm -rf bin/*