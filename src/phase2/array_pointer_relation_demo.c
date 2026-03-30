#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;

    printf("Addresses:\n");
    printf("  numbers      = %p\n", (void *)numbers);
    printf("  &numbers[0]  = %p\n", (void *)&numbers[0]);
    printf("  p            = %p\n", (void *)p);
    printf("\n");

    printf("Values:\n");
    printf("  numbers[0]   = %d\n", numbers[0]);
    printf("  *p           = %d\n", *p);
    printf("\n");

    printf("Sizes:\n");
    printf("  sizeof(numbers)     = %zu\n", sizeof(numbers));
    printf("  sizeof(&numbers[0]) = %zu\n", sizeof(&numbers[0]));
    printf("  sizeof(p)           = %zu\n", sizeof(p));
    printf("\n");

    return 0;
}