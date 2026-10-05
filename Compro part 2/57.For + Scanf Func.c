#include <stdio.h>

int main() {
    int start, stop; //ประกาศตัวแปรไว้

    // 1. รับค่า start และ stop จากแป้นพิมพ์
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    // 2. แสดงข้อความบอกค่าเริ่มต้นและค่าสุดท้าย
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("--------------\n");

    // 3. แสดงลำดับตัวเลขจาก start ถึง stop เพิ่มทีละ 1
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 4. แสดงข้อความ "Thank you."
    printf("Thank you.\n");

    return 0;
}

/* 
  คำอธิบายการทำงาน:
  1. ประกาศตัวแปร start และ stop เป็นจำนวนเต็ม (int) เพื่อใช้เก็บค่าเริ่มต้นและค่าสุดท้าย
  2. รับค่าจากผู้ใช้ผ่านฟังก์ชั่น scanf มาเก็บไว้ที่ตัวแปร start และ stop
  3. แสดงค่าที่รับมาจากผู้ใช้ในรูปแบบ "Start number is ... and stop number is ..."
  4. พิมพ์เส้นกั้น "--------------" เพื่อความเป็นระเบียบ
  5. ใช้ for loop โดยกำหนดค่าเริ่มต้น i = start และวนทำซ้ำตราบใดที่ i <= stop 
     ในแต่ละรอบจะพิมพ์ค่า i และเพิ่มค่า i ขึ้นทีละ 1 (i++) ทำให้ได้ลำดับตัวเลขในบรรทัดเดียวกัน
  6. เมื่อ i มากกว่า stop โปรแกรมจะหลุดออกจาก loop ขึ้นบรรทัดใหม่ แล้วพิมพ์ข้อความ "Thank you." จบการทำงาน
*/