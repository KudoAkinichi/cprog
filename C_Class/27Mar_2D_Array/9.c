// WAP to find transpose of matrix using 2D-array concept in C.

#include <stdio.h>

int main() {
    int n, m, i, j;

    // Take input for number of rows and columns of the matrix
    printf("Enter size of matrix (n m): ");
    scanf("%d %d", &n, &m);

    // Create a 2D array of size n x m for the matrix
    int matrix[n][m], transpose[m][n];

    // Loop through each row and column to input values for the matrix
    printf("Enter values for matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Loop through each row and column to transpose the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Display the transpose matrix on the console
    printf("Transpose Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
