#include <stdio.h>

int main() {

    int count = 3;
    while (count >= 0) {
        printf("%d ", count);
        count--;
    }
    printf("\ncount = %d\n", count);
}