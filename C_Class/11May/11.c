// WAP to take input of a number from use and determine whether it is palindrome or not using recursion in C.

#include <stdio.h>

// Function to check if a number is palindrome recursively
int isPalindrome(int number, int temp) {
    // Base case: When the number becomes 0
    if (number == 0) {
        return temp;
    }
    
    // Recursively build the reverse of the number
    temp = (temp * 10) + (number % 10);
    
    // Recursive call with number/10 to remove the last digit
    return isPalindrome(number / 10, temp);
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int reverse = isPalindrome(number, 0);
    
    if (number == reverse) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
    return 0;
}
