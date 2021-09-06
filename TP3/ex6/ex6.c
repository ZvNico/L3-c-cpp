#include "ex6.h"

int main_tp3_ex6() {
    char chaine[] = {'S', 'a', 'l', 'u', 't', ' ', 'l', 'e', 's', ' ', 'c', 'o', 'd', 'e', 'u', 'r', 's', '!'};
    char *new_chaine;
    printf("%s\n", chaine);
    new_chaine = (char *) malloc((strlen(chaine) + 1)    * sizeof(char));
    strcpy(new_chaine, chaine);
    strcat(new_chaine, "\0");
    printf("%s\n", chaine);
    printf("%s\n", new_chaine);
    return 0;
}