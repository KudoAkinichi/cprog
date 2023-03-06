// WAP to find one number is armstrong or not using for loop in C

#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, digit, num_copy, num_digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  // get input number from user
    
    num_copy = num;  // make a copy of the input number
    
    // find the number of digits in the input number
    while (num_copy > 0) {
        num_digits++;
        num_copy /= 10;
    }
    
    num_copy = num;  // reset the copy of the input number
    
    // calculate the sum of the cubes of the digits
    for (; num_copy > 0; num_copy /= 10) {
        digit = num_copy % 10;  // get the last digit of the number
        sum += pow(digit, num_digits);  // add the cube of the digit to the sum
    }
    
    // check if the sum is equal to the input number
    if (sum == num) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }
    
    return 0;
}
