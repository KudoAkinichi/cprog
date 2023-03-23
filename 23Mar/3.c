// Write a program in C to count the total number of duplicate elements in an array


#include <stdio.h>

int main() {
    int n, i, j, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements in the array is %d", count);

    return 0;
}