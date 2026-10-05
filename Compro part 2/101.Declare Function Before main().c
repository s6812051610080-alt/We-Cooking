#include <stdio.h>

// declare function before main
int sum(int a, int b) {
    int z;
    z = a + b;
    return z;
}

int main() {
    int result = sum(7, 5);
    printf("Sum = %d\n", result);
    return 0;
}