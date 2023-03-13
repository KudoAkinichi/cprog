// Program in C to build the following pattern: *       using nested for loop.
//                                              * *
//                                              * * *
//                                              * * * *

#include <stdio.h>

int main() {
    int i, j, n = 4;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
