// WAP to read an alphabet from the keyboard and convert it into uppercase if it in lower case otherwise display an appropriate message using C.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z')) {
        ch = ch - 32;
        printf("The uppercase of the entered alphabet is %c\n", ch);
    }
    else if ((ch >= 'A' && ch <= 'Z')) {
        printf("The entered alphabet is already in uppercase\n");
    }
    else {
        printf("The entered character is not an alphabet\n");
    }

    return 0;
}
