#include "ex7.h"

int main_tp2_ex7() {
    int n, i = 2, trouver = 0;
    printf("Donnez un entier: ");
    scanf("%d", &n);
    while ((i <= (n / 2)) && !trouver) {
        if (n % i == 0) {
            printf("\tn'est pas premier");
            trouver = 1;
        }
        i++;
    }
    if (!trouver) {
        printf("\t est premier");
    }
    return 0;
}