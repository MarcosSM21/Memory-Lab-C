# Memory Lab in C

A personal learning project to understand memory, pointers, stack, heap, and low-level programming in C.

## Goal
Build a small educational lab in C to explore how memory works in real programs.

## Status
Phase 0 started: environment setup, first compilation, first executable.

## Build

Compile all programs:

```bash```
make

## Current experiments

- `hello_memory`: first executable
- `warnings_demo`: disciplined compilation with warnings
- `sizes_addresses`: first inspection of variable sizes and memory addresses
- `storage_classes_demo`: compares local, global and static variables, and shows how lifetime affects behavior
- `stack_frame_demo`: shows how function calls create separate local contexts in memory
- `pass_by_value_demo`: proves that modifying a function parameter does not change the original variable
- `pass_by_reference_demo`: uses a pointer to modify the original variable through its memory address
- `null_pointer_demo`: introduces `NULL` and the basic rule that invalid pointers must not be dereferenced
- `array_contiguity_demo`: shows that array elements are stored contiguously in memory
- `array_pointer_relation_demo`: compares an array name, the address of its first element, and a pointer to show their relation and differences
- `pointer_arithmetic_demo`: shows the connection between array indexing and pointer arithmetic
- `pointer_walk_demo`: walks through an array using a pointer and shows the current address and value at each step
- `pointer_write_demo`: traverses an array with a pointer and modifies each element through direct memory writes
- `out_of_bounds_demo`: introduces array bounds checking and explains why out-of-range access is invalid
- `out_of_bounds_asan_demo`: intentionally triggers an out-of-bounds access and shows how AddressSanitizer reports it
- `malloc_intro_demo`: introduces dynamic allocation with `malloc` and the basic allocate-check-use-free pattern
- `stack_vs_heap_demo`: compares local stack objects with a dynamically allocated heap block and distinguishes a pointer from the memory it points to
- `malloc_vs_calloc_demo`: compares raw dynamic allocation with `malloc` against zero-initialized allocation with `calloc`
- `memory_leak_demo`: intentionally omits `free` to illustrate what a memory leak is and how sanitizers can report it
- `use_after_free_demo`: intentionally triggers a heap-use-after-free and shows how AddressSanitizer reports it