#include <stdio.h> 

int main() {
    // === ประกาศตัวแปรสำหรับคนคนที่ 1 ===
    char name1;       // ชื่อเล่น (ตัวอักษร 1 ตัวพิมพ์ใหญ่)
    int age1;         // อายุ (จำนวนเต็ม)
    float height1;    // ส่วนสูง (ทศนิยม)
    float weight1;    // น้ำหนัก (ทศนิยม)
    char grade1;      // รหัสเกรด (ตัวอักษร 1 ตัว)

    // === ประกาศตัวแปรสำหรับคนที่ 2 ===
    char name2;
    int age2;
    float height2;
    float weight2;
    char grade2;

    // === ประกาศตัวแปรสำหรับคนที่ 3 ===
    char name3;
    int age3;
    float height3;
    float weight3;
    char grade3;

    // === รับข้อมูลทีละบรรทัด ทั้งหมด 3 บรรทัด (1 คน/บรรทัด) ===
    // ใช้เว้นวรรคหน้า %c เพื่อข้ามตัวเว้นวรรคหรือการขึ้นบรรทัดใหม่
    
    // รับข้อมูลคนที่ 1
    scanf(" %c %d %f %f %c", &name1, &age1, &height1, &weight1, &grade1);

    // รับข้อมูลคนที่ 2
    scanf(" %c %d %f %f %c", &name2, &age2, &height2, &weight2, &grade2);

    // รับข้อมูลคนที่ 3
    scanf(" %c %d %f %f %c", &name3, &age3, &height3, &weight3, &grade3);

    // === แสดงผลข้อมูลแบบจัดรูปแบบ ===
    printf("\n--- Student Information Summary ---\n");
    
    // แสดงผลคนที่ 1 (ส่วนสูงและน้ำหนักจัดเป็นทศนิยม 1 ตำแหน่ง %.1f)
    printf("Person 1: Name: %c, Age: %d, Height: %.1f cm, Weight: %.1f kg, Grade: %c\n", 
           name1, age1, height1, weight1, grade1);

    // แสดงผลคนที่ 2
    printf("Person 2: Name: %c, Age: %d, Height: %.1f cm, Weight: %.1f kg, Grade: %c\n", 
           name2, age2, height2, weight2, grade2);

    // แสดงผลคนที่ 3
    printf("Person 3: Name: %c, Age: %d, Height: %.1f cm, Weight: %.1f kg, Grade: %c\n", 
           name3, age3, height3, weight3, grade3);

    return 0; // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสิ้นสมบูรณ์
}