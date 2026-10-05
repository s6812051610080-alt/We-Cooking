#include <stdio.h>
char Grade = 'A';
char Name[] = "Thawin";
int Age = 19;

int PostitiveNumber = 12;
float FloatNumber = 12.22;
float FloatNumE = 3.4e+2;
int HexaDemiNum = 25;
int OctaNum = 35;

int num = 100;

int main() {
    printf(" %c\n", Grade);
    printf(" %s\n", Name);
    printf(" %d\n", Age);
    printf(" %u\n", PostitiveNumber);
    printf(" %f\n", FloatNumber);
    printf(" %e\n", FloatNumE);
    printf(" %x\n", HexaDemiNum);
    printf(" %o\n", OctaNum);
    printf(" %p\n", &num);
}