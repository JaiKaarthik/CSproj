#include <stdio.h>

int main() {
    int n, i, first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    if (n < 2) {
        printf("Need at least two elements.\n");
        return 0;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    first = second = arr[0];

    for (i = 1; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Second largest element: %d\n", second);
    return 0;
}
