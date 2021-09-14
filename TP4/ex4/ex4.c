#include "ex4.h"

int main_tp4_ex4() {
    int age = 23;
    int *pointeur_age = &age;

    printf("Quel est votre age ? ");
    scanf("%d", pointeur_age);
    printf("Vous avez %d ans\n", age);
    return 0;
}