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