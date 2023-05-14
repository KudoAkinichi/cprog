// WAP to searching of a number from an array using recursion in C.

#include <stdio.h>

int searchNumber(int arr[], int start, int end, int target)
{
    // Base case: If the start index exceeds the end index, the number is not found
    if (start > end) {
        return -1;
    }

    // Check if the target is found at the start index
    if (arr[start] == target) {
        return start;
    }

    // Recursive call: Search for the target in the remaining array
    return searchNumber(arr, start + 1, end, target);
}

int main()
{
    int arr[100], n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int index = searchNumber(arr, 0, n - 1, target);

    if (index == -1) {
        printf("The number %d is not found in the array.\n", target);
    } else {
        printf("The number %d is found at index %d in the array.\n", target, index);
    }

    return 0;
}
