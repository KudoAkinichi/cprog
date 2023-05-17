// Write the user defined function to Reverse 2 strings given by a user in C.

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
   int length = strlen(str);
   int i, j;
   
   for (i = 0, j = length - 1; i < j; i++, j--) {
      char temp = str[i];
      str[i] = str[j];
      str[j] = temp;
   }
}

int main() {
   char str1[100], str2[100];
   
   printf("Enter first string: ");
   fgets(str1, sizeof(str1), stdin);
   printf("Enter second string: ");
   fgets(str2, sizeof(str2), stdin);

   reverseString(str1);
   reverseString(str2);

   printf("Reversed first string: %s\n", str1);
   printf("Reversed second string: %s\n", str2);
   
   return 0;
}
