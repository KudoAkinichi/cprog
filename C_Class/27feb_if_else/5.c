// WAP to find nth bit of a number is 1 or not using if else in C

#include <stdio.h>

int main() {
   int num, pos;

   printf("Enter a number: ");
   scanf("%d", &num);

   printf("Enter the bit position: ");
   scanf("%d", &pos);

   if ((num >> pos) & 1) {
      printf("The %dth bit of %d is 1\n", pos, num);
   } else {
      printf("The %dth bit of %d is 0\n", pos, num);
   }

   return 0;
}
