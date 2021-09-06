#include "ex11.h"

int main_tp2_ex11() {
    int n, res = 1, choix = 0;
    printf("Donnez un nombre entier: ");
    scanf("%d", &n);
    do {
        printf("Trouver le factorielle du nombre %d avec (1)While ou (2)For ? ", n);
        scanf("%d", &choix);
    } while (choix != 1 && choix != 2);
    printf("%d! = ", n);
    if (choix == 1) {
        while (n > 1) {
            res *= n--;
        }
    } else {
        for (int i = 2; i < n + 1; ++i) {
            res *= i;
        }
    }
    printf("%d\n", res);
    return 0;
}