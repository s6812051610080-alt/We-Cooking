#include <stdio.h>

int main() {
    int level;
    printf("Enter level (1-4): ");
    scanf("%d", &level);   

    switch (level) {       
        case 1: 
            printf("Beginner\n");
           
        case 2: 
            printf("Intermediate\n");
            
        case 3: 
            printf("Advanced\n"); 
            break;
            
        case 4: 
            printf("Expert\n"); 
            break;
        
        default: 
            printf("Invalid level\n");
            
    }

    return 0;
}