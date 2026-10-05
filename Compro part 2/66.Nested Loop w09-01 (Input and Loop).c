#include <stdio.h>

int main() {
    int start, stop;

    // รับค่าเริ่มต้นและค่าสุดท้าย
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    // ตรวจสอบเงื่อนไขจนกว่าค่า start จะน้อยกว่า stop (start < stop)
    while (start >= stop) {
        if (start == stop) {
            printf("Your Start number is equal to Stop number, please try again!\n");
        } else if (start > stop) {
            printf("Your Start number is greater than Stop number, please try again!\n");
        }
        
        // รับค่าจากคีย์บอร์ดใหม่อีกครั้ง
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter stop number: ");
        scanf("%d", &stop);
    }

    // เมื่อ start < stop แล้ว ทำงานพิมพ์ลำดับตัวเลขตามปกติ
    printf("\nSequence:\n");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}