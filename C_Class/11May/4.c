// WAP to calculate power of a number raise to n using recursion in C.

#include <stdio.h>

// Function to calculate the power of a number recursively
int calculatePower(int number, int n) {
    // Base case: When n becomes 0, return 1
    if (n == 0) {
        return 1;
    }
    
    // Recursive call to calculatePower with number and n-1, and multiply it with number
    return number * calculatePower(number, n - 1);
}

int main() {
    int number, n;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("Enter the power: ");
    scanf("%d", &n);
    
    int result = calculatePower(number, n);
    
    printf("%d raised to the power of %d is %d.\n", number, n, result);
    
    return 0;
}
