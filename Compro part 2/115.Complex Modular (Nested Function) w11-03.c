#include <stdio.h>

// ฟังก์ชันรับค่าคะแนนของนักเรียน 3 คน (คนละ 3 วิชา)
void inputScores(float arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("  Math: ");
        scanf("%f", &arr[i][0]);
        printf("  Physics: ");
        scanf("%f", &arr[i][1]);
        printf("  Chemistry: ");
        scanf("%f", &arr[i][2]);
    }
}

// ฟังก์ชันแสดงตารางคะแนน
void printTable(float arr[3][3]) {
    printf("\nScore Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%6.2f\t%6.2f\t%6.2f\n", i + 1, arr[i][0], arr[i][1], arr[i][2]);
    }
}

// ฟังก์ชันแสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[3][3]) {
    printf("\nAverage per subject:\n");
    
    char *subjects[3] = {"Math", "Physics", "Chemistry"};
    
    for (int j = 0; j < 3; j++) {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += arr[i][j];
        }
        float avg = sum / 3.0;
        printf("%s: %.2f\n", subjects[j], avg);
    }
}

int main() {
    // 2D array สำหรับเก็บข้อมูลคะแนนนักเรียน 3 คน x 3 วิชา
    float scores[3][3];

    // เรียกใช้งานฟังก์ชันย่อยตามลำดับ
    inputScores(scores);
    printTable(scores);
    printAverage(scores);

    return 0;
}