#include <stdio.h>

int count = 0;  // global variable

void increment() {
    count++;
}

int main() {
    increment();
    printf("count = %d\n", count);
    return 0;
}