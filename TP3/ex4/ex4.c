#include "ex4.h"

#define H 4
#define L 4

int main_tp3_ex4() {
    int m[H][L];
    printf("Matrice unitaire de dimension 4:\n");
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < L; ++j) {
            if (j == i) {
                m[i][j] = 1;
            } else {
                m[i][j] = 0;
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}