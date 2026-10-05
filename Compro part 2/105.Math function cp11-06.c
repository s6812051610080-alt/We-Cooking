#include <stdio.h>
#include <math.h>

int main() {
    double a = 25.0, b = 3.0;

    printf("sqrt(%.2f) = %.2f\n", a, sqrt(a));
    printf("pow(%.2f, %.2f) = %.2f\n", a, b, pow(a, b));
    printf("fabs(-%.2f) = %.2f\n", b, fabs(-b));

    return 0;
}