#include "ex4.h"

int main_tp1_ex4() {
    float hauteur, largeur;
    printf("Saisissez une largeur:\n");
    scanf("%f", &largeur);
    printf("Saisissez une longueur:\n");
    scanf("%f", &hauteur);
    printf("\tPérimètre = %.1f\n\tSurface = %.1f\n", 2 * largeur + 2 * hauteur, largeur * hauteur);
    return 0;
}
