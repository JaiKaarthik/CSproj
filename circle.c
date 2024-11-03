#include <stdio.h>
#define PI 3.1416

int main() {
    double radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area: %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);
    return 0;
}
