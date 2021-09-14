#include "ex5.h"

int string_occurences(const char *s, char c) {
    int occ = 0;
    for (int i = 0; s[i]; ++i) {
        if (s[i] == c) {
            occ++;
        }
    }
    return occ;
}

int main_tp5_ex5() {
    char chaine[] = "Fonction qui cherche combien de fois un caractere est present dnas une chaine";
    char search;
    printf("Quelle caractere chercher ? ");
    scanf("%c", &search);
    printf("Le caractere '%c' est present %d fois\n", search, string_occurences(chaine, search));
    return 0;
}