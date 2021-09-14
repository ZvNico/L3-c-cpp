#include "ex6.h"

double f(int x) {
    return sin(x) + log(x) - sqrt(x);
}

int main_tp5_ex6() {
    printf("X\tF(X)\n");
    for (int i = 1; i < 11; ++i) {
        printf("%d\t%f\n", i, f(i));
    }
    return 0;
}