#include <stdio.h>

void_increment(int number){
    printf("Inside increment_copy (before_change):\n");
    printf(" number = %d at %p\n", number, (void*)&number);
    printf("----\n");

    number++;

    printf("Inside increment_copy (after_change):\n");
    printf(" number = %d at %p\n", number, (void*)&number);
    printf("----\n");
}


int main(void){
    
    int x = 10;

    printf("Inside main (before calling increment_copy):\n");
    printf(" x = %d at %p\n", x, (void*)&x);
    printf("\n");

    void_increment(x);

    printf("Inside main (after calling increment_copy):\n");
    printf(" x = %d at %p\n", x, (void*)&x);
    printf("\n");

    return 0;

}