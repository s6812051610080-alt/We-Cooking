#include <stdio.h>
void slash_n() {
    printf("Hello\nWorld\n");
    printf("Testing\n");
}

void slash_t() {
    printf("My name is \t Game\n");
}

void slash_r() {
    printf("Deleted Word \r Nah I'd win\n");
}

void slash_b() {
    printf("Hello\bWorld\n");
    printf("678\b67\n");
}

void slash_doubleqoute() {
    printf("She said \"HI\" \n");
    printf("This is the \"ULTIMATE\" \n");
    printf("\"YOU\" are so beautiful \n");
}

void slash_singleqoute() {
    printf(" \'Ahh\' Hell no man.. \n ");
}

void slash_doubleslash() {
    printf(" C:\\file.txt \n");
    printf("Dustin\\Lucas\\Vill\\Mike\\Max\\Ughuhughghghu \n");
    printf(" 6700\\100 is Equal 67 \n");
}

void slash_a() {
    printf(" \"Alert!!\" \a \n"); //มันจะส่งเสียงได้แค่บาง Console 
    printf("EMERGENCY!! EMERGENCY!!!! \a \n");
}

void slash_007() { //เหมือนกับ \a ทุกประการ
    printf(" Ringing!!!! \007 \n");
}

int main() {
    slash_n();
    slash_t();
    slash_r();
    slash_b();
    slash_doubleqoute();
    slash_singleqoute();
    slash_doubleslash();
    slash_a();
    slash_007();
    return 0;
}
