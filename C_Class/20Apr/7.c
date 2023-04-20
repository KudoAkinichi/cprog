// Check whether a number is palindrome or not

#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (reversedNum == originalNum) {
        return 1; // It's a palindrome
    } else {
        return 0; // It's not a palindrome
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
