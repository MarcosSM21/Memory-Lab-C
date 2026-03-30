#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;

    printf("Walking through the array with a pointer:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Step %d:\n", i);
        printf("  p  = %p\n", (void *)p);
        printf("  *p = %d\n", *p);
        printf("\n");

        p++;
    }

    return 0;
}