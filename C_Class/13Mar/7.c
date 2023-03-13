#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Inverse of the pattern:\n");

    // Build the inverse of the pattern using nested for loops
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        for (j = i; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
