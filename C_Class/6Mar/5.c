// WAP to display n natural numbers using for loop in C.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);  // get input number from user
    
    // display the first n natural numbers
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    return 0;
}


