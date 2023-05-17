// WAP to take marks of Python, JavaScript, C++ out of 100 and take the average of marks and print the grade according to the following table: O, E, A, B, C, D, F using switch case in C.


#include <stdio.h>

int main() {
    float python_marks, javascript_marks, cpp_marks, average_marks;

    printf("Enter the marks of Python, JavaScript and C++ out of 100:\n");
    printf("Python: ");
    scanf("%f", &python_marks);
    printf("JavaScript: ");
    scanf("%f", &javascript_marks);
    printf("C++: ");
    scanf("%f", &cpp_marks);

    average_marks = (python_marks + javascript_marks + cpp_marks) / 3;

    printf("Average marks = %f\n", average_marks);

    switch((int)average_marks / 10) {
        case 10:
        case 9:
            printf("Grade: O\n");
            break;
        case 8:
            printf("Grade: E\n");
            break;
        case 7:
            printf("Grade: A\n");
            break;
        case 6:
            printf("Grade: B\n");
            break;
        case 5:
            printf("Grade: C\n");
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Grade: F\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
