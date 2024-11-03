#include <stdio.h>

int main() {
    FILE *source, *target;
    char source_file[100], target_file[100];
    char c;

    printf("Enter source filename: ");
    scanf("%s", source_file);

    source = fopen(source_file, "r");

    if (source == NULL) {
        printf("Cannot open source file %s \n", source_file);
        return 0;
    }

    printf("Enter target filename: ");
    scanf("%s", target_file);

    target = fopen(target_file, "w");

    if (target == NULL) {
        fclose(source);
        printf("Cannot open target file %s \n", target_file);
        return 0;
    }

    while ((c = fgetc(source)) != EOF)
        fputc(c, target);

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}
