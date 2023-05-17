// Write a program to find greatest between 3 numbers

#include <stdio.h>

int main() {
   int num1, num2, num3;

   printf("Enter three numbers: ");
   scanf("%d%d%d", &num1, &num2, &num3);

   if (num1 > num2 && num1 > num3) {
      printf("%d is the greatest\n", num1);
   } else if (num2 > num1 && num2 > num3) {
      printf("%d is the greatest\n", num2);
   } else if (num3 > num1 && num3 > num2) {
      printf("%d is the greatest\n", num3);
   } else {
      printf("The numbers are not distinct\n");
   }

   return 0;
}
