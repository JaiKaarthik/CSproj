#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point p1, p2;
    float dist;

    printf("Enter coordinates of first point (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates of second point (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    dist = distance(p1, p2);

    printf("Distance between points: %.2f\n", dist);

    return 0;
}
