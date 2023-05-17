// WAP to get the electricity bill of a user by taking input of units consumed and print the bill according to the following table: 1-100 unit (Rs 4.2 per unit), 101-200 unit (Rs 5.02 per unit), 201-300 (Rs 5.87 per unit) using switch case in C.

#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    switch (units / 100) {
        case 0:
            bill = units * 4.2;
            break;
        case 1:
            bill = 100 * 4.2 + (units - 100) * 5.02;
            break;
        case 2:
        case 3:
            bill = 100 * 4.2 + 100 * 5.02 + (units - 200) * 5.87;
            break;
        default:
            printf("Invalid input");
            break;
    }

    printf("Electricity bill = %f", bill);

    return 0;
}