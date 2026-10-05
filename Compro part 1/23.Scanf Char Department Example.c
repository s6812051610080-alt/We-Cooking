#include <stdio.h>

int main() {
    char first_name;
    char department[30];
    int age;

    printf("Enter your information (First_Character/Age/Department): ");
    scanf(" %c/%d/%s", &first_name, &age, department);

    printf("\n--- Summary ---\n");
    printf("First Character : %c\n", first_name);
    printf("Age             : %d\n", age);
    printf("Department      : %s\n", department);
    // เวลาเขียน Input ให้ใส่เป็น ( อักษรนำหน้าชื่อ/อายุ/บ้านเกิดเมืองนอน)
    return 0;
}