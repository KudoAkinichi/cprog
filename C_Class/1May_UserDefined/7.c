// Write the user defined function to convert Upper case to lower case string given by a user in C.

#include <stdio.h>

void toLowerCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // add 32 to convert to lowercase
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    toLowerCase(str);
    printf("Lowercase string: %s", str);
    return 0;
}
