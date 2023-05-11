// Length of a string using recursion concept in C.

#include <stdio.h>

int stringLength(char *str) {
    if (*str == '\0') {
        return 0;
    } else {
        return 1 + stringLength(str + 1);
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}


