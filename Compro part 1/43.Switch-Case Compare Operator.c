#include <stdio.h>

int main() {
    int x = 2, y = 3;

    switch ((x + y) > 10) {
        case 1:
            printf("Sum is greater than 10\n");
            break;

        default:
            printf("Sum is less than or equal to 10\n");
    }

    return 0;
}