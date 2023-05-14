// WAP for matrix multiplication using recursion in C.

#include <stdio.h>

#define MAX_SIZE 100

void matrixMultiplication(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2)
{
    if (rows1 == 0)
        return;

    if (cols1 == 0)
        matrixMultiplication(mat1, mat2, result, rows1 - 1, cols1, cols2);
    else if (cols2 == 0)
        return;
    else {
        result[rows1 - 1][cols2 - 1] = 0;
        for (int k = 0; k < cols1; k++) {
            result[rows1 - 1][cols2 - 1] += mat1[rows1 - 1][k] * mat2[k][cols2 - 1];
        }
        matrixMultiplication(mat1, mat2, result, rows1, cols1, cols2 - 1);
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    matrixMultiplication(mat1, mat2, result, rows1, cols1, cols2);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
