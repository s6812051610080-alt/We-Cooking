#include <stdio.h>

int main() {
    int A = 8 - 3 * 2 + 5;
    int B = 18 / 3 * 2 - 4;
    int C = 7 + 4 * (9 % 5);
    int D = (6 + 2) * 13 % 5;
    int E = 20 / 3 + 2 * 5 - (11 % 4);

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}