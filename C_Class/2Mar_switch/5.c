// WAP to take an input alphabet and if it is small case print the corresponding capital case alphabet and if it is capital case print the corresponding small case alphabet using switch case in C, also use ASCII values.


#include <stdio.h>

int main() {
    char input, output;
    
    printf("Enter an alphabet: ");
    scanf("%c", &input);

    switch (input) {
        case 'a' ... 'z':  // Lowercase alphabet
            output = input - 32;
            printf("The corresponding uppercase alphabet is: %c", output);
            break;
        case 'A' ... 'Z':  // Uppercase alphabet
            output = input + 32;
            printf("The corresponding lowercase alphabet is: %c", output);
            break;
        default:
            printf("Invalid input!");
            break;
    }

    return 0;
}


