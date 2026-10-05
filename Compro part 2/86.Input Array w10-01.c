#include <stdio.h>

int main() {
    int num_students;
    
    // 1. รับค่าจำนวน นศ. ในชั้นเรียน
    printf("Enter number of students: ");
    scanf("%d", &num_students);
    
    float scores[num_students];
    float sum = 0.0;
    
    printf("Enter %d student scores (one per line):\n", num_students);
    
    // 2. รับค่าคะแนนนักเรียนทีละคนจนครบทุกคน
    for (int i = 0; i < num_students; i++) {
        printf("Score %d: ", i + 1);
        scanf("%f", &scores[i]);
        sum += scores[i];
    }
    
    // 3. คำนวณค่าเฉลี่ย
    float average = sum / num_students;
    
    // 4. แสดงผลลัพธ์ทางหน้าจอ
    printf("\nNumber of students = %d\n", num_students);
    printf("Average score = %.2f\n", average);
    
    return 0;
}