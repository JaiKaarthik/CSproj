#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int roll;
    struct Date dob;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    gets(s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Date of Birth: %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
