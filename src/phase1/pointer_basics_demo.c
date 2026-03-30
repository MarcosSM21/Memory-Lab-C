#include <stdio.h>

int main(void){
    int x = 10;
    int *p = &x;

    printf("Initial state:\n");
    printf(" x = %d\n", x);
    printf("&x = %p\n", (void*)&x);
    printf(" p = %p\n", (void*)p);
    printf("*p = %d\n", *p);
    printf("----\n");

    *p = 25;

    printf("After modifying *p:\n");
    printf(" x = %d\n", x);
    printf("&x = %p\n", (void*)&x);
    printf(" p = %p\n", (void*)p);
    printf("*p = %d\n", *p);
    printf("----\n");

    return 0;
}