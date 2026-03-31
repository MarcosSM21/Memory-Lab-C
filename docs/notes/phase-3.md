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