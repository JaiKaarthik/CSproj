#include <stdio.h>

int main() {
    int sum = 0, i;

    for (i = 2; i <= 100; i += 2)
        sum += i;

    printf("Sum of even numbers between 1 and 100: %d\n", sum);
    return 0;
}
