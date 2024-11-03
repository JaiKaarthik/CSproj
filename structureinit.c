#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Person p1 = {"Alice", 30, 55000.50};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Salary: %.2f\n", p1.salary);

    return 0;
}
