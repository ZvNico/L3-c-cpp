#include "ex6.h"

int main_tp2_ex6() {
    int n;
    printf("Donnez un nombre entier: ");
    scanf("%d", &n);
    printf("\t%d est un nombre ", n);
    if (n % 2) {
        printf("impair");
    } else {
        printf("pair");
    }
    return 0;
}