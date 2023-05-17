// Strong number using another function in C.

#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to check if a number is a Strong number
int isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    // Calculate the sum of factorials of individual digits
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        return 1; // It's a Strong number
    } else {
        return 0; // It's not a Strong number
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrong(num)) {
        printf("%d is a Strong number.\n", num);
    } else {
        printf("%d is not a Strong number.\n", num);
    }

    return 0;
}
