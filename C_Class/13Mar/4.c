// program to print 1 + x + x^2\2! + x^3\3! with nested for loop in C


#include <stdio.h>
#include <math.h>

int main() {
    int i, j, n;
    float  sum = 0.0;
    char x ;

    printf("Enter the variable of your choice: ");
    scanf("%c", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int fact = 1;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        printf("%c^%d/%d! ", x, i, i);
        // if (i == 0) {
        //     sum += 1;
        // } else {
        //     sum += pow(x, i) / fact;
        // }
    }

    // printf("\nThe sum of the series is: %f\n", sum);

    return 0;
}
