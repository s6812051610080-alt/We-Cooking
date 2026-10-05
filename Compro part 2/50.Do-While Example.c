#include <stdio.h>

int main() {
    float sum = 0.0;
    int k = 1;

    do {
        sum = sum + k;
        k++;
    } while (k <= 10);

    printf("Average = %.4f\n", sum / 10);

    return 0;
}