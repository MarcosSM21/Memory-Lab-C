#include <stdio.h>
#include <stdlib.h>

int main(void){
    int count = 5;
    int *numbers = malloc(count * sizeof(int));
    
    if (numbers == NULL) {
        printf("Memory allocation failed. \n");
        return 1;
    }

    for (int i=0; i < count; i++) {
        numbers[i] = (i+1) * 10;
    }

    printf("Allocated array:\n");
    for (int i = 0; i < count; i++) {
        printf("  numbers[%d] = %d at %p\n", i, numbers[i], (void *)&numbers[i]);
    }

    printf("\nIntentional mistake: program ends without free(numbers).\n");

    return 0;
}