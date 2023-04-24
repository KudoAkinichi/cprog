// WAP to do the addition of 2 arrays using another function.

#include <stdio.h>

// Function to add the elements of two arrays
void addArrays(int arr1[], int arr2[], int sum[], int size) {
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], sum[size];

    printf("Enter the elements of first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Call the addArrays function to add the elements of the two arrays
    addArrays(arr1, arr2, sum, size);

    printf("Sum of the arrays: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
