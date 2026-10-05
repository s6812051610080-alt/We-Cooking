#include <stdio.h>

int score = 0;

void updateScore() {
    int score = 100;
    printf(" %d\n", score);
}

void showScore() {
    int score = 50;
    printf(" %d\n", score);
}

int main() {
    printf(" %d\n", score);
    updateScore();
    showScore();
    return 0;
}