// 2.Write a program in C to copy the elements of one array into another array

#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements of the array:\n", n);
    
    // Reading elements into the first array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Copying elements from first array to second array
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    
    printf("Elements of the first array:\n");
    
    // Printing elements of the first array
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nElements of the second array (copy of the first array):\n");
    
    // Printing elements of the second array
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}
