#include <stdio.h>

int main() {
    int units;
    float amount, sub_charge, total_amount;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        amount = units * 0.50;
    }
    else if (units <= 150) {
        amount = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250) {
        amount = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.25;
    }
    else {
        amount = 50 * 0.50 + 100 * 0.75 + 100 * 1.25 + (units - 250) * 2.50;
    }

    sub_charge = 0.20 * amount;
    total_amount = amount + sub_charge;

    printf("Bill amount is: %.2f", total_amount);

    return 0;
}
