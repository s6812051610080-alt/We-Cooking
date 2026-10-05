#include <stdio.h>

int main() {
    float a;
    double b;

    printf("Enter a float number : ");
    scanf("%f", &a);

    printf("Enter a double number : ");
    scanf("%lf", &b);

    printf("Float Number is %f\n", a);
    printf("Double Number is %lf\n", b);

    return 0;
}