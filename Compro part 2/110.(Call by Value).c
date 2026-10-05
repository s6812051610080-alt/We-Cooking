#include <stdio.h>

void change(int x) {
    x = 99;
    printf("Inside function: x = %d\n", x);
}

int main() {
    int a = 10;
    change(a);
    printf("Inside main: a = %d\n", a);
    return 0;
}