// WAP to find one number is prime or not using for loop in C.

#include <stdio.h>

int main() {
    int num, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);  // get input number from user
    
    if (num <= 1) {  // check if the input number is less than or equal to 1
        is_prime = 0;  // 1 and all negative numbers are not prime
    } else {
        // check if the input number is divisible by any number from 2 to num-1
        for (int i = 2; i < num/2; i++) {
            if (num % i == 0) {
                is_prime = 0;  // input number is not prime
                break;  // exit the loop as soon as we find a factor
            }
        }
    }
    
    if (is_prime) {  // check if the is_prime variable is still 1
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }
    
    return 0;
}
