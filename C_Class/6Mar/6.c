// WAP to print even numbers in between n natural numbers using for loop in C.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", n);

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d", i);
    }

    return 0;
}