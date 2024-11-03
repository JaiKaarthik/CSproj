#include <stdio.h>
#include <string.h>

int main() {
    char binary1[20], binary2[20];
    int i = 0, remainder = 0, sum[20];
    int length1, length2;

    printf("Enter first binary number: ");
    scanf("%s", binary1);

    printf("Enter second binary number: ");
    scanf("%s", binary2);

    length1 = strlen(binary1) - 1;
    length2 = strlen(binary2) - 1;

    while (length1 >= 0 || length2 >= 0 || remainder == 1) {
        int bit1 = (length1 >= 0) ? binary1[length1] - '0' : 0;
        int bit2 = (length2 >= 0) ? binary2[length2] - '0' : 0;

        sum[i++] = (bit1 + bit2 + remainder) % 2;
        remainder = (bit1 + bit2 + remainder) / 2;

        length1--;
        length2--;
    }

    printf("Sum of binary numbers: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", sum[i]);
    printf("\n");

    return 0;
}
