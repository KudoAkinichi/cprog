// To demonstrate working of relational operators (<, >, <=, >=, ==) using C program.

#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 10;

    // less than operator
    if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    }

    // greater than operator
    if (num2 > num1) {
        printf("%d is greater than %d\n", num2, num1);
    }

    // less than or equal to operator
    if (num1 <= num2) {
        printf("%d is less than or equal to %d\n", num1, num2);
    }

    // greater than or equal to operator
    if (num2 >= num1) {
        printf("%d is greater than or equal to %d\n", num2, num1);
    }

    // equal to operator
    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    } else {
        printf("%d is not equal to %d\n", num1, num2);
    }

    return 0;
}

