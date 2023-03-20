// Keep taking input from numbers and keep adding them but if 0 if given then end the program using do-while in C.

#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter a number (enter 0 to end): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("Sum of the numbers: %d", sum);

    return 0;
}
