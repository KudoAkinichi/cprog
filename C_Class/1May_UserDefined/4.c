// Write the user defined function to Compare 2 string given by a user in C.
#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int compareStrings(char str1[], char str2[]) {
   int i = 0;
   
   while (str1[i] == str2[i]) {
      if (str1[i] == '\0' || str2[i] == '\0') {
         break;
      }
      i++;
   }
   
   if (str1[i] == '\0' && str2[i] == '\0') {
      return 0;
   } else {
      return str1[i] - str2[i];
   }
}

int main() {
   char str1[100], str2[100];
   
   printf("Enter first string: ");
   fgets(str1, sizeof(str1), stdin);
   str1[strcspn(str1, "\n")] = '\0'; // Remove newline character from str1
   
   printf("Enter second string: ");
   fgets(str2, sizeof(str2), stdin);
   str2[strcspn(str2, "\n")] = '\0'; // Remove newline character from str2

   int result = compareStrings(str1, str2);

   if (result < 0) {
      printf("'%s' is smaller than '%s'\n", str1, str2);
   } else if (result > 0) {
      printf("'%s' is greater than '%s'\n", str1, str2);
   } else {
      printf("'%s' is equal to '%s'\n", str1, str2);
   }
   
   return 0;
}
