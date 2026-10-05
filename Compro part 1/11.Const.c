#include <stdio.h>

const int GlobalValue = 50;

void showValue() {
    const int LocalValue = 100;
    printf("LOCAL VALUE = %d\n", LocalValue);
    printf("GLOBAL VALUE = %d\n", GlobalValue);
}

int main() {
    showValue();
    printf("GLOBAL VALUE = %d\n", GlobalValue);
    return 0;
}