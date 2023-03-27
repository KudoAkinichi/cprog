// WAP to display sum of individual rows of m x n matrix using the 2D-array concept.

#include <stdio.h>

int main() {
    int m, n, i, j, sum;

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

    // Calculate and display the sum of each row
    for (i = 0; i < m; i++) {
        sum = 0; // initialize sum to 0 for each row
        for (j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, sum);
    }

    return 0;
}
