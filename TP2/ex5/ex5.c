#include "ex5.h"

int main_tp2_ex5() {
    int tentative = 3, valide = 0, pin = rand() % 10000, proposition;
    printf("%d\n", pin);
    while (!valide && tentative) {
        printf("Code PIN: ");
        scanf("%d", &proposition);
        if (proposition == pin) {
            valide = 1;
        } else {
            printf("\tErreur, il vous reste %d tentatives.\n", --tentative);
        }
    }
    if (tentative) {
        printf(" \tTelephone deverouille");
    } else {
        printf("\tNombre de tentative épuisé");
    }
    return 0;
}