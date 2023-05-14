// WAP to find  gcd of a no. using recursion in C.

#include <stdio.h>

int gcd(int num1, int num2)
{
    // Base case: If num2 is 0, GCD is num1
    if (num2 == 0) {
        return num1;
    }

    // Recursive call: Calculate GCD using Euclidean algorithm
    return gcd(num2, num1 % num2);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcdValue = gcd(num1, num2);

    printf("The GCD of %d and %d is %d.\n", num1, num2, gcdValue);

    return 0;
}
