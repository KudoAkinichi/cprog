// Write the user defined function to convert lower case to upper case string given by a user in C.

#include <stdio.h>

void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // subtract 32 to convert to uppercase
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    toUpperCase(str);
    printf("Uppercase string: %s", str);
    return 0;
}

