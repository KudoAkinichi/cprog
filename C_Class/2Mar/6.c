// WAP to check whether input character is alphabet or not and if it is alphabet check whether it is vowel or consonant using switch case in C.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel\n", ch);
                break;
            default:
                printf("%c is a consonant\n", ch);
                break;
        }
    } else {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}



