// Write a program in C to insert values in the array.

#include <stdio.h>

int main() {
    int n, i, pos, value;
    
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Get the position and value to insert from the user
    printf("Enter the position at which to insert the value: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    
    // Shift the elements of the array to the right to make space for the new element
    for (i = n-1; i >= pos-1; i--) {
        arr[i+1] = arr[i];
    }
    
    // Insert the new element at the specified position
    arr[pos-1] = value;
    n++;
    
    // Print the updated array
    printf("The updated array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
