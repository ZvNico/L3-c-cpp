#include "ex3.h"

#define SIZE 1000

int main_tp3_ex3() {
    srand(time(NULL));
    int occ = 0, i;
    char lettres_maj[SIZE], recherche;
    for (i = 0; i < SIZE; ++i) {
        lettres_maj[i] = (char) (65 + rand() % 26);
    }
    do {
        printf("Indiquez une lettre a rechercher: ");
        scanf("%c", &recherche);
        // trick to prevent the \n in scanf %c from proc the loop an additional time
        while (getchar() != '\n');
    } while (recherche < 65 || recherche > 90);
    for (i = 0; i < SIZE; ++i) {
        if (recherche == lettres_maj[i]) {
            occ++;
        }
    }
    if (occ) {
        printf("La lettre est presente %d fois", occ);
    } else {
        printf("La lettre n'est pas presente");
    }

    return 0;
}