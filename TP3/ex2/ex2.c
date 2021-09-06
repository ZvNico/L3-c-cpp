#include "ex2.h"

#define SIZE 5

int main_tp3_ex2() {
    int tab[SIZE], max, min;
    printf("Remplir le tableau suivant:\n");
    printf("tab[0]: ");
    scanf("%d", &tab[0]);
    max = tab[0];
    min = tab[0];
    float moyenne = (float) tab[0];
    for (int i = 1; i < SIZE; ++i) {
        printf("tab[%d]: ", i);
        scanf("%d", &tab[i]);
        moyenne += (float) tab[i];
        if (min > tab[i]) {
            min = tab[i];
        } else if (max < tab[i]) {
            max = tab[i];
        }
    }
    moyenne /= SIZE;
    printf("max = %d, min = %d, moyenne = %.1f", max, min, moyenne);

    return 0;
}