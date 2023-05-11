// WAP to subtract 2 time value (Hour , min , sec) using structure in C.

#include <stdio.h>

// Define a structure to represent time values in hours, minutes, and seconds
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    // Declare two time variables
    struct Time t1, t2, diff;

    // Read in the first time value
    printf("Enter time 1 (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Read in the second time value
    printf("Enter time 2 (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Subtract the second time value from the first
    diff.seconds = t1.seconds - t2.seconds;
    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours;

    // Adjust for negative seconds or minutes
    if (diff.seconds < 0) {
        diff.seconds += 60;
        diff.minutes--;
    }
    if (diff.minutes < 0) {
        diff.minutes += 60;
        diff.hours--;
    }

    // Print the difference
    printf("Difference: %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
