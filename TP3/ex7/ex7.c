#include "ex7.h"

int main_tp3_ex7() {
    int j, m, a;
    char nom[20], prenom[20], yeux[20];
    printf("Donnez les informations suivantes:\n"
           "\tDate de naissance(jj/mm/aaaa): ");
    scanf("%d/%d/%d", &j, &m, &a);
    printf("\tNom: ");
    scanf("%s", nom);
    printf("\tPreom: ");
    scanf("%s", prenom);
    printf("\tCouleurs des yeux: ");
    scanf("%s", yeux);

    printf("Vous vous appelez %s %s, vous etes nee le %d/%d/%d et vos yeux sont %s", prenom, nom, j, m, a, yeux);
    return 0;
}