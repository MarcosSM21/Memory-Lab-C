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