#include <stdio.h>

int main(void) {
    int age = 24;
    double height = 1.75;
    char initial = 'M';

    printf("====Values===por \n");
    printf("age =%d\n", age);
    printf("height = %.2f\n", height);
    printf("initial = %c\n", initial);

    printf("\n====Sizes (in bytes) ====\n");
    printf("sizeof(age) = %zu\n", sizeof(age));
    printf("sizeof(height) = %zu\n", sizeof(height));
    printf("sizeof(initial) = %zu\n", sizeof(initial));

    printf("\n====Addresses ====\n");
    printf("Address of age: %p\n", (void*)&age);
    printf("Address of height: %p\n", (void*)&height);
    printf("Address of initial: %p\n", (void*)&initial);

    return 0;
}

