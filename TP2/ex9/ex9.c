#include "ex9.h"

int main_tp2_ex9() {
    int n;
    printf("Quelle table de multiplication afficher? ");
    scanf("%d", &n);
    for (int i = 0; i < 11; ++i) {
        printf("%dx%d = %d\n", n, i, n * i);
    }
    return 0;
}