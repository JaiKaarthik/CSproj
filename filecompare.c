#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    char file1[100], file2[100];
    char c1, c2;
    int flag = 1;

    printf("Enter first filename: ");
    scanf("%s", file1);

    printf("Enter second filename: ");
    scanf("%s", file2);

    fptr1 = fopen(file1, "r");
    fptr2 = fopen(file2, "r");

    if (fptr1 == NULL || fptr2 == NULL) {
        printf("Error opening files.\n");
        return 0;
    }

    while (((c1 = fgetc(fptr1)) != EOF) && ((c2 = fgetc(fptr2)) != EOF)) {
        if (c1 != c2) {
            flag = 0;
            break;
        }
    }

    if (flag && (fgetc(fptr1) == EOF) && (fgetc(fptr2) == EOF))
        printf("Files are identical.\n");
    else
        printf("Files are different.\n");

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
