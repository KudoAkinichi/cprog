// WAP to find fibonacci series using recursion in C.

#include <stdio.h>

int fibonacci(int n)
{
    // Base cases: Fibonacci numbers for n=0 and n=1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Recursive call: Calculate Fibonacci number using recursion
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int count;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &count);

    printf("Fibonacci Series: ");

    for (int i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
