// WAP to read and point student details using structure pointer in C.

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student student;
    struct Student *ptr = &student;

    printf("Enter student name: ");
    scanf("%s", ptr->name);

    printf("Enter student age: ");
    scanf("%d", &(ptr->age));

    printf("Enter student grade: ");
    scanf("%f", &(ptr->grade));

    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Grade: %.2f\n", ptr->grade);

    return 0;
}
