// WAP to check whether a number is perfect or not using for loop in C.

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  // get input number from user
    
    // check if the input number is perfect or not
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) {
        printf("%d is a perfect number.", num);
    }
    else {
        printf("%d is not a perfect number.", num);
    }
    
    return 0;
}