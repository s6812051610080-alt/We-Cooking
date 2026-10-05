#include <stdio.h>

int main() {
    float basicfloatnum = 1;
    float onepoint = 1.1;
    float estimatenum1 = 1.2;
    float estimatenum2 = 1.7;
    float estimatenum3 = 1.5;
    float estimatenum4 = 1.4;
    float pi = 3.14;
    float e = 2.718;
    float δ = 4.6692;
    printf("Basic Float number : %f\n", basicfloatnum);
    printf("Basic Estimate 1.2 number : %.f\n", estimatenum1);
    printf("Basic Estimate 1.7 number : %.f\n", estimatenum2);
    printf("Basic Estimate 1.5 number : %.f\n", estimatenum3);
    printf("Basic Estimate 1.4 number : %.f\n", estimatenum4);
    printf("Value of one point number: %.1f\n", onepoint);
    printf("Value of Pi: %.2f\n", pi);
    printf("Value of euler's number: %.3f\n", e);
    printf("Value of Feigenbaum constant: %.4f\n", δ);
    return 0;
}