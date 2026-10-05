#include <stdio.h>

int main() {
    int score[5]; // Declare an array of size 5

    // Assign values to each index
    score[0] = 15;
    score[1] = 10;
    score[2] = 8;
    score[3] = 11;
    score[4] = 10;

    // Print individual scores by index
    printf("Individual scores by index:\n");
    printf("score[0] = %d\n", score[0]);
    printf("score[1] = %d\n", score[1]);
    printf("score[2] = %d\n", score[2]);
    printf("score[3] = %d\n", score[3]);
    printf("score[4] = %d\n", score[4]);

    // Print all scores in array using loop
    printf("\nAll scores in array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", score[i]);
    }
    printf("\n");

    return 0;
}