#include <stdio.h>
#include <string.h>

int main() {
    char a[16] = "Hello";
    char b[16] = "Hello";

    if(strcmp(a, b) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    return 0;
}