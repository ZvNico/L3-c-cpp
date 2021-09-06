#include "ex12.h"

int main_tp2_ex12() {
    char operateur;
    int n1, n2, res, erreur = -1;
    printf("Indiquez l'operation mathematique que je dois resoudre (sans espace)\n"
           "\t-sous la forme [nombre1 operateur nombre2] par exemple (2+3)\n"
           "\t-operateurs possibles [+, -, *, /]\n>");
    while (erreur) {
        scanf("%d%c%d", &n1, &operateur, &n2);
        if (operateur != '+' && operateur != '-' && operateur != '*' && operateur != '/') {
            erreur = 1;
        } else if (operateur == '/' && n2 == 0) {
            erreur = 2;
        } else {
            erreur = 0;
        }
        if (erreur == 1) {
            printf("... >%d%c%d\nOperateur invalide, vous devez utilisez l'un des operateur (+, -, *, /) ...\n>", n1,
                   operateur, n2);
        } else if (erreur == 2) {
            printf("Attention la division par 0 est impossible!\n>");
        }
    }

    switch (operateur) {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            break;
    }
    printf("Trop simple! le resultat est: %d %c %d = %d", n1, operateur, n2, res);
    return 0;
}