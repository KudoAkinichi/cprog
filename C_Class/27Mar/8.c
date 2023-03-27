// WAP to do multiplication of 2 matrix using 2D-array concept in C.

#include <stdio.h>

int main() {
    int n, m, p, i, j, k;

    // Take input for number of rows and columns of the matrices
    printf("Enter size of matrices (n m p): ");
    scanf("%d %d %d", &n, &m, &p);

    // Create two 2D arrays of size n x m and m x p for the matrices
    int matrix1[n][m], matrix2[m][p], result[n][p];

    // Loop through each row and column to input values for matrix1
    printf("Enter values for matrix1:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter value for matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Loop through each row and column to input values for matrix2
    printf("Enter values for matrix2:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("Enter value for matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Loop through each row and column to calculate the product of the two matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            result[i][j] = 0;
            for (k = 0; k < m; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix on the console
    printf("Result Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

