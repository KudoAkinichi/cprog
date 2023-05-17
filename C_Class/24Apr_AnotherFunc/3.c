// WAP to addition of 2 matrices using another function in C.

#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[][100], int mat2[][100], int sum[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d%d", &rows, &cols);

    int mat1[100][100], mat2[100][100], sum[100][100];

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Call the addMatrices function to add the two matrices
    addMatrices(mat1, mat2, sum, rows, cols);

    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
