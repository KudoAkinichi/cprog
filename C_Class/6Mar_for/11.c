// WAP to convert a decimal to binary using for loop in C

#include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // convert decimal to binary
    while (decimal > 0) {
        int rem = decimal % 2;
        binary += rem * base;
        base *= 10;
        decimal /= 2;
    }

    printf("Binary equivalent: %d", binary);

    return 0;
}
