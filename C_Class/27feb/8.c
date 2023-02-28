// WAP  to display the grade of a student secured based on their total marks , the grades from the highest to lowest will be O, E, A, B, C, D.

#include <stdio.h>

int main() {
    int totalMarks;

    printf("Enter the total marks secured: ");
    scanf("%d", &totalMarks);

    if (totalMarks >= 90) {
        printf("Grade: O\n");
    } else if (totalMarks >= 80) {
        printf("Grade: E\n");
    } else if (totalMarks >= 70) {
        printf("Grade: A\n");
    } else if (totalMarks >= 60) {
        printf("Grade: B\n");
    } else if (totalMarks >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}
