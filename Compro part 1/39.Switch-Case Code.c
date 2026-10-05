#include <stdio.h>

int main() {
    int day = 1;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Not Found\n");
    }

    return 0;
}