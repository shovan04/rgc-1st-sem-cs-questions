#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void readMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter elements of the %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int rows1, int cols1, int mat2[MAX_ROWS][MAX_COLS], int rows2, int cols2, int result[MAX_ROWS][MAX_COLS]) {

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns in Matrix 1 must be equal to number of rows in Matrix 2.\n");
        return;
    }


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int m1, n1;
    int m2, n2;
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];


    printf("Enter the number of rows and columns for Matrix 1 (max %d x %d): ", MAX_ROWS, MAX_COLS);
    scanf("%d %d", &m1, &n1);


    printf("Enter the number of rows and columns for Matrix 2 (max %d x %d): ", MAX_ROWS, MAX_COLS);
    scanf("%d %d", &m2, &n2);


    if (n1 != m2) {
        printf("Matrix multiplication not possible. Number of columns in Matrix 1 must be equal to number of rows in Matrix 2.\n");
        return 1;
    }


    printf("For Matrix 1:\n");
    readMatrix(matrix1, m1, n1);


    printf("For Matrix 2:\n");
    readMatrix(matrix2, m2, n2);


    printf("Matrix 1:\n");
    displayMatrix(matrix1, m1, n1);
    printf("\n");
    printf("Matrix 2:\n");
    displayMatrix(matrix2, m2, n2);
    printf("\n");


    multiplyMatrices(matrix1, m1, n1, matrix2, m2, n2, result);


    printf("Resultant Matrix (Matrix 1 * Matrix 2):\n");
    displayMatrix(result, m1, n2);

    return 0;
}
