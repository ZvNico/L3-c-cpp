#include "ex3.h"

#define  SIZE 30

int string_is_int(const char *s) {
    int dot = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] < '0' || s[i] > '9') {
            if (s[i] == '.') {
                if (dot) {
                    return 0;
                }
                dot++;
            } else {
                return 0;
            }
        }
    }
    return 1;
}

int main_tp5_ex3() {
    char input[SIZE];
    int bool;
    printf("Ecrire un nombre: ");
    scanf("%s", input);
    printf("\t");
    bool = string_is_int(input);
    if (bool) {
        printf("C'est un nombre");
    } else {
        printf("Ce n'est pas un nombre");
    }
    return 0;
}