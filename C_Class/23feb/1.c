// Demonstrate working of all assignment operators in C (+=, -=, *=, %=, /=, =) with a program.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // += operator
    num1 += num2;
    printf("num1 after += operation: %d\n", num1);

    // -= operator
    num1 -= num2;
    printf("num1 after -= operation: %d\n", num1);

    // *= operator
    num1 *= num2;
    printf("num1 after *= operation: %d\n", num1);

    // %= operator
    num1 %= num2;
    printf("num1 after %%= operation: %d\n", num1);

    // /= operator
    num1 /= num2;
    printf("num1 after /= operation: %d\n", num1);

    // = operator
    num1 = num2;
    printf("num1 after = operation: %d\n", num1);

    return 0;
}
