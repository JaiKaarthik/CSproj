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
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
