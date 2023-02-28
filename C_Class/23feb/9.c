// C program to multiply 2 floating point numbers.

#include <stdio.h>

int main() {
    float num1, num2, product;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    product = num1 * num2;

    printf("Product of %f and %f is %f\n", num1, num2, product);

    return 0;
}
