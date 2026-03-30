#include <stdio.h>

int global_counter = 100;

void observe_variables() {
    int local_counter = 1;
    static int static_counter = 1;

    local_counter++;
    static_counter++;
    global_counter++;

    printf("local_counter = %d at %p\n", local_counter, (void*)&local_counter);
    printf("static_counter = %d at %p\n", static_counter, (void*)&static_counter);
    printf("global_counter = %d at %p\n", global_counter, (void*)&global_counter);
    printf("----\n");
}

int main(void) {
    printf("First call to observe_variables:\n");
    observe_variables();

    printf("Second call to observe_variables:\n");
    observe_variables();

    return 0;
}