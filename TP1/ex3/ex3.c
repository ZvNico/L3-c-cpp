#include "ex3.h"

int main_ex3() {
    int var[3], somme = 0;
    float moyenne = 0;
    printf("Saisissez un entier\n");
    scanf("%d", &var[0]);
    printf("Saisissez un entier\n");
    scanf("%d", &var[1]);
    printf("Saisissez un entier\n");
    scanf("%d", &var[2]);
    for (int i = 0; i < 3; i++) {
        moyenne += var[i];
        somme += var[i];
    }
    moyenne /= 3;
    printf("\tSomme = %d\n\tMoyenne = %.1f", somme, moyenne);
    return 0;
}