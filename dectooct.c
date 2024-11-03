#include <stdio.h>

void decimalToOctal(int n) {
    if (n >= 8)
        decimalToOctal(n / 8);
    printf("%d", n % 8);
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Octal equivalent: ");
    decimalToOctal(num);
    printf("\n");

    return 0;
}
