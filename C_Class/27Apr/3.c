// Find the sum of 'n' positive numbers , where the number is given by the user using break and continue in C.

#include <stdio.h>

int main() {
    int n, i, num, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("Enter a positive number: ");
        scanf("%d", &num);
        
        if (num < 0) {
            printf("Negative number is entered. Exiting the loop.\n");
            break;
        }
        
        if (num % 2 == 0) {
            printf("Even number is entered. Skipping it.\n");
            continue;
        }
        
        sum += num;
    }
    
    printf("The sum of positive odd numbers entered is: %d\n", sum);
    
    return 0;
}
