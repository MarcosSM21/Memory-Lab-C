# Phase 0 Notes

## Step 1
- Created the initial repository structure.
- Wrote the first C program.
- Compiled it manually with gcc.
- Understood the basic pipeline:
  source code -> compiler -> executable -> execution

  ## Step 2
- Learned the difference between compiler errors and warnings.
- Compiled using:
  -Wall
  -Wextra
  -Wpedantic
- Observed that a program can compile and run even when the compiler detects suspicious code.
- First lesson in C discipline: if there is a warning, stop and understand it.

## Step 3
- Created the first Makefile.
- Learned that a Makefile is a reproducible build recipe.
- Centralized compiler choice and warning flags.
- Added a clean command to remove generated binaries.

## Step 4 
- First direct contact with memory in C.
- Used `sizeof` to inspect how many bytes different variables occupy.
- Used `&` to obtain memory addresses.
- Learned that a variable is not just a name and a value: it also has a concrete location in memory.

## Step 5
- Compared local, global, and static local variables
- Learned that local variables are recreated on each function
- Learned that static local variables preserve their value between calls
- Learned that global variables also persist dor the whole program execution
- First strong intuition that program memory is organized into different conceptual regions.

