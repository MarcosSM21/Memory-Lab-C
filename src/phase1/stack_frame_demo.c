#include <stdio.h>

void inner_function(int inner_param) {
    int inner_local = 200;

    printf("Inside inner_function:\n");
    printf(" inner_param = %d at %p\n", inner_param, (void*)&inner_param);
    printf(" inner_local = %d at %p\n", inner_local, (void*)&inner_local);
    printf("----\n");
}

void outer_function(int outer_param) {
    int outer_local = 100;

    printf("Inside outer_function (before calling inner_function):\n");
    printf(" outer_param = %d at %p\n", outer_param, (void*)&outer_param);
    printf(" outer_local = %d at %p\n", outer_local, (void*)&outer_local);
    printf("----\n");

    inner_function(outer_param + 1);

    printf("Inside outer_function (after calling inner_function):\n");
    printf(" outer_param = %d at %p\n", outer_param, (void*)&outer_param);
    printf("outer_local = %d at %p\n", outer_local, (void*)&outer_local);
}


int main(void) {
    int main_local = 42;

    printf("Inside main:\n");
    printf(" main_local = %d at %p\n", main_local, (void*)&main_local);
    printf("\n");

    outer_function(main_local);

    return 0;
}