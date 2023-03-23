// Write a program in C to find the maximum and minimum elements in an array


#include <stdio.h>

int main() {
    int n, i, max, min;
    
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the maximum and minimum elements
    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Print the maximum and minimum elements
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
