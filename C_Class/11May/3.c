// WAP to calculate sum on n numbers using recursion in C.

#include <stdio.h>

// Function to calculate the sum of n numbers recursively
int calculateSum(int n) {
    // Base case: When n becomes 0, return 0
    if (n == 0) {
        return 0;
    }
    
    // Recursive call to calculateSum with n-1 and add it to n
    return n + calculateSum(n - 1);
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int sum = calculateSum(n);
    
    printf("The sum of first %d numbers is %d.\n", n, sum);
    
    return 0;
}
