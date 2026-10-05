#include <stdio.h>

int main() {
    int a = 10; // Declare and initialize an integer variable a

    printf("Initial value >> a: %d\n\n", a);

    a += 5;
    printf("a += 5 result a: %d\n", a);

    a -= 3;
    printf("a -= 3 result a: %d\n", a);

    a *= 2;
    printf("a *= 2 result a: %d\n", a);

    a /= 4;
    printf("a /= 4 result a: %d\n", a);

    a %= 5;
    printf("a %%= 5 result a: %d\n\n", a);

    return 0;
}