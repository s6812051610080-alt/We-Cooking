#include <stdio.h>

int main() {
    int start, stop;

    while (1) {
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter stop number: ");
        scanf("%d", &stop);

        if (start < stop) {
            // หาก start < stop ทำงานตามปกติ (แสดงลำดับตัวเลข)
            printf("Sequence: ");
            for (int i = start; i <= stop; i++) {
                printf("%d ", i);
            }
            printf("\n");
            break; // ออกจากลูป
        } 
        else if (start == stop) {
            // หาก start equal to stop
            printf("Your Start number is equal to Stop number, please try again!\n");
        } 
        else if (start > stop) {
            // หาก start greater than stop
            printf("Your Start number is greater than Stop number, please try again!\n");
        }
    }

    return 0;
}