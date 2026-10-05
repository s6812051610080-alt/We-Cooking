#include <stdio.h>

int main() {

    
    int A = -2 + 5 * 2;
    printf("A = -2 + 5*2         = %d\n", A);
    
    int B = 10 / 2 * 3;
    printf("B = 10/2 * 3         = %d\n", B);
    
    int C = 6 / 2 + 3 * (4 % 2);
    printf("C = 6/2 + 3*(4%%2)    = %d\n", C);
    
    int D = (5 + 2) * 15 % 4;
    printf("D = (5+2)*15%%4       = %d\n", D);
    
    int E = 6 + 2 * 2 - 6 / 2;
    printf("E = 6+2*2-6/2        = %d\n", E);
    
    int F = 5 + 3 * 2 - 8 / 4 + (6 % 5);
    printf("F = 5+3*2-8/4+(6%%5)  = %d\n", F);
    
    int G = (4 + 3) * 2 - 10 / (2 + 3);
    printf("G = (4+3)*2-10/(2+3) = %d\n", G);
    return 0;
}