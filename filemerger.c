#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2, *fptr3;
    char file1[100], file2[100], merged_file[100];
    char c;

    printf("Enter first filename: ");
    scanf("%s", file1);

    printf("Enter second filename: ");
    scanf("%s", file2);

    printf("Enter the filename for the merged content: ");
    scanf("%s", merged_file);

    fptr1 = fopen(file1, "r");
    fptr2 = fopen(file2, "r");
    fptr3 = fopen(merged_file, "w");

    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL) {
        printf("Error opening files.\n");
        return 0;
    }

    while ((c = fgetc(fptr1)) != EOF)
        fputc(c, fptr3);

    while ((c = fgetc(fptr2)) != EOF)
        fputc(c, fptr3);

    printf("Files merged successfully.\n");

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    return 0;
}
