#include <stdio.h>

int main() {
    int i, j;
    int score[2][3] = {
        {80, 90, 85},
        {75, 88, 92}
    };

    printf("Scores \n");
    printf("score[0][0]: %d\n", score[0][0]);
    printf("score[0][1]: %d\n", score[0][1]);
    printf("score[0][2]: %d\n", score[0][2]);
    printf("score[1][0]: %d\n", score[1][0]);
    printf("score[1][1]: %d\n", score[1][1]);
    printf("score[1][2]: %d\n", score[1][2]);

    return 0;
}