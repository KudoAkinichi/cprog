#include <stdio.h>

int main() {
    float salary, hra, da, gross_salary;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if (salary <= 10000) {
        hra = 0.2 * salary;
        da = 0.8 * salary;
    }
    else if (salary <= 20000) {
        hra = 0.25 * salary;
        da = 0.9 * salary;
    }
    else {
        hra = 0.3 * salary;
        da = 0.95 * salary;
    }

    gross_salary = salary + hra + da;

    printf("Gross salary is: %.2f", gross_salary);

    return 0;
}
