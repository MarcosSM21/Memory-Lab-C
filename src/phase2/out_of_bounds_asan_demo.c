#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Valid last element:\n");
    printf("  numbers[4] = %d\n", numbers[4]);

    printf("\nNow accessing out-of-bounds element:\n");
    printf("  numbers[5] = %d\n", numbers[5]);

    return 0;
}