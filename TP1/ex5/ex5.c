#include "ex5.h"

int main_ex5() {
    float rayon, hauteur;
    printf("Quelle est le rayon du cercle ? ");
    scanf("%f", &rayon);

    printf("\tDiamètre = %.4f\n\tCirconférence = %.4f\n\tAire = %.4f\n", rayon * 2, 2 * M_PI * rayon,
           M_PI * pow(rayon, 2));
    printf("Quelle est la hauteur du cylindre ? ");
    scanf("%f", &hauteur);
    printf("\tVolume = %.4f\n", M_PI * pow(rayon, 2) * hauteur);
    return 0;
}