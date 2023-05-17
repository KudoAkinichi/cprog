// WAP to take ask user for a type of triangle and take input of sides of the triangle and print the area of the triangle using switch case in C.

#include <stdio.h>
#include <math.h>

int main() {
    char type;
    float a, b, c, s, area;

    printf("Enter the type of triangle (e/i/s): ");
    scanf("%c", &type);

    switch (type) {
        case 'e':
            printf("Enter the length of the base and height of the equilateral triangle: ");
            scanf("%f", &a);
            area = sqrt(3) / 4 * a * a;
            printf("Area of the equilateral triangle is: %.2f", area);
            break;
        case 'i':
            printf("Enter the length of the base and height of the isosceles triangle: ");
            scanf("%f %f", &b, &c);
            area = 0.5 * b * c;
            printf("Area of the isosceles triangle is: %.2f", area);
            break;
        case 's':
            printf("Enter the lengths of the sides of the scalene triangle: ");
            scanf("%f %f %f", &a, &b, &c);
            s = (a + b + c) / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("Area of the scalene triangle is: %.2f", area);
            break;
        default:
            printf("Invalid triangle type!");
            break;
    }

    return 0;
}


