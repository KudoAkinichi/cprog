// WAP to take input and display a m x n matrix on the basis of 2D-array concept.

#include <stdio.h>

int main() {
    int m, n, i, j;

    // Take input for number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Create a 2D array of size m x n
    int matrix[m][n];

    // Loop through each row and column to input values
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
