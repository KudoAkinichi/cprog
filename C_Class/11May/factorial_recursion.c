#include <stdio.h>

int factorial(int num) {
    if (num == 1) {
        return num;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    int fact = factorial(num);

    printf("The factorial of %d is %d\n", num, fact);

    return 0;
}
