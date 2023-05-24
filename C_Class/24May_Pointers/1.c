// WAP to display size of integer , float, char , variables and pointer using pointer concept in C.

#include <stdio.h>

int main() {
    int integerVariable;
    float floatVariable;
    char charVariable;

    int* integerPointer;
    float* floatPointer;
    char* charPointer;

    integerPointer = &integerVariable;
    floatPointer = &floatVariable;
    charPointer = &charVariable;

    printf("Size of integer variable: %zu bytes\n", sizeof(integerVariable));
    printf("Size of float variable: %zu bytes\n", sizeof(floatVariable));
    printf("Size of char variable: %zu bytes\n", sizeof(charVariable));

    printf("Size of integer pointer: %zu bytes\n", sizeof(integerPointer));
    printf("Size of float pointer: %zu bytes\n", sizeof(floatPointer));
    printf("Size of char pointer: %zu bytes\n", sizeof(charPointer));

    return 0;
}
