#include "ex1.h"

#define SIZE 5

int main_tp3_ex1() {
    int tab[SIZE];
    printf("Tableau: ");
    scanf("%d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);
    printf("Inverse: ");
    for (int i = 1; i < SIZE + 1; ++i) {
        printf("%d ", tab[SIZE - i]);
    }
    return 0;
}