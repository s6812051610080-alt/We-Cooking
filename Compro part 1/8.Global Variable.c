#include <stdio.h>

int score = 0;

void updateScore() {
    score = 100;
    printf(" %d\n", score);
}

void showScore() {
    printf(" %d\n", score);
}

int main() {
    printf(" %d\n", score);
    updateScore();
    showScore();
    return 0;
}