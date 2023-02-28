// WAP to find the root a quadratic equation in C.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c): \n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are real and different: root1 = %f and root2 = %f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("The roots are real and equal: root1 = root2 = %f\n", root1);
    } else {
        printf("The roots are imaginary\n");
    }

    return 0;
}
