#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product, quotient;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    if (num2 != 0)
        quotient = num1 / num2;
    else
        quotient = 0;

    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Product: %.2lf\n", product);
    if (num2 != 0)
        printf("Quotient: %.2lf\n", quotient);
    else
        printf("Cannot divide by zero.\n");

    return 0;
}
