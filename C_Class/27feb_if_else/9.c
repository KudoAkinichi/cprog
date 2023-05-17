// WAP to check whether a character entered through a keyboard is a digit, letter or special character in C.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit\n", ch);
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a letter\n", ch);
    } else {
        printf("%c is a special character\n", ch);
    }

    return 0;
}
