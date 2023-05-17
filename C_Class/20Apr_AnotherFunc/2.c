// FActorial series using another function in C.

#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Call the factorial function and store the result
    int result = factorial(num);

    printf("The factorial of %d is %d\n", num, result);

    return 0;
}
