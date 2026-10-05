#include <stdio.h>

void greet() {
    printf("Welcome!\n");
}

void showSum(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int getFive() {
    return 5;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    greet();
    showSum(3, 4);
    printf("getFive() = %d\n", getFive());
    printf("multiply(6, 7) = %d\n", multiply(6, 7));
    return 0;
}