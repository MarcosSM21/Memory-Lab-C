#include <stdio.h>

int main(void){
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array elements and their addresses:\n");

    for (int i=0; i<5; i++){
        printf("numbers[%d] = %d at address %p\n", i, numbers[i], (void*)&numbers[i]);
    }

    printf("\nArray summary:\n");
    printf(" sizeof(numbers) = %zu bytes\n", sizeof(numbers));
    printf(" sizeof(numbers[0]) = %zu bytes\n", sizeof(numbers[0]));
    printf(" Total elements in array = %zu\n", sizeof(numbers) / sizeof(numbers[0]));

    return 0;
    
}