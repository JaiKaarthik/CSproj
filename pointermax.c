#include <stdio.h>

int max(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int main() {
    int num1, num2, maximum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    maximum = max(&num1, &num2);

    printf("Maximum: %d\n", maximum);

    return 0;
}
