#include <stdio.h>
#include <string.h>

int main() {
    char a[12] = "Hello";
    char b[8] = "Guys";

    strcat(a, b);   // Result: "HelloGuys"
    printf("Concatenated: %s\n", a);
    return 0;
}