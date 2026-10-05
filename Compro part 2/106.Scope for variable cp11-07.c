#include <stdio.h>

void display() {
    int x = 10;   // local variable
    printf("x = %d\n", x);
}

int main() {
    display();
    return 0;
}