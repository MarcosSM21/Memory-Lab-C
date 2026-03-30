#include <stdio.h>

int main(void){
    int *p = NULL;

    printf("Value of p: %p\n", (void*)p);

    if (p == NULL) {
        printf("p is a null pointer, it does not point to a valid memory location.\n");
    } else {
        printf("p points to a valid memory location.\n");
    }
    return 0;

}