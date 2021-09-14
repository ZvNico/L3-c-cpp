#include "ex1.h"

int main_tp4_ex1() {
    char c = 'A';
    printf("Information sur ma variable:\n"
           "\ttype: char\n"
           "\ttaille: %lu octets\n"
           "\tcontenu: %c\n"
           "\tadresse: %p", sizeof(c), c, &c);
    return 0;
}