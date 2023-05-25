// WAP to copy one file to another file.

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFilename);

    // Open the source file
    sourceFile = fopen(sourceFilename, "r");

    // Check if the source file exists
    if (sourceFile == NULL) {
        printf("Source file not found.\n");
        return 1;
    }

    // Open the destination file
    destinationFile = fopen(destinationFilename, "w");

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}


