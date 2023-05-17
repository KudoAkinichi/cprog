// WAP to find armstrong number between 1 to 1000 using for loop in C.

#include <stdio.h>
#include <math.h>

int main() {
    int num, sum, digit, temp, start = 1, end = 1000;

    printf("Armstrong numbers between %d and %d are: ", start, end);

    for (num = start; num <= end; num++) {
        sum = 0;
        temp = num;

        // find the sum of cubes of digits
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        // check if the number is Armstrong or not
        if (num == sum) {
            printf("%d ", num);
        }
    }

    return 0;
}
