#include <stdio.h>

int main() {
    int score; // Variable to store the score

    printf("Please enter your score: "); // Prompt user for input
    scanf("%d", &score); // Read the score from user input

    if (score >= 50) { // Check if score is 50 or above
        // If score is 50 or above, the student passes
        printf("Congratulations! You passed\n");

        if (score >= 80) { // Check if score is 80 or above
            printf("Level: Excellent\n"); // Print Excellent if condition is true
        } else if (score >= 65) { // Check if score is 65 or above
            printf("Level: Good\n"); // Print Good if condition is true
        } else { // If score is below 65 but above 50
            // This means the score is between 50 and 64
            printf("Level: Fair\n"); // Print Fair if condition is true
        }

    } else {
        printf("Sorry, you failed\n"); // If score is below 50, the student
    }

    return 0;
}