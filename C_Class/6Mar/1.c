// WAP to display digits of a number using loops.

#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);  // get input number from user
    
      for (; num > 0; num /= 10) {  // loop until all digits are printed
        digit = num % 10;  // get the last digit of the number
        printf("%d ", digit);  // print the digit
    }
    
    return 0;
}


