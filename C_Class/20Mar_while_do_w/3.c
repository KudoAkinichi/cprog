// WAP to take input from 1 to 10 and if its even then take the factorial from 1 till that number and display the sum of them.

#include <stdio.h>

int main() {
    int num, i, j, fact, sum = 0;

    do {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    if (num % 2 == 0) {
        fact = 1;
        for (i = 1; i <= num; i++) {
            fact *= i;
            sum += fact;
        }
        printf("Sum of factorials from 1 to %d: %d", num, sum);
    } else {
        printf("Entered number is odd. Factorials not computed.");
    }

    return 0;
}
