#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("Enter elements:\n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            scanf("%d", &matrix[i][j]);
}

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int sum[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            sum[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("Resultant Matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    printf("Matrix A:\n");
    readMatrix(rows, cols, a);
    printf("Matrix B:\n");
    readMatrix(rows, cols, b);

    addMatrices(rows, cols, a, b, sum);
    printMatrix(rows, cols, sum);

    return 0;
}
