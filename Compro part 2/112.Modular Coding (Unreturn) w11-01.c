#include <stdio.h>

// สร้างฟังก์ชัน inputAndShow เพื่อรับคะแนนและแสดงผลทันที
void inputAndShow() {
    int math, physics, chemistry;

    // รับค่าคะแนนทั้ง 3 วิชา
    printf("Enter Math: ");
    scanf("%d", &math);
    
    printf("Enter Physics: ");
    scanf("%d", &physics);
    
    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // แสดงผลคะแนนที่รับมา
    printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
    // เรียกใช้งานฟังก์ชัน inputAndShow
    inputAndShow();

    return 0;
}