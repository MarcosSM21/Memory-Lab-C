#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};
    int requested_index = 5;
    int valid_size = 5;

    printf("Array contents:\n");
    for (int i = 0; i < valid_size; i++) {
        printf("  numbers[%d] = %d at %p\n", i, numbers[i], (void *)&numbers[i]);
    }

    printf("\nRequested index: %d\n", requested_index);

    if (requested_index < 0 || requested_index >= valid_size) {
        printf("ERROR: index %d is out of bounds for an array of size %d.\n",
               requested_index, valid_size);
        printf("We must NOT access numbers[%d].\n", requested_index);
    } else {
        printf("numbers[%d] = %d\n", requested_index, numbers[requested_index]);
    }

    return 0;
}