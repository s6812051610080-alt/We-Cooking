#include <stdio.h>

int GlobalValue = 100;

void Welcome() {
    printf("Welcome to learning C Language \n");
    int x = 60, y = 7;
    printf("%d\t", x + y);
    printf("Six SEVEN \n");
}

int main() {
    int num1 = 75, num2 = 20;
    Welcome();
    printf("Result of Sum is: %d\n", num1 + num2);
    return 0;
}
