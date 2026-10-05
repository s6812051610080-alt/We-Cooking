#include <stdio.h>

// 1. ฟังก์ชันรับคะแนน 3 วิชา แล้ว return ผลรวมกลับมา
int calculateTotal(int math, int physics, int chemistry) {
    int total = math + physics + chemistry;
    return total; // << คืนค่าผลรวมคะแนนกลับไป
}

// 2. ฟังก์ชันรับคะแนนรวม แล้ว return เกรด (char) กลับมา
char calculateGrade(int totalScore) {
    if (totalScore >= 240) {
        return 'A'; // << คืนค่า 'A'
    } else if (totalScore >= 180) {
        return 'B'; // << คืนค่า 'B'
    } else {
        return 'F'; // << คืนค่า 'F'
    }
}

int main() {
    int m = 85, p = 80, c = 80;

    // --- นำค่าที่ return จากฟังก์ชันแรก มาเก็บไว้ในตัวแปร ---
    int totalScore = calculateTotal(m, p, c); // ได้ค่า 245 คืนมา
    
    // --- นำค่า totalScore ไปใช้งานต่อกับฟังก์ชันที่สอง ---
    char grade = calculateGrade(totalScore);  // ส่ง 245 ไปคำนวณเกรด ได้ 'A' คืนมา

    // --- หรือนำค่าที่ return ไปใช้ต่อใน printf ตรงๆ ได้เลย ---
    printf("Total Score: %d\n", totalScore);
    printf("Grade: %c\n", grade);
    
    // นำค่า return ไปบวกเพิ่ม/คำนวณต่อทันที
    printf("Score with Bonus (+5): %d\n", calculateTotal(m, p, c) + 5);

    return 0;
}