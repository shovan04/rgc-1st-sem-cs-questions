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

void addMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int m, n;
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];


    printf("Enter the number of rows (m) and columns (n) for the matrices: ");
    scanf("%d %d", &m, &n);


    if (m <= 0 || m > MAX_ROWS || n <= 0 || n > MAX_COLS) {
        printf("Invalid matrix dimensions. Please enter valid dimensions.\n");
        return 1;
    }


    printf("For Matrix 1:\n");
    readMatrix(matrix1, m, n);


    printf("For Matrix 2:\n");
    readMatrix(matrix2, m, n);


    printf("Matrix 1:\n");
    displayMatrix(matrix1, m, n);
    printf("\n");
    printf("Matrix 2:\n");
    displayMatrix(matrix2, m, n);
    printf("\n");


    addMatrices(matrix1, matrix2, result, m, n);


    printf("Resultant Matrix (Matrix 1 + Matrix 2):\n");
    displayMatrix(result, m, n);

    return 0;
}
