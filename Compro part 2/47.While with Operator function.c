#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("i: %d\n", i);
        i+=2;
    }
    printf("End of loop\n");

    return 0;
}