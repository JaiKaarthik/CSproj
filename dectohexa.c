#include <stdio.h>

void decimalToHexadecimal(int n) {
    if (n == 0)
        return;
    decimalToHexadecimal(n / 16);
    int rem = n % 16;
    if (rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem - 10 + 'A');
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Hexadecimal equivalent: ");
    if (num == 0)
        printf("0");
    else
        decimalToHexadecimal(num);
    printf("\n");

    return 0;
}
