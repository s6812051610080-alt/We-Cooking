#include <stdio.h>

int main() {
    int data[4] = {5, 4, 1, 8};
    int i;

    for (i = 0; i < 4; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    return 0;
}