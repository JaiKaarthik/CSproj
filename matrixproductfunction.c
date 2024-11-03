#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("Enter elements:\n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            scanf("%d", &matrix[i][j]);
}

void multiplyMatrices(int r1, int c1, int a[r1][c1], int r2, int c2, int b[r2][c2], int product[r1][c2]) {
    int i, j, k;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) {
            product[i][j] = 0;
            for (k = 0; k < c1; ++k)
                product[i][j] += a[i][k] * b[k][j];
        }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("Product Matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];

    if (c1 != r2) {
        printf("Cannot multiply matrices with these dimensions.\n");
        return 0;
    }

    printf("Matrix A:\n");
    readMatrix(r1, c1, a);
    printf("Matrix B:\n");
    readMatrix(r2, c2, b);

    int product[r1][c2];
    multiplyMatrices(r1, c1, a, r2, c2, b, product);
    printMatrix(r1, c2, product);

    return 0;
}
