#include "ex2.h"

int main_tp2_ex2() {
    int c;
    printf("Donnez un nombre entier pour le compte a rebours: ");
    scanf("%d", &c);
    for (int i = 0; i < c; ++i) {
        printf("\t%d\n", c - i);
        sleep(1);
    }
    printf("\tBoom !");
    return 0;
}