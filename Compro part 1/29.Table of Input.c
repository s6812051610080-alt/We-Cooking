#include <stdio.h>

int main() {
    char name[3][20];
    int age[3];
    float height[3], weight[3];
    char grade[3];
    int i;

    // รับข้อมูล 3 คน ทีละบรรทัด
    for (i = 0; i < 3; i++) {
        printf("Enter data for person %d (Name*Age*Height*Weight*GradeCode): ", i + 1);
        scanf("%[^*]*%d*%f*%f*%c", name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงผลเป็นตาราง
    printf("+-------+-----+-----------+-----------+-----------+\n");
    printf("| Name  | Age | Height(cm)| Weight(kg)| Grade Code|\n");
    printf("+-------+-----+-----------+-----------+-----------+\n");

    for (i = 0; i < 3; i++) {
        printf("| %-5s | %-3d | %-9.1f | %-9.1f | %-9c |\n",
               name[i], age[i], height[i], weight[i], grade[i]);
    }

    printf("+-------+-----+-----------+-----------+-----------+\n");

    return 0;
}