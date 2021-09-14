#include "ex3.h"

int main_tp4_ex3() {
    char prenom = 'A', nom = 'Z';
    char *p_prenom = &prenom, *p_nom = &nom;
    printf("vos initiales %c.%c\n", prenom, nom);
    char p = *p_prenom;
    *p_prenom = *p_nom;
    *p_nom = p;
    printf("vos initiales %c.%c\n", prenom, nom);
    return 0;
}