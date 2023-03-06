// WAP to find factorial of a number using for loop in C


#include <stdio.h>

int main(){
    int num, factorial=1;
    printf("Enter a number:");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        factorial *= i;
    }

    printf("Factorial of %d is %d.", num , factorial);
    return 0;
}
