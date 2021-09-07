#include "ex12.h"

#define SIZE 255

typedef enum bool {
    false,
    true
} bool;

int main_tp3_ex12() {
    bool maj;
    char input[SIZE];
    char chaine[] = "CODEUR";
    do {
        printf("Ecrire un mot en majuscule: ");
        fgets(input, sizeof(input), stdin);
        maj = true;
        for (int i = 0; (i < SIZE) && input[i]; ++i) {
            if (((input[i] < 'A') || (input[i] > 'Z')) && (input[i] != '\n')) {
                printf("Maj false : %c", input[i]);
                maj = false;
                break;
            }
        }
    } while (maj != false);
    printf("Valide");
    return 0;
}