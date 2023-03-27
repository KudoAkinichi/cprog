// WAP to do summation of 2 matrix using 2D-array concept in C.

#include <stdio.h>

int main() {
    int n, m, i, j;

    // Take input for number of rows and columns of the matrices
    printf("Enter size of matrices (n m): ");
    scanf("%d %d", &n, &m);

    // Create two 2D arrays of size n x m for the matrices
    int matrix1[n][m], matrix2[n][m], result[n][m];

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
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter value for matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Loop through each row and column to calculate the sum of the two matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix on the console
    printf("Result Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
