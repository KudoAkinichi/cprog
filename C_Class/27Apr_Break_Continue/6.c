// Find number of vowels in a string using break and continue in C.

#include <stdio.h>

int main() {
   char str[] = "Hello, world!";
   int num_vowels = 0;
   
   for (int i = 0; str[i] != '\0'; i++) {
      char ch = str[i];
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
         num_vowels++;
      }
      else {
         continue;
      }
   }

   printf("The number of vowels in the string is %d", num_vowels);
   return 0;
}
