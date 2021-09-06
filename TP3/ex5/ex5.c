#include "ex5.h"

#define H 3
#define L 2

int main_tp3_ex5() {
    char *operateur = "   ";
    int m1[H][L] = {{1, 3},
                    {1, 0},
                    {1, 2}};
    int m2[H][L] = {{0, 0},
                    {7, 5},
                    {2, 1}};
    int m3[H][L], j, i;
    for (i = 0; i < H; ++i) {
        for (j = 0; j < L; ++j) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (i = 0; i < H; ++i) {
        if (i == 1) {
            strcpy(operateur, "+==");
        } else {
            strcpy(operateur, "   ");
        }
        for (j = 0; j < L; ++j) {
            printf("%d  ", m1[i][j]);
        }
        printf("%c  ", operateur[0]);
        for (j = 0; j < L; ++j) {
            printf("%d  ", m2[i][j]);
        }
        printf("%c  ", operateur[1]);
        for (j = 0; j < L; ++j) {
            printf("%d + %d  ", m1[i][j], m2[i][j]);
        }
        printf("%c  ", operateur[2]);
        for (j = 0; j < L; ++j) {
            printf("%d  ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}