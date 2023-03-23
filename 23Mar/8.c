// Write a program in C to search an element in the array. 

#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Get the element to search for from the user
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    
    // Search for the element in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    
    // Print the result
    if (found) {
        printf("%d was found at index %d\n", key, i);
    } else {
        printf("%d was not found in the array\n", key);
    }

    return 0;
}
