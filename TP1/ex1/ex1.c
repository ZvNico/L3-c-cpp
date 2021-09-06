#include "ex1.h"

int main_tp1_ex1() {
    float montant;
    float taux_de_change = 1.2f;
    printf("Entrez un montant en Euro:");
    scanf("%f", &montant);
    printf("Le taux de change Euro->Dollar est de 1.20\n"
           "Vous avez donc %.1f dollars", montant * taux_de_change);
    return 0;
}
