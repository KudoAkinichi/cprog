// WAP to find if a string is palindrome or not in C.

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }
    return 1; // Palindrome
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
