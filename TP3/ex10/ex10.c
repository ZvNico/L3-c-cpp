#include "ex10.h"

#define MIN 5
#define MAX 8

typedef enum bool {
    false,
    true
} bool;

int main_tp3_ex10() {
    char mdp[MAX];
    char mdp_ok[MAX];
    int i;
    bool maj, spec, chiffre, taille;
    do {
        do {
            printf("Entrez un nouveau mot de passe: ");
            fgets(mdp, sizeof(mdp), stdin);
            maj = false, spec = false, chiffre = false, taille = true;
            for (i = 0; (i < MAX) && mdp[i]; ++i) {
                if ((mdp[i] >= 'A') && (mdp[i] <= 'Z')) {
                    maj = true;
                } else if ((mdp[i] >= '0') && (mdp[i] <= '9')) {
                    chiffre = true;
                } else if (!((mdp[i] >= 'a') && (mdp[i] <= 'z')) && (mdp[i] != '\n')) {
                    spec = true;
                }
            }
            if ((i < MIN) || (i > MAX)) {
                taille = false;
            }
        } while (!(maj && chiffre && spec && taille));
        while (getchar() != '\n');
        printf("Confirmez le mot de passe: ");
        fgets(mdp_ok, sizeof(mdp_ok), stdin);
    } while (strcmp(mdp, mdp_ok) != 0);
    return 0;
}