#include <stdio.h>

// sub function to input two integers
void input(int *a, int *b) {
    printf("Enter two numbers: ");
    scanf("%d %d", a, b);
}

// sub function to add two integers
int add(int x, int y) {
    return x + y;
}

// main function
int main() {
    int a, b;
    input(&a, &b);                         // receive input
    int result = add(a, b);                // calculate
    printf("Sum of %d and %d = %d\n", a, b, result);  // display
    return 0;
}