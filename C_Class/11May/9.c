// WAP to find sum of digits using recursion in C.

#include <stdio.h>

int sumOfDigits(int num)
{
    // Base case: If the number is less than 10, return the number itself
    if (num < 10) {
        return num;
    }

    // Recursive call: Add the last digit to the sum of remaining digits
    return num % 10 + sumOfDigits(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int digitSum = sumOfDigits(num);

    printf("The sum of digits in %d is %d.\n", num, digitSum);

    return 0;
}
