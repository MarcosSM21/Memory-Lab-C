# include <stdio.h>

void_increment_original(int *numer_ptr){
    printf("Inside increment_original (before_change):\n");
    printf(" *numer_ptr = %d at %p\n", *numer_ptr, (void*)numer_ptr);
    printf("----\n");

    (*numer_ptr)++;

    printf("Inside increment_original (after_change):\n");
    printf(" *numer_ptr = %d at %p\n", *numer_ptr, (void*)numer_ptr);
    printf("----\n");
}

int main(void){
    int x = 10;

    printf("Inside main (before calling increment_original):\n");
    printf(" x = %d at %p\n", x, (void*)&x);
    printf("\n");

    void_increment_original(&x);

    printf("Inside main (after calling increment_original):\n");
    printf(" x = %d at %p\n", x, (void*)&x);
    printf("\n");

    return 0;
}