#include <stdio.h>

int main() {
    int a = 100;
    
    int *p = &a;
    
    printf("Value of a: %d\n", a);
    printf("Value via pointer:: %d\n", *p);
    printf("Address of a: %p\n", &a);  // Print address of a
    
    *p = 50;
    
    printf("Value of a after modification through pointer: %d\n", a);
    printf("Address of a after modification: %p\n", &a);  // Address remains the same
    
    return 0;
}