CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic
ASAN_FLAGS = -fsanitize=address -g

all: hello warnings sizes storage stack_demo pass_value pass_reference pointer_basics null_demo array_contiguity array_pointer_relation pointer_arithmetic pointer_walk pointer_write out_of_bounds out_of_bounds_asan malloc_intro stack_vs_heap

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

array_pointer_relation:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase2/array_pointer_relation_demo.c -o bin/array_pointer_relation_demo

pointer_arithmetic:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase2/pointer_arithmetic_demo.c -o bin/pointer_arithmetic_demo

pointer_walk:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase2/pointer_walk_demo.c -o bin/pointer_walk_demo

pointer_write:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase2/pointer_write_demo.c -o bin/pointer_write_demo

out_of_bounds:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase2/out_of_bounds_demo.c -o bin/out_of_bounds_demo

out_of_bounds_asan:
	mkdir -p bin
	$(CC) $(CFLAGS) $(ASAN_FLAGS) src/phase2/out_of_bounds_asan_demo.c -o bin/out_of_bounds_asan_demo

malloc_intro:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase3/malloc_intro_demo.c -o bin/malloc_intro_demo

stack_vs_heap:
	mkdir -p bin
	$(CC) $(CFLAGS) src/phase3/stack_vs_heap_demo.c -o bin/stack_vs_heap_demo

clean:
	rm -rf bin/*