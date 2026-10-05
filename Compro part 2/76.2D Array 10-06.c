#include <stdio.h>

int main() {
    int i, j;
    int score[2][3] = {
        {80, 90, 85},
        {75, 88, 92}
    };

    printf("Scores in 2D array format:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    return 0;
}