#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    i = strlen(str1);

    for (j = 0; str2[j]; ++j, ++i)
        str1[i] = str2[j];
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}
