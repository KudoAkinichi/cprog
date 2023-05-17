// WAP to display the main diagonal using 2D-array concept in C.

#include <stdio.h>

int main() {
    int n, i, j;

    // Take input for number of rows and columns
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    // Create a 2D array of size n x n
    int matrix[n][n];

    // Loop through each row and column to input values
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display main diagonal of the matrix
    printf("Main Diagonal:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    return 0;
}
