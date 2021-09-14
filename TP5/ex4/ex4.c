#include "ex4.h"

#define SIZE 10

int index2(int *a, int x, int n) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

int main_tp5_ex4() {
    int tab[SIZE] = {-2, 5, -10, 7, 3, 12, -10, 4, 78, 20}, index, search;
    printf("Chercher le nombre entier: ");
    scanf("%d", &search);
    index = index2(tab, search, SIZE);
    if (index != -1) {
        printf("%d est a la position %d dans le tableau", search, index);
    } else {
        printf("%d n'est pas dans le tableau", search);
    }
    return 0;
}