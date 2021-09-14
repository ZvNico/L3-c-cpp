#ifndef L3_TP6_EX1_H
#define L3_TP6_EX1_H

#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

typedef struct Dict {
    char *mot;
    int occ;
} Dict;

int main_tp6_ex1();

void sort_dict(Dict ***, int);

void print_dict(Dict ** , int);

int find_1st_non_word_char(const char *);

void replace_substring(char *, int);

int find_substring(const char *, const char *);

int find_occ(char *, const char *);

#endif //L3_TP6_EX1_H