// 1.Write a program in C to find the sum of all elements of the array. 

#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    
    // Reading elements into the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // adding each element to sum
    }
    
    printf("Sum of all elements of the array is %d", sum);
    
    return 0;
}
