// WAP to take 10 inputs from the user and count the number of even numbers in C, take all inputs from user in an array.

#include <stdio.h>

int main() {
    int arr[10], i, count = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    printf("Number of even numbers: %d", count);

    return 0;
}
