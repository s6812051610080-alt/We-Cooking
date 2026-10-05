#include <stdio.h>

int main() {
    float scores[3][3]; // อาเรย์ 2 มิติ: 3 คน x 3 วิชา
    float sum[3] = {0.0, 0.0, 0.0}; // สำหรับเก็บผลรวมของแต่ละวิชา

    // 1. รับค่าคะแนนนักเรียนทีละคน ทีละวิชา
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        
        printf("  Math: ");
        scanf("%f", &scores[i][0]);
        
        printf("  Physics: ");
        scanf("%f", &scores[i][1]);
        
        printf("  Chemistry: ");
        scanf("%f", &scores[i][2]);
        
        // บวกสะสมคะแนนของแต่ละวิชา
        sum[0] += scores[i][0]; // Math
        sum[1] += scores[i][1]; // Physics
        sum[2] += scores[i][2]; // Chemistry
    }

    // 2. แสดงผลลัพธ์ตารางคะแนน
    printf("\nScore Table:\n");
    printf("%-8s %-8s %-8s %-8s\n", "Student", "Math", "Physics", "Chemistry");
    for (int i = 0; i < 3; i++) {
        printf("%-8d %-8.2f %-8.2f %-8.2f\n", 
               i + 1, scores[i][0], scores[i][1], scores[i][2]);
    }

    // 3. แสดงผลค่าเฉลี่ยของแต่ละวิชา
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sum[0] / 3.0);
    printf("Physics: %.2f\n", sum[1] / 3.0);
    printf("Chemistry: %.2f\n", sum[2] / 3.0);

    return 0;
}