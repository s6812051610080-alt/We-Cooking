#include <stdio.h>

int main() {
    int x = 12, y = 7, z = 12;


    printf("1. x > y            = %d\n", x > y);

    printf("2. x < z            = %d\n", x < z);

    printf("3. x == z           = %d\n", x == z);

    printf("4. x != y           = %d\n", x != y);

    printf("5. !(2*5>=y)||(5!=(5/3)) = %d\n", !(2*5 >= y) || (5 != (5/3)));

    printf("6. !(x < y)         = %d\n", !(x < y));

    printf("7. (x+y) > (z*2)    = %d\n", (x + y) > (z * 2));

    printf("8. (x%%2==0)||(y%%2==1) = %d\n", (x % 2 == 0) || (y % 2 == 1));
    
    printf("9. (x>y) && (z<y)   = %d\n", (x > y) && (z < y));

    return 0;
}