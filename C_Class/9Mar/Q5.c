#include <stdio.h>

int main(){
    int n, i, first=0, second =1, next;

    printf("Enter the number of terms to print in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series of %d terms:\n", n);

    for(i=0;i<n;i++) {
        if (i<=1) {
            next = i;
        } 
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
    return 0;
}

// Output:
// Enter the number of terms to print in the Fibonacci series: 7
// Fibonacci series of 7 terms:
// 0
// 1
// 1
// 2
// 3
// 5
// 8