#include <stdio.h>

int main() {
    float score;
    float bonus = 0;
    float total;

    printf("Enter your midterm score: ");
    scanf("%f", &score);

    if (score >= 50) {
        bonus = score * 0.05;
    }

    total = score + bonus;

    printf("Total score: %.2f\n", total);

    printf("End of evaluation\n");

    return 0;
}