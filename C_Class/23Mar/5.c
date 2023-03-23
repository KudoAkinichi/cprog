// Write a program in C to merge two arrays of the same size sorted in descending order.    

#include <stdio.h>

int main() {
    int n, i, j, k;
    
    // Get the size of the arrays from the user
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n], merged[n * 2];
    
    // Get the elements of the first array from the user
    printf("Enter the elements of the first array in descending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Get the elements of the second array from the user
    printf("Enter the elements of the second array in descending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Merge the two arrays in descending order
    i = j = k = 0;
    while (i < n && j < n) {
        if (arr1[i] > arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    
    // Print the merged array
    printf("The merged array in descending order is:\n");
    for (i = 0; i < n * 2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
