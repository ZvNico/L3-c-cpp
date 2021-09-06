#include "ex3.h"

int main_tp2_ex3() {
    int n1, n2;
    printf("Donnez deux nombres:\n\tNombre 1 = ");
    scanf("%d", &n1);
    printf("\tNombre 2 = ");
    scanf("%d", &n2);
    if (n1 != n2) {
        printf("\nLes nombres sont différents\n");
        if (n1 > n2) {
            printf("Le nombre 1 est superieur au nombre 2 de %d", n1 - n2);
        } else {
            printf("Le nombre 2 est superieur au nombre 1 de %d", n2 - n1);
        }
    } else {
        printf("\nLes nombres sont identiques\n");
    }
    return 0;
}