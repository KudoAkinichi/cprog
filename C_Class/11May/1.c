// WAP to take input of n numbers of students and each student detail containing name, roll number and marks in a structure and the state and city in form of nested loop using structure concepts in C.

#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
    struct Address {
        char state[50];
        char city[50];
    } address;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Taking input for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("State: ");
        scanf(" %[^\n]s", students[i].address.state);

        printf("City: ");
        scanf(" %[^\n]s", students[i].address.city);
    }

    // Asking for the roll number to display student address
    int searchRollNumber;
    printf("\nEnter the roll number of the student: ");
    scanf("%d", &searchRollNumber);

    // Finding the student and displaying the address
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == searchRollNumber) {
            printf("\nAddress of student with roll number %d:\n", searchRollNumber);
            printf("State: %s\n", students[i].address.state);
            printf("City: %s\n", students[i].address.city);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", searchRollNumber);
    }

    return 0;
}
