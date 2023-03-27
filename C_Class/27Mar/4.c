// WAP to display upper triangular matrix using the 2D-array concept.

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

    // Display upper triangular matrix
    printf("Upper Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}

