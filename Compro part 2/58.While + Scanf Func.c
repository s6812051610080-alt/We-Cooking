#include <stdio.h>

int main() {
    int start, stop;
    int i; // ประกาศตัวแปร i ไว้ด้านบนสุด เพื่อรองรับ C คอมไพเลอร์รุ่นเก่า (C89/C90)

    // 1. รับค่า start และ stop
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    // 2. แสดงข้อความสรุปค่า
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("--------------\n");

    // 3. แสดงลำดับตัวเลขด้วย while loop
    printf("Sequence from start to stop: ");
    
    i = start;          // กำหนดค่าเริ่มต้น
    while (i <= stop) { // เงื่อนไขวนลูป
        printf("%d ", i);
        i++;            // เพิ่มค่าทีละ 1
    }
    printf("\n");

    // 4. แสดงข้อความปิดท้าย
    printf("Thank you.\n");

    return 0;
}

/* 
  คำอธิบายการทำงาน (while loop):
  1. ประกาศตัวแปร start, stop และ i ที่ต้นฟังก์ชัน main
  2. รับค่าจากผู้ใช้ผ่าน scanf มาเก็บใน start และ stop
  3. แสดงค่า start และ stop พร้อมพิมพ์เส้นกั้น
  4. ให้ i = start จากนั้นใช้ while (i <= stop) เพื่อตรวจสอบเงื่อนไข
  5. พิมพ์ค่า i แล้วบวกค่า i เพิ่มทีละ 1 (i++) ในทุกรอบที่เงื่อนไขเป็นจริง
  6. เมื่อ i > stop จะออกจากลูป พิมพ์ "Thank you." และจบการทำงาน
*/