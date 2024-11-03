#include <stdio.h>

int sumArray(int *arr, int n) {
    int sum = 0, i;
    for (i = 0; i < n; ++i)
        sum += *(arr + i);
    return sum;
}

int main() {
    int n, i, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; ++i)
        scanf("%d", arr + i);

    printf("Sum of elements: %d\n", sumArray(arr, n));

    return 0;
}
