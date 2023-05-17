// find the occurrences of characters os a string using break and continue in C.

#include <stdio.h>

int main() {
   char str[] = "Hello, world!";
   char ch = 'l';
   int count = 0;
   
   for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] == ch) {
         count++;
         continue; // continue to the next iteration to find all occurrences of the character
      }
   }

   printf("The character '%c' occurs %d times in the string.\n", ch, count);
   
   return 0;
}


