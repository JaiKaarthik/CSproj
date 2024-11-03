#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            if (mat[i][j] != mat[j][i]) {
                flag = 0;
                break;
            }

    if (flag)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
