// WAP to print prime number from 1 to n using nested for loop in C.

#include <stdio.h>

int main() {
    int i, j, n, is_prime;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    // Check for prime numbers from 1 to n
    for (i = 2; i <= n; i++) {
        is_prime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
