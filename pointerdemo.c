#include <stdio.h>

int main() {
    int var = 10;
    int *ptr;

    ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", (void*)ptr);

    return 0;
}
