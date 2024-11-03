#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

int main() {
    struct Complex num1, num2, result;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    result = add(num1, num2);

    printf("Sum = %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
