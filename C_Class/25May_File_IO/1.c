// WAP to count number of vowels, consonant , lowercase , and uppercase using file input/output in C.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0, lowercase = 0, uppercase = 0;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    // Read each character from the file and count the categories
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }

            if (islower(ch)) {
                lowercase++;
            } else if (isupper(ch)) {
                uppercase++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Display the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of lowercase letters: %d\n", lowercase);
    printf("Number of uppercase letters: %d\n", uppercase);

    return 0;
}
