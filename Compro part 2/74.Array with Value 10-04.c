#include <stdio.h>

int main() {
    int a[3], i;

    // Assign values: a[0] = 0, a[1] = 5, a[2] = 10
    for(i = 0; i < 3; i++)
        a[i] = i * 5;

    // Print all elements correctly
    for(i = 0; i < 3; i++)
        printf("a[%d] = %d\n", i, a[i]);

    printf("\n");

    return 0;
}