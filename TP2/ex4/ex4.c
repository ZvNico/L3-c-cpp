#include "ex4.h"

int main_tp2_ex4() {
    int jour;
    do {
        printf("Donnez un numero de jour de la semaine: ");
        scanf("%d", &jour);
    } while (jour < 1 || jour > 7);
    printf("Cela correspond a ");
    switch (jour) {
        case 1:
            printf("Lundi");
            break;
        case 2:
            printf("Mardi");
            break;
        case 3:
            printf("Mercredi");
            break;
        case 4:
            printf("Jeudi");
            break;
        case 5:
            printf("Vendredi");
            break;
        case 6:
            printf("Samedi");
            break;
        case 7:
            printf("Dimanche");
            break;
    }
    printf(".\n");
    return 0;
}