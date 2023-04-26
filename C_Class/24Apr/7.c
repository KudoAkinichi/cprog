// WAP in C to transpose of a matrix using another function.

#include <stdio.h>

// Function to calculate the transpose of a matrix
void calculateTranspose(int matrix[10][10], int row, int col) {
    int transpose[10][10];

    // Transpose the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[10][10];
    int row, col;

    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &row);

    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &col);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the function to calculate transpose
    calculateTranspose(matrix, row, col);

    return 0;
}