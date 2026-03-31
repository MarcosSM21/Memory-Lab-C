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

## Step 5
- Introduced use-after-free as reading or writing memory after is has been freed.
- Learned that after free, the pointer variable may still exist, but the pointed block is no longer valid.
- Observed an intentional heap-use-after-free with AddressSanitizer.
- Reinforced the safety practice:
   free the block, then set the pointer to NULL if it may be reused.

## Step 6
- Introduced double free as calling free twice on the same allocated block
- Learned that the first free is valid, but the second one is error.
- Observed a double-free report with AddressSanitier.
- Learned the defensive pattern:
   free the block, then set the pointer to NULL
- Noted that free(NULL) is safe and does nothing.

## Step 7
- Introduced realloc as a way to resize a dynamically allocated block.
- Learned that the block may stay in place or move to a new address.
- Observed that existing data is preserved on successful reallocation.
- Reinforced the safer pattern of assigning realloc to a temporary pointer first
- Noted that newly added memory must be initialized before reading
