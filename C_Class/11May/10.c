// q10: implementing tower of hanoi

#include <stdio.h>

void hanoi(int disks, char source, char helper, char destination) {
    // Base Condition
    if (disks == 1) {
        printf("Disk %d moves from tower %c to tower %c.\n", disks, source, destination);
        return;
    }

    // Recursive calls
    hanoi(disks - 1, source, destination, helper);
    printf("Disk %d moves from tower %c to tower %c.\n", disks, source, destination);
    hanoi(disks - 1, helper, source, destination);
}

int main() {
    int disks;
    printf("Number of disks to be displaced: ");
    scanf("%d", &disks);

    // Actual function call
    hanoi(disks, 'A', 'B', 'C');

    return 0;
}
