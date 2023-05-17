// Write the user defined function to copy 2 strings given by a user in C.

#include <stdio.h>
#include <string.h>

void copyStrings(char dest[], char src[]) {
    strcpy(dest, src);
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    printf("Before copying:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    copyStrings(str1, str2);
    
    printf("After copying:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    return 0;
}
