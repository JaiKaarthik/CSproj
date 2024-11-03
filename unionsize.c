#include <stdio.h>

union Example {
    int a;
    double b;
    char c;
};

int main() {
    union Example ex;

    printf("Size of union: %zu bytes\n", sizeof(ex));

    return 0;
}
