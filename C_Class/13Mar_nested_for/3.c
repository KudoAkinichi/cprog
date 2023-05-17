#include <stdio.h>

int main() {
    int i, j, n = 12;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
