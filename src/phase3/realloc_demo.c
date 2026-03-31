#include <stdio.h>
#include <stdlib.h>

int main(void){
    int initial_count = 3;
    int new_count = 6;

    int *numbers = malloc(initial_count * sizeof(int));
    if (numbers==NULL){
        printf("Initial allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < initial_count; i++){
        numbers[i] = (i+1)*10;
    }
    printf("Before realloc:\n");
    printf("  numbers pointer = %p\n", (void *)numbers);
    for (int i = 0; i < initial_count; i++) {
        printf("  numbers[%d] = %d at %p\n", i, numbers[i], (void *)&numbers[i]);
    }

    int *temp = realloc(numbers, new_count * sizeof(int));
    if (temp == NULL){
        printf("\nReallocation failed.\n");
        free(numbers);
        return 1;
    }

    numbers = temp;

    for (int i = initial_count; i < new_count; i++){
        numbers[i] = (i+1) * 10;
    }

    printf("\nAfter realloc:\n");
    printf("  numbers pointer = %p\n", (void *)numbers);
    for (int i = 0; i < new_count; i++) {
        printf("  numbers[%d] = %d at %p\n", i, numbers[i], (void *)&numbers[i]);
    }

    free(numbers);
    numbers = NULL;

    return 0;

}