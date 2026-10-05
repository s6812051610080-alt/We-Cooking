#include <stdio.h>

int main() {
    int age, vipLevel;
    float amount, discountPercent;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (vipLevel == 5 || amount > 50000) {
        discountPercent = 25;
    }
    else if (age > 60 || vipLevel == 3 || vipLevel == 4) {
        discountPercent = 20;
    }
    else if (age >= 30 && age <= 40 && amount > 2000) {
        discountPercent = 15;
    }
    else if (age >= 18 && age <= 25 && amount > 1000) {
        discountPercent = 10;
    }
    else {
        discountPercent = 0;
    }

    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vipLevel, amount);

    if (discountPercent > 0) {
        printf("Discount received: %.0f%%\n", discountPercent);
    } else {
        printf("No discount applied\n");
    }

    printf("\nThank you for shopping with us!\n");

    return 0;
}