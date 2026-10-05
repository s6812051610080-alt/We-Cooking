#include <stdio.h>

// TODO: เขียนฟังก์ชัน void doubleArray(int *arr, int size)
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * 2; // หรือเขียนเป็น arr[i] = arr[i] * 2; ก็ได้
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;

    // แสดงค่าก่อนคูณ
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // เรียกใช้ฟังก์ชัน doubleArray
    doubleArray(a, size);

    // แสดงค่าหลังคูณ
    printf("After : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

// === คำอธิบายการทำงานของโปรแกรม ===
// 1. ฟังก์ชัน doubleArray() รับพารามิเตอร์เป็น pointer (int *arr) ชี้ไปยังอาร์เรย์ และจำนวนสมาชิก (int size)
// 2. ภายในฟังก์ชันใช้ลูป for วนตามจำนวน size เพื่อเข้าถึงสมาชิกแต่ละตัวในอาร์เรย์ผ่าน pointer *(arr + i) แล้วทำการคูณด้วย 2
// 3. การแก้ไขผ่าน pointer ในฟังก์ชันส่งผลให้ข้อมูลในอาร์เรย์ a ของ main() ถูกเปลี่ยนตามจริง (Pass by Reference/Address)
// 4. ใน main() มีการวนลูปเพื่อแสดงสมาชิกในอาร์เรย์ทั้งก่อนและหลังเรียกใช้ฟังก์ชัน ทำให้ได้ผลลัพธ์ Before: 1 2 3 4 5 และ After : 2 4 6 8 10