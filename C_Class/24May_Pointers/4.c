// WAP to add 2 array and display the resultant array using pointers in C.

#include <stdio.h>

void addArrays(int* arr1, int* arr2, int* result, int size) {
    for (int i = 0; i < size; i++) {
        *(result + i) = *(arr1 + i) + *(arr2 + i);
    }
}

void displayArray(int* arr, int size) {
    printf("Resultant array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], result[size];

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    addArrays(arr1, arr2, result, size);

    displayArray(result, size);

    return 0;
}
