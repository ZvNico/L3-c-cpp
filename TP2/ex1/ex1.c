#include "ex1.h"

int main_tp2_ex1() {
    int age;
    printf("Quelle est votre age? ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Vous etes donc majeur\n");
    } else {
        printf("Vous etes donc mineur\n");
    }
    return 0;
}