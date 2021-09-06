#include "ex2.h"

int main_tp1_ex2() {
    int var1 = 123;
    int var2 = 18;
    var1 += var2;
    var2 = var1 - var2;
    var1 -= var2;
    printf("var1= %d et var2= %d\n", var1, var2);
    return 0;
}