# Phase 2 Notes

## Step 1 
- Introduced arrays as contiguous memory blocks
- Printed the value and address of each element.
- Observed that elements are stored one next to another in memory.
- Used `sizeof(array)`and `sizeof(array[0])` to reason about total size and number of elements

## Step 2 
- Compared `numbers`, `&numbers[0]`, and a pointer `p = numbers`.
- Observed that they can print the same address value.
- Confirmed that `numbers[0]`and `*p`access the same first element.
- Learn the key distinction:
    Arrays and points are closely related, but they are not the same thing 
- Used `sizeof` to see that the whole array and a pointer have different sizes.

## Step 3 
- Connected array indexing with pointer arithmetic.
- Observed that numbers[i] and *(numbers + i) access the same value
- Observed that &numbers[i] and (numbers + i) represend the same address
- Learned that pointer arithmetic moves by elements of the pointed type, not by a raw single bytes.

## Step 4
- Traversed an array by moving a pointer element by element
- Observed that p changes address while p reads the value at the current position
- Reinforced that pointer arithmetic move through contiguos memory by elements, not by raw bytes
- Distinguished between moving the pointer (p++) and modifying the the pointed value ((*p)++)