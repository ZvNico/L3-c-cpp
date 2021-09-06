#include "ex8.h"

int main_tp2_ex8() {
    int j, m, a;
    do {
        printf("Donnez une date(jj/mm/aaaa): ");
        scanf("%d/%d/%d", &j, &m, &a);
    } while (j < 1 || j > 31 || m < 1 || m > 12);
    printf("%d ", j);
    switch (m) {
        case 1:
            printf("Janvier");
            break;
        case 2:
            printf("Fevrier");
            break;
        case 3:
            printf("Mars");
            break;
        case 4:
            printf("Avril");
            break;
        case 5:
            printf("Mai");
            break;
        case 6:
            printf("Juin");
            break;
        case 7:
            printf("Juillet");
            break;
        case 8:
            printf("Aout");
            break;
        case 9:
            printf("Septembre");
            break;
        case 10:
            printf("Octobre");
            break;
        case 11:
            printf("Novembre");
            break;
        case 12:
            printf("Decembre");
            break;
    }
    printf(" %d\n", a);
    return 0;
}