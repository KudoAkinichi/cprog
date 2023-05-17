// Display a sub string using break and continue in C.

#include <stdio.h>

int main() {
   char str[] = "Hello, world!";
   int start = 3; // starting position of the substring
   int length = 5; // length of the substring
   
   for (int i = 0; str[i] != '\0'; i++) {
      if (i < start) {
         continue; // continue to the next iteration until the starting position is reached
      }
      else if (i >= start + length) {
         break; // exit the loop when the desired length of the substring has been reached
      }
      else {
         printf("%c", str[i]); // print the current character in the substring
      }
   }

   return 0;
}
