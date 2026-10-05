#include <stdio.h>

int main() {
    int score = 74; // Initial score

    if (score >= 80) { // Check if score is 80 or above
        printf("Grade A\n"); // Print Grade A if condition is true
    }
    else if (score >= 70) { // Check if score is 70 or above
        printf("Grade B\n"); // Print Grade B if condition is true
    }
    else if (score >= 60) { // Check if score is 60 or above
        printf("Grade C\n"); // Print Grade C if condition is true
    }
    else {
        printf("Grade F\n"); // Print Grade F for all other cases
    }

    return 0;
}