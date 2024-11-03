#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, j;
    struct Student temp;

    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];

    for (i = 0; i < n; ++i) {
        printf("Enter name, roll number and marks for student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Sorting based on marks
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

    printf("\nStudents sorted by marks in descending order:\n");
    for (i = 0; i < n; ++i)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);

    return 0;
}
