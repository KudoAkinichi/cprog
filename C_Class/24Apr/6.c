// WAP in C to diagonal of a matrix using another function.

#include <stdio.h>

// Function to calculate the diagonal of a matrix
void calculateDiagonal(int matrix[10][10], int n) {
    printf("Diagonal elements of the matrix: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
}

int main() {
    int matrix[10][10];
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the function to calculate diagonal elements
    calculateDiagonal(matrix, n);

    return 0;
}