#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, side, area;

    do {
        printf("\nMenu\n");
        printf("1. Area of circle\n");
        printf("2. Area of square\n");
        printf("3. Area of sphere\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter the radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("The area of the circle is %.2f sq units.\n", area);
                break;
            case 2:
                printf("\nEnter the side of the square: ");
                scanf("%f", &side);
                area = side * side;
                printf("The area of the square is %.2f sq units.\n", area);
                break;
            case 3:
                printf("\nEnter the radius of the sphere: ");
                scanf("%f", &radius);
                area = 4 * PI * radius * radius;
                printf("The area of the sphere is %.2f sq units.\n", area);
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
