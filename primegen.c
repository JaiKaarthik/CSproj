#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int lower, upper, i;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; ++i)
        if (isPrime(i))
            printf("%d ", i);
    printf("\n");

    return 0;
}
