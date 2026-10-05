#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++; // เพิ่มค่า i ก่อนข้ามลูป เพื่อไม่ให้ติด Infinite Loop
            continue;
        }
        printf("%d ", i);
        i++;
    }
    return 0;
}