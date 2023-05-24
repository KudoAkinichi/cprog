// WAP to display increment , decrement , addition and subtraction on different types of pointer in C.

#include <stdio.h>

int main() {
    int num1 = 10;
    float num2 = 5.5;
    char ch = 'A';

    int* intPointer = &num1;
    float* floatPointer = &num2;
    char* charPointer = &ch;

    // Increment operations
    (*intPointer)++;
    (*floatPointer)++;
    (*charPointer)++;

    printf("After increment:\n");
    printf("num1: %d\n", num1);
    printf("num2: %.2f\n", num2);
    printf("ch: %c\n", ch);

    // Decrement operations
    (*intPointer)--;
    (*floatPointer)--;
    (*charPointer)--;

    printf("\nAfter decrement:\n");
    printf("num1: %d\n", num1);
    printf("num2: %.2f\n", num2);
    printf("ch: %c\n", ch);

    // Addition operations
    *intPointer += 5;
    *floatPointer += 2.5;
    *charPointer += 3;

    printf("\nAfter addition:\n");
    printf("num1: %d\n", num1);
    printf("num2: %.2f\n", num2);
    printf("ch: %c\n", ch);

    // Subtraction operations
    *intPointer -= 3;
    *floatPointer -= 1.5;
    *charPointer -= 2;

    printf("\nAfter subtraction:\n");
    printf("num1: %d\n", num1);
    printf("num2: %.2f\n", num2);
    printf("ch: %c\n", ch);

    return 0;
}
