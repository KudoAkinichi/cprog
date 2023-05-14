// WAP to find no. of digits in a number using recursion in C.

#include <stdio.h>

int countDigits(int num)
{
    // Base case: If the number is less than 10, it has only one digit
    if (num < 10) {
        return 1;
    }

    // Recursive call: Divide the number by 10 and make a recursive call
    return 1 + countDigits(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int digitCount = countDigits(num);

    printf("The number of digits in %d is %d.\n", num, digitCount);

    return 0;
}


