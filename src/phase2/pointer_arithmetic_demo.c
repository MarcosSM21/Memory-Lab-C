#include <stdio.h>

int main(void){
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Comparing indexing and pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
        printf( "numbers[%d] =%d\n", i, numbers[i]);
        printf( "*(numbers + %d) = %d\n", i, *(numbers + i));
        printf(" &numbers[%d] =%p\n", i, (void *)&numbers[i]);
        printf(" (numbers + %d) =%p\n", i, (void *)(numbers + i));
        printf("\n");  
    }     

    return 0;
}