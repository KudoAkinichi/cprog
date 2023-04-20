// Fibonacci series using another function in C.

#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci series: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
