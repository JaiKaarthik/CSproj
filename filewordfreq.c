#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char filename[100], word[50], temp[50];
    int count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Enter the word to find its frequency: ");
    scanf("%s", word);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Cannot open file %s \n", filename);
        return 0;
    }

    while (fscanf(fptr, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0)
            count++;
    }

    fclose(fptr);

    printf("The word '%s' occurs %d times in the file.\n", word, count);

    return 0;
}
