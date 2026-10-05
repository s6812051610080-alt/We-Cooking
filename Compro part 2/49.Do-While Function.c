#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("Round %d\n", i);
        i++;
    } while (i <= 5);

    printf("End of loop\n");

    return 0;
}