#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    static int multiple = 0;
    multiple += b;
    if ((multiple % a == 0) && (multiple % b == 0))
        return multiple;
    else
        return lcm(a, b);
}

int main() {
    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    result = (num1 * num2) / gcd(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, result);
    return 0;
}
