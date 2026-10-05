#include <stdio.h>

void update(int *n) {
    *n = 99;            // เปลี่ยนค่าที่ตำแหน่ง pointer ชี้อยู่ เป็น 99
}

int main() {
    int x = 10;         // ประกาศตัวแปร x และกำหนดค่าเริ่มต้น = 10
    update(&x);         // ส่ง address ของ x เข้าไปในฟังก์ชัน update
    printf("x = %d", x); // แสดงค่าปัจจุบันของ x ซึ่งจะเป็น 99
    return 0;
}