// To demonstrate working of bitwise operator(<<, >>, &, |, ^, ~) using C program.

#include <stdio.h>

int main() {
    int num1 = 14; // binary 1110
    int num2 = 5; // binary 0101

    // left shift operator
    int left_shift = num1 << 2; // binary 111000
    printf("Left shift of %d by 2 bits: %d (binary %d)\n", num1, left_shift, left_shift);

    // right shift operator
    int right_shift = num2 >> 2; // binary 0001
    printf("Right shift of %d by 2 bits: %d (binary %d)\n", num2, right_shift, right_shift);

    // bitwise AND operator
    int bitwise_and = num1 & num2; // binary 0100
    printf("Bitwise AND of %d and %d: %d (binary %d)\n", num1, num2, bitwise_and, bitwise_and);

    // bitwise OR operator
    int bitwise_or = num1 | num2; // binary 1111
    printf("Bitwise OR of %d and %d: %d (binary %d)\n", num1, num2, bitwise_or, bitwise_or);

    // bitwise XOR operator
    int bitwise_xor = num1 ^ num2; // binary 1011
    printf("Bitwise XOR of %d and %d: %d (binary %d)\n", num1, num2, bitwise_xor, bitwise_xor);

    // bitwise NOT operator
    int bitwise_not = ~num1; // binary 0001
    printf("Bitwise NOT of %d: %d (binary %d)\n", num1, bitwise_not, bitwise_not);

    return 0;
}

