#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    else
        return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int num, rev;

    printf("Enter an integer: ");
    scanf("%d", &num);

    rev = reverseNumber(num, 0);

    printf("Reversed number: %d\n", rev);
    return 0;
}
