#include "ex6.h"

int main_tp3_ex6() {
    char chaine[] = {'S', 'a', 'l', 'u', 't', ' ', 'l', 'e', 's', ' ', 'c', 'o', 'd', 'e', 'u', 'r', 's', '!', '\0'};
    printf("- %s\n", chaine);
    chaine[5] = '\0';
    printf("- %s\n", chaine);
    return 0;
}