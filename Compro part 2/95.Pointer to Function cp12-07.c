#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int *p;
    int i;

    p = a; // หรือจะใช้ p = &a[0]; ก็ได้ผลเหมือนกัน

    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d, access through pointer = %d\n", i, a[i], *(p + i));
    }

    return 0;
}