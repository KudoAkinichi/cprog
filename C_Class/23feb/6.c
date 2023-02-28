// Using C program demonstrate working of size of operator.

#include <stdio.h>

int main() {
    int num = 10;
    double num2 = 3.14159;
    char letter = 'A';
    float num3 = 2.71828;

    printf("The size of int is %lu bytes\n", sizeof(int));
    printf("The size of double is %lu bytes\n", sizeof(double));
    printf("The size of char is %lu bytes\n", sizeof(char));
    printf("The size of float is %lu bytes\n", sizeof(float));
    printf("The size of num is %lu bytes\n", sizeof(num));
    printf("The size of num2 is %lu bytes\n", sizeof(num2));
    printf("The size of letter is %lu bytes\n", sizeof(letter));
    printf("The size of num3 is %lu bytes\n", sizeof(num3));

    return 0;
}
