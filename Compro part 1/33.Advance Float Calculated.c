#include <stdio.h>

int main() {
    int a = 7;
    float b = 2.5;

    printf("a / b = %.2f\n", a / b);
    printf("(int)b = %d\n", (int)b);
    printf("(float)a / (int)b = %.2f\n", (float)a / (int)b);

    return 0;
}