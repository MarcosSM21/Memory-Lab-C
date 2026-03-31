# Phase 3 Notes

## Step 1
- Introduced dynamic memory allocation with malloc.
- Understood the motivation: allocate memory at runtime when size is decided during execution.
- Learned that malloc returns the address of a contiguous memory block.
- Practiced the basic safe pattern:
   allocate
   check for NULL
   use
   free
   optionally set pointer to NULL

## Step 2 
- Compared stack objects and heap-allocated memory in a single program.
- Learned that a local pointer variable and the heap block it points to are differente objects.
- Observed the distinction between:
   &heap_array -> address of the local pointer
   heap_array  -> address of the heap block
- Reinforced that both local arrays and the heap arrays are contiguous memory blocks, but their lifetime and management differ.

## Step 3
- Learned that malloc allocates memory but does not initialize it.
- Reinforced the rule: do not read malloc-allocated memory before writing valid values into it.
- Compared malloc with calloc, which zero-initializes the allocated block
- Practiced a safe patten for both:
   allocate, check, initialize if needed, use, free.

## Step 4
- Introduced memory leaks as dynamically allocated blocks that are never freed.
- Learned that leaks often do not crash the program immediately, which makes them dangerous.
- Triggered an intentional leak for educational purposes.
- Used AddressSanitizer/LeakSanitizer instrumentation to detect the leak at runtime.
- Reinforced the design rule:
   every dynamic allocation should have a clear free plan.

