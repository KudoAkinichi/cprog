// To demonstrate working of logical operators (&&, ||) using C program.

#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    // logical AND operator
    if(num1 < num2 && num2 < num3) {
        printf("%d is less than %d and %d is less than %d\n", num1, num2, num2, num3);
    } else {
        printf("Either %d is not less than %d or %d is not less than %d\n", num1, num2, num2, num3);
    }

    // logical OR operator
    if(num1 < num2 || num2 > num3) {
        printf("%d is less than %d or %d is greater than %d\n", num1, num2, num2, num3);
    } else {
        printf("Neither %d is less than %d nor %d is greater than %d\n", num1, num2, num2, num3);
    }

    return 0;
}
