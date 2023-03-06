// WAP to display the reverse of a number using for loop in C

#include <stdio.h>

int main() {
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  // get input number from user
    
    for (; num > 0; num /= 10) {  // loop until all digits are reversed
        reverse = (reverse * 10) + (num % 10);  // reverse the number
    }
    
    printf("The reverse of the number is: %d", reverse);  // print the reversed number
    
    return 0;

}
