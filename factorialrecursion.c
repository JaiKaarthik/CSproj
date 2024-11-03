#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n -1);
}

int main() {
    int num;
    unsigned long long fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d = %llu\n", num, fact);
    return 0;
}
