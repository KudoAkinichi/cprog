// Armstrong number using another function in C

#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits in the number
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    num = originalNum; // Reset num to the original value

    // Calculate the sum of digits raised to the power of numDigits
    while (num != 0) {
        int digit = num % 10;
        sum += power(digit, numDigits);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        return 1; // It's an Armstrong number
    } else {
        return 0; // It's not an Armstrong number
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

