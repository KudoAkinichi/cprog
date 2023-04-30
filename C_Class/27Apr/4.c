// Find the position of a character from a string using break and continue in C.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    int i;

    for(i=0; i<strlen(str); i++) {
        if(str[i] == ch) {
            printf("Found '%c' at position %d\n", ch, i);
            break; // exit the loop as soon as the character is found
        }
        else {
            continue; // continue to the next iteration of the loop
        }
    }

    return 0;
}
