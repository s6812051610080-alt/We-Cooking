#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int doubleValue(int x) {
    return x * 2;
}

int main() {

    // ① add(3,4) = 7 -> ② doubleValue(7) = 14
    int result = doubleValue(add(3, 4));
    printf("Result = %d\n", result);
    return 0;

}