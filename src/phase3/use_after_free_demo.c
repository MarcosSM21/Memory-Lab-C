#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *numbers = malloc(3 * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        numbers[i] = (i + 1) * 100;
    }

    printf("Before free:\n");
    for (int i = 0; i < 3; i++) {
        printf("  numbers[%d] = %d at %p\n", i, numbers[i], (void *)&numbers[i]);
    }

    free(numbers);

    printf("\nIntentional mistake: reading after free.\n");
    printf("  numbers[0] = %d\n", numbers[0]);

    return 0;
}