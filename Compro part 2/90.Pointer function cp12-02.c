#include <stdio.h>

int main() {
    int a = -123;
    int *p = &a, *q = &a;

    printf("a = %d\n", a);               // -123
    printf("*p = %d\n", *p);             // -123
    printf("*q = %d\n", *q);             // -123
    printf("Address of a: %p\n", &a);
    printf("Address stored in p: %p\n", p);
    printf("Address stored in q: %p\n", q);
    return 0;
}