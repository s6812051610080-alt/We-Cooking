#include <stdio.h>
#include <math.h>   

int main() {
    
    int a = 5;
    int b = 17;
    float c = 8.5;
    float d = 4.0;
    printf("a = %d, b = %d, c = %.2f, d = %.2f\n", a, b, c, d);   
    printf("d + a = %.2f\n", d + a);
    printf("a - b = %d\n", a - b);
    printf("c * d = %.2f\n", c * d);
    printf("a * c = %.2f\n", a * c);
    printf("c / d = %.2f\n", c / d);
    printf("b / c = %.2f\n", b / c);
    printf("a %% b = %d\n", a % b);
    printf("c %% a = %.2f\n", fmod(c, a));
    printf("c %% d = %.2f\n", fmod(c, d));

    return 0;
}