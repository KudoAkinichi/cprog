// Add 2 dist (km , m) using structure in C.

#include <stdio.h>

// Define a structure to represent distances in kilometers and meters
struct Distance {
    int km;
    int m;
};

int main() {
    // Declare two distance variables
    struct Distance d1, d2, sum;

    // Read in the first distance
    printf("Enter distance 1 (km m): ");
    scanf("%d %d", &d1.km, &d1.m);

    // Read in the second distance
    printf("Enter distance 2 (km m): ");
    scanf("%d %d", &d2.km, &d2.m);

    // Add the distances
    sum.km = d1.km + d2.km;
    sum.m = d1.m + d2.m;

    // Convert excess meters to kilometers
    if (sum.m >= 1000) {
        sum.km += sum.m / 1000;
        sum.m %= 1000;
    }

    // Print the sum
    printf("Sum: %d km %d m\n", sum.km, sum.m);

    return 0;
}
