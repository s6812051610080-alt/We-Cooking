#include <stdio.h>

int main() {

    char Name;
    int Age;

    printf("Enter your name: \n");
    scanf("%c", &Name);

    printf("Enter your age: \n");
    scanf("%d", &Age);

    printf("Hi %c. You're %d years old \n", Name, Age);
    return 0;
}