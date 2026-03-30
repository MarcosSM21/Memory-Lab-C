#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;

    printf("Original array:\n");
    for (int i = 0; i < 5; i++) {
        printf("  numbers[%d] = %d at %p\n", i, numbers[i], (void *)&numbers[i]);
    }

    printf("\nModifying array through pointer:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Step %d:\n", i);
        printf("  p points to %p\n", (void *)p);
        printf("  value before = %d\n", *p);

        *p = *p + 5;

        printf("  value after  = %d\n", *p);
        printf("\n");

        p++;
    }

    printf("Final array:\n");
    for (int i = 0; i < 5; i++) {
        printf("  numbers[%d] = %d at %p\n", i, numbers[i], (void *)&numbers[i]);
    }

    return 0;
}