// WAP to subtract to 2 times which are both in form of hr , min and sec using nested structure concept in C.

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time time1, time2, diff;

    // Input for the first time
    printf("Enter time 1 (hh:mm:ss): ");
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);

    // Input for the second time
    printf("Enter time 2 (hh:mm:ss): ");
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);

    // Converting time1 and time2 to seconds
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;

    // Calculating the difference
    int difference = totalSeconds1 - totalSeconds2;

    // Converting the difference back to hours, minutes, and seconds
    diff.hours = difference / 3600;
    difference %= 3600;
    diff.minutes = difference / 60;
    diff.seconds = difference % 60;

    // Displaying the difference
    printf("The difference is: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
