#include "ex1.h"

int min(int a, int b) {
    return b * (a >= b) + a * (b > a);
}

int max(int a, int b) {
    return a * (a >= b) + b * (b > a);
}

int main_tp5_ex1() {
    int x = 12, y = 9;
    printf("Le min de %d et %d est %d\n", x, y, min(x, y));
    printf("Le max de %d et %d est %d\n", x, y, max(x, y));
    return 0;
}