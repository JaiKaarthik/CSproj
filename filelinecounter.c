#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char c;
    int lines = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Cannot open file %s \n", filename);
        return 0;
    }

    while ((c = fgetc(fptr)) != EOF) {
        if (c == '\n')
            lines++;
    }

    fclose(fptr);

    printf("Number of lines in %s: %d\n", filename, lines + 1);

    return 0;
}
