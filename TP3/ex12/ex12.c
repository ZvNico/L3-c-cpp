#include "ex12.h"

#define SIZE 255

typedef enum bool {
    false,
    true
} bool;

int main_tp3_ex12() {
    bool maj;
    int i;
    char input[SIZE], chaine[] = "CODEUR", op = ' ';
    do {
        printf("Ecrire un mot en majuscule: ");
        fgets(input, sizeof(input), stdin);
        for (i = 0; (i < SIZE) && (input[i]); ++i) {
            if (input[i] == '\n') {
                input[i] = '\0';
            }
        }
        maj = true;
        for (i = 0; (i < SIZE) && input[i]; ++i) {
            if (((input[i] < 'A') || (input[i] > 'Z')) && (input[i] != '\n')) {
                maj = false;
                break;
            }
        }
    } while (maj == false);
    for (i = 0; (i < SIZE); ++i) {
        if ((input[i] > chaine[i]) || (!chaine[i] && input[i])) {
            op = '>';
            break;
        } else if ((input[i] < chaine[i]) || (!input[i] && chaine[i])) {
            op = '<';
            break;
        } else if (!input[i] && !chaine[i]) {
            op = '=';
            break;
        }
    }
    printf("%s %c %s", input, op, chaine);
    return 0;
}