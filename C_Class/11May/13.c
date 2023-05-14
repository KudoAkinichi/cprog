// WAP to find max number in an array using recursion in C.

#include <stdio.h>

int findMax(int arr[], int start, int end)
{
    // Base case: If there is only one element in the array, it is the maximum
    if (start == end) {
        return arr[start];
    }

    // Recursive case: Divide the array into two halves and find the maximum
    int mid = (start + end) / 2;
    int maxLeft = findMax(arr, start, mid);
    int maxRight = findMax(arr, mid + 1, end);

    // Return the maximum of the two sub-arrays
    return (maxLeft > maxRight) ? maxLeft : maxRight;
}

int main()
{
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxNumber = findMax(arr, 0, n - 1);

    printf("The maximum number in the array is %d.\n", maxNumber);

    return 0;
}

