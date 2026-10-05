#include <stdio.h>

int main() {
    int a = 6, b = 2, c;
    int *p = &b;
    int *q = p;
    int *r = &c;

    p = &a;
    q = r;
    c = 6;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    return 0;
}