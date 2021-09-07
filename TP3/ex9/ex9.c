#include "ex9.h"

#define SIZE 100

int main_tp3_ex9() {
    char chaine[SIZE];
    int i, j;
    printf("Ecrire un message: ");
    fgets(chaine, SIZE, stdin);
    printf("\nEffet miroire:\n%s->", chaine);
    for (i = 0; (i < SIZE) && (chaine[i]); ++i) {
    }
    i--;
    for (; i >= 0; --i) {
        printf("%c", chaine[i]);
    }
    return 0;
}