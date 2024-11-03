#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], str[1000];

    printf("Enter the filename to append to: ");
    scanf("%s", filename);

    fptr = fopen(filename, "a");

    if (fptr == NULL) {
        printf("Cannot open file %s \n", filename);
        return 0;
    }

    printf("Enter text to append to the file:\n");
    getchar(); // To consume the newline character
    gets(str);

    fprintf(fptr, "%s", str);
    fclose(fptr);

    printf("Data successfully appended to %s\n", filename);

    return 0;
}
