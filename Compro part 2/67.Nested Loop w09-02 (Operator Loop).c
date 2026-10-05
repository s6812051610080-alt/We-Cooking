#include <stdio.h>

int main() {
    int sum, p, x, y;
    sum = 0;

    for (x = 1, y = 1; x * y <= 15; x++, y += 2) {
        p = x * y;
        sum = sum + p;
        printf("%d * %d = %d\n", x, y, p);
    }

    printf("summation of x * y = %d\n", sum);

    return 0;
}