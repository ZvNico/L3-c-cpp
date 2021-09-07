#include "ex11.h"

#define SIZE 255

int main_tp3_ex11() {
    char input[SIZE];
    int i;
    printf("Ecrire un message: ");
    fgets(input, sizeof(input), stdin);
    for (i = 0; (i < SIZE) && input[i]; ++i) {
    }
    i--;
    printf("\ttaille de la string: %d\n", i);
    return 0;
}