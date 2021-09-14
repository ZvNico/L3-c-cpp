#include "ex1.h"


void sort_dict(Dict ***p_dict, int n) {
    Dict *max = NULL;
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = i; j < n; ++j) {

        }
    }
}

void print_dict(Dict **dict, int n) {
    int i, j, temp, len;
    for (i = 0; i < n; ++i) {
        for (j = 0; dict[i]->mot[j]; ++j) {
            printf("%c", dict[i]->mot[j]);
        }
        printf(" | ");
    }
    printf("\n");
    for (i = 0; i < n; ++i) {
        len = (int) strlen(dict[i]->mot);
        for (j = 0; j < (len / 2); ++j) {
            printf(" ");
        }
        temp = printf("%d", dict[i]->occ);
        for (j = 0; j < ((len / 2) + (len % 2) - temp); ++j) {
            printf(" ");
        }
        printf(" | ");
    }
}

int find_1st_non_word_char(const char *string) {
    int i;
    for (i = 0; string[i]; ++i) {
        if (((string[i] < 'a') || (string[i] > 'z')) && (string[i] != '\'')) {
            return i;
        }
    }
    return -1;
}

void replace_substring(char *string, int n) {
    for (int i = 0; i < n; ++i) {
        string[i] = '#';
    }
}

int find_substring(const char *string, const char *substring) {
    int i, j, eq;
    for (i = 0; string[i]; ++i) {
        eq = 1;
        for (j = 0; substring[j] && eq; ++j) {
            if (substring[j] != string[i + j]) {
                eq = 0;
            }
        }
        if (eq) {
            if ((string[i + j] < 'a') || (string[i + j] > 'z')) {
                return i;
            }
        }
    }
    return -1;
}

int find_occ(char *string, const char *find) {
    int occ = 0, i, pos = find_substring(string, find), len_find = (int) strlen(find);
    while (pos != -1) {
        occ++;
        pos = find_substring(string + pos + len_find, find);
    }
    return occ;
}

int main_tp6_ex1() {
    char texte[] = "Une personne m'a dit le mot bonjour. J'ai repondu bonjour a cette personne! Bonjour? Quel joli mot personne!";
    Dict **dict = malloc(sizeof(Dict *) * strlen(texte));
    int i, pos = 0, len, pos_dict = 0, pos_word = 0, temp;
    for (i = 0; texte[i]; ++i) {
        texte[i] = (char) tolower(texte[i]);
    }
    do {
        while (((texte[pos] < 'a') || (texte[pos] > 'z')) && texte[pos]) {
            pos++;
        }
        len = find_1st_non_word_char(texte + pos);
        if (len != -1) {
            dict[pos_dict] = malloc(sizeof(dict));
            dict[pos_dict]->mot = (char *) malloc(sizeof(char) * len);
            dict[pos_dict]->occ = 1;
            for (i = 0; i < len; ++i) {
                dict[pos_dict]->mot[i] = texte[pos + i];
            }
            pos += len + 1;
            pos_word = find_substring(texte + pos, dict[pos_dict]->mot);
            while (pos_word != -1) {
                replace_substring(texte + (pos + pos_word), len);
                dict[pos_dict]->occ++;
                pos_word += len;
                temp = find_substring(texte + (pos + pos_word), dict[pos_dict]->mot);
                if (temp != -1) {
                    pos_word += temp;
                } else {
                    pos_word = temp;
                }
            }
            pos_dict++;
        }
    } while (texte[pos]);
    print_dict(dict, pos_dict);
    return 0;
}


