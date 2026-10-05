#include <stdio.h>

void countCall() {
    int counter = 0;  // Declare normal variable >> counter will reset to 0 each time the function is called
    static int counter_2 = 0;  // Declare a static variable to retain its value between function calls
    counter++;
    counter_2++;
    printf("Call Function: normal counter: %d\n", counter);
    printf("Call Function: static counter: %d\n", counter_2);
}

int main() {
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}