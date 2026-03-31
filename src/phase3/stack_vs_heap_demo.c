#include <stdio.h>
#include <stdlib.h>

int main(void){
    int local_value = 42;
    int local_array[3] = {1,2,3};

    int *heap_array = malloc(3 * sizeof(int));
    if (heap_array == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i =0; i < 3; i++){
        heap_array[i] = (i+1) * 100;
    }
    
    printf("=== Stack objects ===\n");
    printf("local_value           = %d at %p\n", local_value, (void *)&local_value);
    printf("local_array           starts at %p\n", (void *)local_array);
    printf("&local_array[0]       = %p\n", (void *)&local_array[0]);
    printf("&local_array[1]       = %p\n", (void *)&local_array[1]);
    printf("&local_array[2]       = %p\n", (void *)&local_array[2]);
    printf("&heap_array (pointer) = %p\n", (void *)&heap_array);

    printf("\n=== Heap block ===\n");
    printf("heap_array            = %p\n", (void *)heap_array);
    printf("&heap_array[0]        = %p, value = %d\n", (void *)&heap_array[0], heap_array[0]);
    printf("&heap_array[1]        = %p, value = %d\n", (void *)&heap_array[1], heap_array[1]);
    printf("&heap_array[2]        = %p, value = %d\n", (void *)&heap_array[2], heap_array[2]);

    free(heap_array);
    heap_array = NULL;

    return 0;
}