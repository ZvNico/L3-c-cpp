#include "ex3.h"

#define SIZE 3

int main_tp1_ex3() {
    int var, somme = 0;
    float moyenne = 0;
    for (int i = 0; i < SIZE; i++) {
        printf("Saisissez un entier\n");
        scanf("%d", &var);
        moyenne += var;
        somme += var;
    }
    moyenne /= SIZE;
    printf("\tSomme = %d\n\tMoyenne = %.1f", somme, moyenne);
    return 0;
}