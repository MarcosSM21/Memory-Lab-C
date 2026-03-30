# Phase 1 Notes

## Step 1
- First intuition of stack frames
- Observed that each function call has its own local context
- Parameters also occupy memory inside the called function
- Saw that nested function calls create nested stack contexts
- Understood that local variables exist only while their function call is active

## Step 2 
- Demonstrated true pass-by-value in C.
- A function parameter receives a copy of the argument value.
- Modifying the parameter does not modify the original value.
- Confirmed this by comparing both values and addresses.

## Step 3
- First intuitive use of pointers to modify an original variable
- Passed the address of a variable with `&x`
- Used a pointer parameter `int *number_ptr`
- Used `*number_ptr` to read and modify the value at that address.
- Understood the conceptual bridge:
    - `&x` gives and address
    - `*p` accesses the value at that address

