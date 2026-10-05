int level = 2;
#include <stdio.h>

int main() {
    int level = 2;

    switch (level) {
        case 1:
            printf("Beginner\n");
        case 2:
            printf("Intermediate\n");
        case 3:
            printf("Advanced\n");
    }
    return 0;
}