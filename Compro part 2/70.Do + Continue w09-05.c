#include <stdio.h>

int main() {
    int i = 1;
    do {
        if (i == 6) {
            i++; // เพิ่มค่า i ก่อนข้ามลูป เพื่อไม่ให้ติด Infinite Loop
            continue;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);
    return 0;
}