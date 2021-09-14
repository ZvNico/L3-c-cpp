#include "ex2.h"

int main_tp4_ex2() {
    int n, *p = &n;
    printf("Donnez un nombre entier: ");
    scanf("%d", p);
    printf("la valeur %d est stockee a l'adresse %p", n, p);
    return 0;
}