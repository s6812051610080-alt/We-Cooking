#include <stdio.h>

// declaration prototype with 2 int parameters and return type int
int sum(int a, int b);

int main() {
    int result = sum(7, 5); // call function sum with arguments 7 and 5
    printf("Result = %d\n", result);
    return 0;
}

// function definition with 2 int parameters and return type int
int sum(int a, int b) {
    int z;
    z = a + b;
    return z; // return the sum of a and b which is z
}