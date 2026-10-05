#include <stdio.h>

int main() {
    int a = 5, b = 2;

    float x = 3.0, y = 4.5;
    
    int r1 = a++ * b + (int)y % 3;

    printf("r1 = a++ * b + (int)y %% 3   = %d   (a is now %d after this line)\n", r1, a);
    
    int r2 = (a > b) && ((int)x / b < 2);

    printf("r2 = (a>b) && ((int)x/b<2)  = %d\n", r2);
    
    float r3 = ++x * y - a / 2;

    printf("r3 = ++x * y - a/2          = %.2f   (x is now %.2f)\n", r3, x);
    
    float r4 = ((x += 1.5) > y) || (b-- > 0);

    printf("r4 = ((x+=1.5)>y) || (b-->0) = %.2f   (x is now %.2f, b is still %d because of short-circuit)\n", r4, x, b);

    
    return 0;
}