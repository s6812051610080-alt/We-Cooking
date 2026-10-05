#include <stdio.h>

int x = 10;          // global
int main(void) {
    printf("%d\n", x); // x >> global
    int x = 1;         // declare x in main (hide global x)
    {
        int x = 2;     // declare x in block (hide local x in main)
        printf("%d\n", x); // x >> local in block
    }
    printf("%d\n", x);     // x >> local in main
    return 0;
}