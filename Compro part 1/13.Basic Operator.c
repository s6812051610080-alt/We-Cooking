#include <stdio.h>

int main() {
    int a = 13, b = 4;

    float result1 = (float) a / b;
    printf("กรณี 1: (float) a / b = %.2f\n", result1);
    
    float result2 = a / (float) b;
    printf("กรณี 2: a / (float) b = %.2f\n", result2);

    float result3 = (float) (a / b);
    printf("กรณี 3: (float) (a / b) = %.2f\n", result3);

    float result4 = a / b;
    printf("กรณี 4: a / b = %.2f\n", result4);

    float result5 = (float) a / (float) b;
    printf("กรณี 5: (float) a / (float) b = %.2f\n", result5);

    return 0;
}