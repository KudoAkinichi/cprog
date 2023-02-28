// WAP to determine if the least significant bit of a number is 1 or 0

#include <stdio.h>

int main() {
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);

   if (num & 1) {
      printf("The least significant bit of %d is 1\n", num);
   } else {
      printf("The least significant bit of %d is 0\n", num);
   }

   return 0;
}
