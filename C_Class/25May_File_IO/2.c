// WAP to display content of a file

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    // Read and display the contents of the file
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
