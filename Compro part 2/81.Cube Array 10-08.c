#include <stdio.h>

int main() {
    // declare and initialize a 3D array
    int cube[1][2][3] = {
        { {1, 2, 3}, {4, 5, 6} }
    };

    // display all values of the array
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 3; k++) {
                printf("cube[%d][%d][%d] = %d\n", i, j, k, cube[i][j][k]);
            }
        }
    }

    return 0;
}