#include "ex2.h"


int pow2(int x, int p) {
    int res = x;
    for (int i = 1; i < p; ++i) {
        res *= x;
    }
    return res;
}

int main_tp5_ex2() {
    int x = 2, p = 3;
    printf("%d puissance %d = %d", x, p, pow2(x, p));
    return 0;
}