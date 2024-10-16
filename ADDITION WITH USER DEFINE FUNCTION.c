#include <stdio.h>

void addMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows, int columns) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int matrix[][3], int rows, int columns) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    printf("Matrix 1:\n");
    displayMatrix(matrix1, 3, 3);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, 3, 3);

    addMatrices(matrix1, matrix2, resultMatrix, 3, 3);

    printf("\nResult Matrix:\n");
    displayMatrix(resultMatrix, 3, 3);

    return 0;
}

