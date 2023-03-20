// WAP such that for a input number such that 3 then we add 9 + 99 + 999 , using while or do-while loop in C.

#include <stdio.h>

int main() {
    int num, i = 0, sum = 0, n = 9;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        sum += n;
        n = n * 10 + 9;
        i++;
    } while (i < num);

    printf("Sum of the series: %d", sum);

    return 0;
}
