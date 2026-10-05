#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 1; i++) {           
        for(j = 1; j <= 3; j++) {       
            printf("(%d,%d) \t", i, j);
        }
    }

    printf("\n");

    for(i = 2; i <= 2; i++) {           
        for(j = 1; j <= 3; j++) {       
            printf("(%d,%d) \t", i, j);
        }
    }
    
    printf("\n");

    for(i = 3; i <= 3; i++) {           
        for(j = 1; j <= 3; j++) {       
            printf("(%d,%d) \t", i, j);
        }
    }
    return 0;
}