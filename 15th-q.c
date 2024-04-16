#include <stdio.h>

#define MAX_SIZE 10

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    printf("Enter elements of the %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    printf("Matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int calculateTrace(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int trace = 0;
    for (int i = 0; i < size; i++)
    {
        trace += matrix[i][i];
    }
    return trace;
}

int main()
{
    int size;
    int matrix[MAX_SIZE][MAX_SIZE];
    int trace;
    printf("Enter the size of the square matrix (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid matrix size. Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }
    readMatrix(matrix, size);
    displayMatrix(matrix, size);
    trace = calculateTrace(matrix, size);
    printf("Trace of the matrix: %d\n", trace);
    return 0;
}
