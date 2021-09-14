#include "ex6.h"

#define SIZE 4

int main_tp4_ex6() {
    int tab[SIZE] = {1, 2, 6, 3}, res = 0;
    for (int *i = tab; i < tab + SIZE; ++i) {
        res += *i;
    }
    printf("Somme = %d", res);
    return 0;
}