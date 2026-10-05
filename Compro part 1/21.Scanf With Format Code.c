#include <stdio.h>

int main() {
    int Age;
    float Height;
    char Grade;

    printf("Enter your age , Height(in meter.) , Grade : ");
    scanf("%d %f %c", &Age, &Height, &Grade);

    printf("Your Age is: %d\n", Age);
    printf("Your Height is: %f\n", Height);
    printf("Your Grade is: %c\n", Grade);
    return 0;
}