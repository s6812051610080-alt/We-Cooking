#include <stdio.h>

int main() {
    printf("===== w06-02-01 (int) =====\n");
    int i = 1, j = 2, k;
    printf("Line 1: i=%d, j=%d, k=?\n", i, j);
    k = i + j;
    printf("Line 2: i=%d, j=%d, k=%d\n", i, j, k);
    i = i + (k * j);
    printf("Line 3: i=%d, j=%d, k=%d\n", i, j, k);
    j = i / 2;
    printf("Line 4: i=%d, j=%d, k=%d\n", i, j, k);
    k = i % 2;
    printf("Line 5: i=%d, j=%d, k=%d\n", i, j, k);
    i = (j + k) * 3;
    printf("Line 6: i=%d, j=%d, k=%d\n", i, j, k);

    return 0;
}