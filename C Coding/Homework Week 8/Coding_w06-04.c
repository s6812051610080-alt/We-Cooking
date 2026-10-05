#include <stdio.h>

int main() {
    
    double x1, x2;
    int y = 3, z = 2, a = 4;
    double price = 10.0, quantity = 5.0, discount = 2.0;
    double total1, total2;
    double rate = 20.0;
    int score1, score2, penalty = 3, mistake = 1;

    printf("===== 1) x = x - 4.0;  VS  x -= 4.0; =====\n");
    x1 = 10.0; x1 = x1 - 4.0;
    x2 = 10.0; x2 -= 4.0;
    printf("full: x1=%.2f | shorthand: x2=%.2f\n\n", x1, x2);

    printf("===== 2) x = 6.5 * x;  VS  x *= 6.5; =====\n");
    x1 = 10.0; x1 = 6.5 * x1;
    x2 = 10.0; x2 *= 6.5;
    printf("full: x1=%.2f | shorthand: x2=%.2f\n\n", x1, x2);

    printf("===== 3) x = x %% (y+z*a);  VS  x %%= (y+z*a); =====\n");
    
    int xi1 = 10, xi2 = 10;
    xi1 = xi1 % (y + z * a);
    xi2 %= (y + z * a);
    printf("full: xi1=%d | shorthand: xi2=%d\n\n", xi1, xi2);

    printf("===== 4) x = x / (2.0*x);  VS  x /= (2.0*x); =====\n");
    x1 = 10.0; x1 = x1 / (2.0 * x1);
    x2 = 10.0; x2 /= (2.0 * x2);
    printf("full: x1=%.4f | shorthand: x2=%.4f\n\n", x1, x2);

    printf("===== 5) total = total+(price*quantity-discount); VS total += ...; =====\n");
    total1 = 100.0; total1 = total1 + (price * quantity - discount);
    total2 = 100.0; total2 += (price * quantity - discount);
    printf("full: total1=%.2f | shorthand: total2=%.2f\n\n", total1, total2);

    printf("===== 6) x = x*(1+rate/100); VS x *= (1+rate/100); =====\n");
    x1 = 10.0; x1 = x1 * (1 + rate / 100);
    x2 = 10.0; x2 *= (1 + rate / 100);
    printf("full: x1=%.2f | shorthand: x2=%.2f\n\n", x1, x2);

    printf("===== 7) score = score-(penalty*(mistake+1)); VS score -= ...; =====\n");
    score1 = 50; score1 = score1 - (penalty * (mistake + 1));
    score2 = 50; score2 -= (penalty * (mistake + 1));
    printf("full: score1=%d | shorthand: score2=%d\n", score1, score2);

    return 0;
}