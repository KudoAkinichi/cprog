// WAP such that for a input number such that 3 then we add 9 + 99 + 999 , using C.

#include <stdio.h>

int main() {
    int n, i;
    long long int sum = 0, term = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += term;
        term = term * 10 + 9;
    }

    printf("Sum of the series is: %lld\n", sum);

    return 0;
}
