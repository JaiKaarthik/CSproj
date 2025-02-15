#include <stdio.h>

void sortArray(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
}

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; ++i)
        scanf("%d", arr + i);

    sortArray(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; ++i)
        printf("%d ", *(arr + i));
    printf("\n");

    return 0;
}
