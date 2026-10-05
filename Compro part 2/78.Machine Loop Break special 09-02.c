#include <stdio.h>

int main() {
    int i;
    printf("Machine 1\n");
    for (i = 1; i <= 4; i++) {
        if (i == 4) {
            printf("  Stop inspection\n");
            break;
        }
        printf("  Check point %d\n", i);
    }

    printf("\n");
    
    printf("Machine 2\n");
    for (i = 1; i <= 4; i++) {
        if (i == 4) {
            printf("  Stop inspection\n");
            break;
        }
        printf("  Check point %d\n", i);
    }

    printf("\n");

    printf("Machine 3\n");
    for (i = 1; i <= 4; i++) {
        if (i == 4) {
            printf("  Stop inspection\n");
            break;
        }
        printf("  Check point %d\n", i);
    }

    return 0;
}