#include <stdio.h>

int main() {
    printf("===== w06-02-02 (double) =====\n");
    double x = 1.0, y = 2.0, z;
    printf("Line 1: x=%.2f, y=%.2f, z=?\n", x, y);
    x = y + 5.0;
    printf("Line 2: x=%.2f, y=%.2f\n", x, y);
    y = x / 2.0;
    printf("Line 3: x=%.2f, y=%.2f\n", x, y);
    y = (x * 3.0) + 4.0;
    printf("Line 4: x=%.2f, y=%.2f\n", x, y);
    x = -0.5 - y;
    printf("Line 5: x=%.2f, y=%.2f\n", x, y);
    z = x + y;
    printf("Line 6: x=%.2f, y=%.2f, z=%.2f\n", x, y, z);

    return 0;
}