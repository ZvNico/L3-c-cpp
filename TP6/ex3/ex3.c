#include "ex3.h"

int main_tp6_ex3(){
    srand(time(NULL));
    char secret[4];
    char *choix="RVBJO";
    char user[5];
    Bool valide1, valide2;
    int counter, good,bad,i,j;
    for (i=0;i<4;i++){
        secret[i]=choix[rand() % 5];
    }
    for (i = 0; i < 4; ++i) {
        printf("%c",secret[i]);
    }
    printf("\n");
    for (counter = 1; (counter < 4) && good !=4; ++counter) {
        do {
            bad=0;
            good = 0;
            printf("Donnez un code de 4 couleurs diffrentes et sans espaces parmis : {'R','V','B','J','O'}\n");
            fgets(user, sizeof(user), stdin);
            fflush(stdin);
            valide1 = true;
            for (i = 0; i < 4; ++i) {
                valide2 = false;
                for (j = 0; (j < 5) && !valide2; ++j) {
                    if (user[i] == choix[j]){
                        valide2 = true;
                    }
                }
                if ( !valide2){
                    valide1 = false;
                }
            }
        } while ( !valide1);
        printf("votre code entrer est %s !\n", user);
        for (i = 0; i < 4; ++i) {
            if (secret[i]==user[i]){
                good+=1;
                user[i]='#';
            }
        }
        for (i=0; i<4;++i){
            for (j=0; j<4; ++j){
                if (secret[i]==user[j]){
                    bad+=1;
                    user[j]='#';
                }
            }
        }
        printf("Tentative %d/3\n", counter);
        printf("Couleurs mal placees:  %d\n", bad);
        printf("Couleurs bien placees:  %d\n", good);
    }
    return 0;
}