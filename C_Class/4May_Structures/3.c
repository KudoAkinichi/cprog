// WAP to take marks of 5 subjects of n number of students and also display their average marks using structure in C.

#include <stdio.h>

// Define a structure to represent student records
struct Student {
    int roll_no;
    char name[50];
    int marks[5];
    float avg_marks;
};

int main() {
    int n, i, j;
    float sum;

    // Read in the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of student records
    struct Student students[n];

    // Read in the details of each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Enter marks for 5 subjects: ");
        for (j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculate the average marks for each student
    for (i = 0; i < n; i++) {
        sum = 0.0;
        for (j = 0; j < 5; j++) {
            sum += students[i].marks[j];
        }
        students[i].avg_marks = sum / 5;
    }

    // Print out the details of each student, including their average marks
    printf("\nStudent details:\n");
    for (i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");
        for (j = 0; j < 5; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\nAverage marks: %.2f\n", students[i].avg_marks);
    }

    return 0;
}
