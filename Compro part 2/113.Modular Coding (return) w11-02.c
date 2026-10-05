#include <stdio.h>

// สร้างฟังก์ชันคำนวณค่าเฉลี่ย และคืนค่าเป็น float
float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int math, physics, chemistry;

    // รับค่าคะแนน 3 วิชา
    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชันคำนวณค่าเฉลี่ย
    float avg = average(math, physics, chemistry);

    // แสดงผลคะแนนแต่ละวิชาพร้อมค่าเฉลี่ย
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg);

    return 0;
}