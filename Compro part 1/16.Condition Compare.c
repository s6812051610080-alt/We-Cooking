#include <stdio.h>

int main() {
    int x, y;

    // รับค่าจากผู้ใช้ 2 จำนวน เก็บในตัวแปร x และ y ผ่านแป้นพิมพ์
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    // เปรียบเทียบว่า x กับ y ตัวใดมีค่ามากกว่า
    if (x > y) {
        // ถ้า x มากกว่า y ให้แสดงผลว่า x มากกว่า y
        printf("x is greater than y\n");
    } else if (x < y) {
        // ถ้า x น้อยกว่า y ให้แสดงผลว่า x น้อยกว่า y
        printf("x is less than y\n");
    } else {
        // ถ้าไม่มากกว่าและไม่น้อยกว่า แปลว่า x เท่ากับ y
        printf("x is equal to y\n");
    }

    return 0;
}