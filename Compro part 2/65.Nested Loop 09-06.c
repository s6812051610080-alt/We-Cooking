#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("<");
        if (i == 2) {
            break;
        }
        printf("%d>", i);
    }
    return 0;
}