#include <stdio.h>

#define SIZE 10

void getCofactor(float mat[SIZE][SIZE], float temp[SIZE][SIZE], int p, int q, int n) {
    int i = 0, j = 0, row, col;
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n -1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

float determinant(float mat[SIZE][SIZE], int n) {
    float D = 0;
    if (n == 1)
        return mat[0][0];

    float temp[SIZE][SIZE];
    int sign = 1, f;

    for (f = 0; f < n; f++) {
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinant(temp, n -1);
        sign = -sign;
    }

    return D;
}

void adjoint(float mat[SIZE][SIZE], float adj[SIZE][SIZE], int n) {
    if (n == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign = 1, i, j;
    float temp[SIZE][SIZE];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            getCofactor(mat, temp, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, n -1);
        }
    }
}

int inverse(float mat[SIZE][SIZE], float inverse[SIZE][SIZE], int n) {
    float det = determinant(mat, n);
    if (det == 0) {
        printf("Singular matrix, can't find its inverse.\n");
        return 0;
    }

    float adj[SIZE][SIZE];
    adjoint(mat, adj, n);

    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            inverse[i][j] = adj[i][j] / det;

    return 1;
}

int main() {
    float mat[SIZE][SIZE], inv[SIZE][SIZE];
    int n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%f", &mat[i][j]);

    if (inverse(mat, inv, n)) {
        printf("Inverse of matrix is:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                printf("%.2f ", inv[i][j]);
            printf("\n");
        }
    }

    return 0;
}
