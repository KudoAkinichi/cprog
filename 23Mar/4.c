// Write a program in C to print all unique elements in an array.?

#include <stdio.h>

int main() {
    int n, i, j, count;
    
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Get the elements of the array from the user
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each element for uniqueness
    printf("The unique elements in the array are: ");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // Print the element if it is unique
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
