#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char c;
    int count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Cannot open file %s \n", filename);
        return 0;
    }

    while ((c = fgetc(fptr)) != EOF)
        count++;

    fclose(fptr);

    printf("Number of characters in %s: %d\n", filename, count);

    return 0;
}
