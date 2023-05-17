// WAP to print perfect number from 1 to n using nested for loop in C.

#include <stdio.h>

int main() {
    int i, j, n, sum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d are: ", n);

    // Check for perfect numbers from 1 to n
    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}

