#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 5;

    int *with_malloc = malloc(count * sizeof(int));
    int *with_calloc = calloc(count, sizeof(int));

    if (with_malloc == NULL || with_calloc == NULL){
        printf("Memory allocation failed.\n");
        free(with_malloc);
        free(with_calloc);
        return 1;
    }

    printf("Memory allocated with malloc: DO NOT READ before initialization.\n");
    for (int i = 0; i < count; i++) {
        with_malloc[i] = (i+1) * 10;
    }

    printf("\n Values after manual initialization of malloc block:\n");
    for (int i = 0; i <count; i++){
        printf( "with_malloc[%d] = %d at %p\n", i, with_malloc[i], (void *)&with_malloc[i]);
    }

    printf("\nValues from calloc block (automatically zero-initialized):\n");
    for (int i = 0; i < count; i++) {
        printf("  with_calloc[%d] = %d at %p\n", i, with_calloc[i], (void *)&with_calloc[i]);
    }

    free(with_malloc);
    free(with_calloc);
    with_malloc = NULL;
    with_calloc = NULL;

    return 0;

}