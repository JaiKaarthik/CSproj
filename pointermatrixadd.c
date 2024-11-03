#include <stdio.h>

void readMatrix(int rows, int cols, int *matrix) {
    int i, j;
    printf("Enter elements:\n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            scanf("%d", (matrix + i * cols + j));
}

void addMatrices(int rows, int cols, int *a, int *b, int *sum) {
    int i, j;
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            *(sum + i * cols + j) = *(a + i * cols + j) + *(b + i * cols + j);
}

void printMatrix(int rows, int cols, int *matrix) {
    int i, j;
    printf("Resultant Matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j)
            printf("%d ", *(matrix + i * cols + j));
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    printf("Matrix A:\n");
    readMatrix(rows, cols, (int *)a);

    printf("Matrix B:\n");
    readMatrix(rows, cols, (int *)b);

    addMatrices(rows, cols, (int *)a, (int *)b, (int *)sum);
    printMatrix(rows, cols, (int *)sum);

    return 0;
}
