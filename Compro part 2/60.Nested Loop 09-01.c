#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 3; i++) {           // วนรอบแต่ละแม่สูตรคูณ (1 ถึง 3)
        for(j = 1; j <= 3; j++) {       // วนคูณแต่ละตัวในแม่สูตรคูณ
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}