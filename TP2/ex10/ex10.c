#include "ex10.h"

int main_tp2_ex10() {
    int n, j, i;
    do {
        printf("Donnez un nombre de ligne [3-10]: ");
        scanf("%d", &n);
    } while (n < 3 || n > 10);
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (j = 0; j < i * 2 + 1; ++j) {
            printf("*");
        }
        for (j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}