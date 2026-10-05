#include <stdio.h>
int main() {

    int a = 58;
    int *p = &a;
    int **q = &p;

    printf("Value of a: %d\n", a);
    printf("Value via *p: %d\n", *p);
    printf("Value via **q: %d\n", **q);
    return 0;

}