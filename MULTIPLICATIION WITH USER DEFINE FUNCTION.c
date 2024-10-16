#include <stdio.h>

#define MAX_SIZE 10

void matrixMultiplication(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2) {
    int i, j, k;

    // Multiply matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    int i, j;

    printf("Enter the number of rows and columns for matrix 1 (space separated): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix 2 (space separated): ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Invalid input. The number of columns in matrix 1 must be equal to the number of rows in matrix 2.\n");
        return 0;
    }

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    matrixMultiplication(matrix1, matrix2, result, rows1, cols1, cols2);

    printf("Resultant matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
