// WAP to multiply 2 matrices using another function in C.

#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int mat1[][100], int rows1, int cols1, int mat2[][100], int rows2, int cols2, int result[][100]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; // Initialize result matrix element to 0

            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &rows1, &cols1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &rows2, &cols2);

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    int mat1[100][100], mat2[100][100], result[100][100];

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Call the multiplyMatrices function to multiply the two matrices
    multiplyMatrices(mat1, rows1, cols1, mat2, rows2, cols2, result);

    printf("Resultant matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
