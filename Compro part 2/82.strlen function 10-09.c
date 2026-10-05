#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    printf("Enter name: ");
    scanf("%s", name);

    int length = strlen(name);
    printf("Length = %d\n", length);
    return 0;
}