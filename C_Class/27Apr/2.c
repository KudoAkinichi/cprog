// WAP to check whether a number is prime or not using break in C.

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            break;
        }
    }

    if (i > num/2) {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
