#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("a = %d, b = %d\n", a, b);
    printf("a == b: %d\n", a == b); // Equal -> 0
    printf("a != b: %d\n", a != b); // Not Equal -> 1
    printf("a > b : %d\n", a > b);  // Greater -> 0
    printf("a < b : %d\n", a < b);  // Less -> 1
    printf("a >= b: %d\n", a >= b); // Greater or Equal -> 0
    printf("a <= b: %d\n", a <= b); // Less or Equal -> 1

    return 0;
}