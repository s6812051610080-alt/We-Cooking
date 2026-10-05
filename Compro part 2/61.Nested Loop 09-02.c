#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int space = 1; space <= 5 - i; space++) {
            printf("  "); // เว้นช่องว่าง
        }
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}