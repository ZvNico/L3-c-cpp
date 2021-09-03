#include "ex6.h"

int main_ex6() {
    char lettre;
    printf("Saisissez une minuscule: ");
    scanf("%c", &lettre);
    lettre -= 32;
    printf("Cela donne en majuscule: %c", lettre);
    return 0;
}