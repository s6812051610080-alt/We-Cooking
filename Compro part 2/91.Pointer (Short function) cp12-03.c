#include <stdio.h>

int main() {
    short a1 = 219;       // declare and initialize a short variable
    short a2;             // declare a short variable a2
    short *a3;            // declare a pointer to short

    a3 = &a1;             // a3 stores the address of a1
    a2 = *a3;             // a2 gets the value pointed to by a3

    printf("a1 = %d\n", a1);                     // 219
    printf("a3 (address of a1) = %p\n", a3);
    printf("a2 = %d\n", a2);                     // 219

    return 0;
}