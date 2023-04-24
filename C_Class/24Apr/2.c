// WAP to do the addition of 2 arrays using another function.

#include <stdio.h>

void addArrays(int arr1[], int arr2[], int n) {
    int sum[n];
    for(int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    printf("Sum of arrays: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
}

int main() {
    int n;
    printf("Enter the size of arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the values of first array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the values of second array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    addArrays(arr1, arr2, n);
    return 0;
}