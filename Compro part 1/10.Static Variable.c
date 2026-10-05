#include <stdio.h>

void CountCall() {
    static int counter = 0;
    counter++;
    printf("%d\n", counter);
}

void OuterCall() {
    static int counter = 0;
    counter--;
    printf("%d\n", counter);
}

void MultiCall() {
    static int counter = 0;
    ++counter;
    printf("%d\n", counter);
}

void DevidedCall() {
    static int counter = 0;
    --counter;
    printf("%d\n", counter);
}

int main() {
    CountCall();
    CountCall();
    CountCall();
    CountCall();

    OuterCall();
    OuterCall();
    OuterCall();
    OuterCall();

    MultiCall();
    MultiCall();
    MultiCall();
    MultiCall();
    
    DevidedCall();
    DevidedCall();
    DevidedCall();
    DevidedCall();
    
    return 0;
}