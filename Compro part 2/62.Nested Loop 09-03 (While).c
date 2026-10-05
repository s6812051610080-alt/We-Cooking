#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        int space = 1;
        while (space <= 5 - i) {
            printf("  ");
            space++;
        }
        int star = 1;
        while (star <= 2 * i - 1) {
            printf("* ");
            star++;
        }
        printf("\n");
        i++;
    }
    return 0;
}