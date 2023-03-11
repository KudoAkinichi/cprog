#include <stdio.h>

// Function declarations
int gcd(int num1, int num2);
int lcm(int num1, int num2);

int main() {
    int choice, num1, num2, result;

    do {
        printf("\nMenu\n");
        printf("1. Calculate GCD of 2 numbers\n");
        printf("2. Calculate LCM of 2 numbers\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter two positive integers: ");
                scanf("%d %d", &num1, &num2);
                result = gcd(num1, num2);
                printf("GCD of %d and %d is %d\n", num1, num2, result);
                break;
            case 2:
                printf("\nEnter two positive integers: ");
                scanf("%d %d", &num1, &num2);
                result = lcm(num1, num2);
                printf("LCM of %d and %d is %d\n", num1, num2, result);
                break;
            case 0:
                printf("\nExiting program...");
                break;
            default:
                printf("\nInvalid choice. Please try again.");
        }
    } while(choice != 0);

    return 0;
}

// Function definitions
int gcd(int num1, int num2) {
    int i, gcd;

    for(i=1; i <= num1 && i <= num2; ++i) {
        if(num1%i==0 && num2%i==0) {
            gcd = i;
        }
    }

    return gcd;
}

int lcm(int num1, int num2) {
    int max;

    max = (num1 > num2) ? num1 : num2;

    while(1) {
        if(max%num1==0 && max%num2==0) {
            return max;
        }
        ++max;
    }
}
