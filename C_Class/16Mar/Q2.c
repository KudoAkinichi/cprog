// WAP to determine the even and odd numbers between 1 to 100  and then calculate sum of each individually in C.

#include <stdio.h>

int main() {
    int i, even_sum = 0, odd_sum = 0;

    // even numbers
    printf("Even numbers between 1 and 100: ");
    for(i = 2; i <= 100; i += 2) {
        printf("%d ", i);
        even_sum += i;
    }
    printf("\nSum of even numbers: %d\n", even_sum);

    // odd numbers
    printf("Odd numbers between 1 and 100: ");
    for(i=1; i <= 100; i+= 2){
        printf("%d", i);
        odd_sum += i;
    }
    printf("\nSum of odd numbers: %d\n", even_sum);

    return 0;
}
