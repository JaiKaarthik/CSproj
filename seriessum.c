#include <stdio.h>

int main() {
    int a, d, n, sum;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common difference (d): ");
    scanf("%d", &d);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    sum = (n * (2 * a + (n -1) * d)) / 2;

    printf("Sum of the arithmetic series: %d\n", sum);

    return 0;
}
