#include <stdio.h>

int main() {
    int sum, p, x, y; //ประกาศตัวแปร 4 ตัว ได้แก่ "sum , p , x , y"
    sum = 0; //กำหนดค่า sum ให้เป็น 0
    for (x = 1, y = 1; x * y <= 15; x++, y += 2) //เงื่อนไขคือ ให้ x,y = 1 
    //ต่อมา หาก x*y ได้ไม่เกิน 15 ให้เข้าสู่ขั้นตอนถัดไป คือ ให้ x นำค่ามาใช้ก่อนค่อยเพึ่ม 1
    //และ ให้ค่า y เพึ่มขึ้นทีละ 2 ตามแต่ละขั้นตอน
    {
        p = x * y;
        sum = sum + p;
        printf("%d * %d = %d\n", x, y, p);
    }
    printf("summation of x * y = %d\n", sum);
    return 0;
}