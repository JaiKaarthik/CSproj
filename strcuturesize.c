#include <stdio.h>

struct Example {
    int a;
    double b;
    char c;
};

int main() {
    struct Example ex;

    printf("Size of structure: %zu bytes\n", sizeof(ex));

    return 0;
}
