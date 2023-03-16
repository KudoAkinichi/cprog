// WAP display cube of range of n numbers and then display sum of them using for loop in C.

#include <stdio.h>

int main() {
    int n, i, cube, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        cube = i * i * i;
        printf("Cube of %d is: %d\n", i, cube);
        sum += cube;
    }

    printf("Sum of cubes of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
