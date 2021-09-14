#include "ex5.h"

int main_tp4_ex5() {
    char CH[30], *p;
    printf("Chaine de caracteres: ");
    scanf("%s", CH);
    for (p = CH; *p; p++) {
    }
    printf("Longueur de la chaine: %d", (int) (p - CH));
    return 0;
}