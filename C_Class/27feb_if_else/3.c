// WAP to find the input character is capital or small letter.

#include <stdio.h>

int main() {
   char ch;

   printf("Enter a character: ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z') {
      printf("%c is a capital letter\n", ch);
   } else if (ch >= 'a' && ch <= 'z') {
      printf("%c is a small letter\n", ch);
   } else {
      printf("%c is not an alphabet\n", ch);
   }

   return 0;
}


