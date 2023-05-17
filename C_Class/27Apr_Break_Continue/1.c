// WAP to display the multiplication table of a given number using goto statement in C.

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = 1;
    start:
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
        if (i <= 10) {
            goto start;
        }

    return 0;
}
