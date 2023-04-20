// Add 2 numbers by using another function in C.

#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the add() function and store the result in sum
    sum = add(num1, num2);

    printf("Sum: %d\n", sum);

    return 0;
}
