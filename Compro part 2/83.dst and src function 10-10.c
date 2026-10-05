#include <stdio.h>
#include <string.h>

int main() {
    char src[32] = "Hello";
    char dst[32];

    strcpy(dst, src);
    printf("Copied string (store in dst): %s\n", dst);
    return 0;
}