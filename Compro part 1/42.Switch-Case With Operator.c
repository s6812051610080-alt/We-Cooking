#include <stdio.h>

int main() {
    int x = 2, y = 3;

    switch (x + y) {
        case 5:
            printf("Sum is 5\n");
            break;
        case 10:
            printf("Sum is 10\n");
            break;
        default:
            printf("Other value\n");
    }

    return 0;
}