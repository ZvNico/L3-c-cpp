#include "ex8.h"

#define SIZE 100

int main_tp3_ex8() {
    char chaine[SIZE];
    printf("Ecrire un message: ");
    fgets(chaine, SIZE, stdin);
    for (int i = 0; (i < SIZE) && chaine[i]; ++i) {
        if ((chaine[i] >= 'a') && (chaine[i] <= 'z')) {
            chaine[i] -= 32;
        }
    }
    printf("Donne en majuscule: %s", chaine);
    return 0;
}