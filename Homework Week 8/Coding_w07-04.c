#include <stdio.h>
int main() {
    int level;
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);   
    if (level == 1) {
        
        printf("Silver Member\n");
        printf("Benefit: 5%% discount\n");
    }
    else if (level == 2) {
        
        printf("Gold Member\n");
        printf("Benefit: 10%% discount + Reward points\n");
    }
    else if (level == 3) {
        
        printf("Platinum Member\n");
        printf("Benefit: 15%% discount + Reward points + Birthday gift\n");
    }
    else if (level == 4) {
        
        printf("Diamond Member\n");
        printf("Benefit: All benefits + VIP events\n");
    }
    else {
        
        printf("Invalid membership level\n");
    }
    return 0;
}