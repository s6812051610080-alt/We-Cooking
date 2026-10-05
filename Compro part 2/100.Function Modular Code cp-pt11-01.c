#include <stdio.h>

int sum(int a, int b);  // declaration prototype

int main() {
    int result = sum(7, 5); // call function sum with arguments 7 and 5
    printf("Result = %d\n", result);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}