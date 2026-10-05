#include <stdio.h>

int main() {
    int step;
    printf("Please enter the step you have completed\n");
    printf("1. Fill in personal information\n");
    printf("2. Confirm email\n");
    printf("3. Attach documents\n");
    printf("4. Make payment\n");
    printf("5. Confirm successful registration\n");
    printf("Enter the step number (1-5): ");
    scanf("%d", &step);

    printf("Remaining steps you need to take:\n");

    switch (step+1) {
        case 1: printf("- Fill in personal information\n");
        case 2: printf("- Confirm email\n");
        case 3: printf("- Attach documents\n");
        case 4: printf("- Make payment\n");
        case 5: printf("- Confirm successful registration\n"); break;
        default: printf("Please specify a step between 1 and 5\n");
    }

    return 0;
}