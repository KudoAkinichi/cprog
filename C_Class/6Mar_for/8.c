// WAP to find prime numbers from 1 to 100 using for loop in C.

#include <stdio.h>

#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 100:\n");

    for (i = 2; i <= 100; i++) {
        isPrime = 1;  // assume the number is prime
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // mark the number as not prime
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
