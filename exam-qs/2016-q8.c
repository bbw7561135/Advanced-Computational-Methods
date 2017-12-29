#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* center(char* word, int n){

    int i, n_dashes;
    char* dashed_word;

    // figure out how many dashes there will be
    n_dashes = n - strlen(word);
    dashed_word = (char*)malloc(sizeof(word) + sizeof(char) * n_dashes);

    for (i = 0; i < n_dashes/2; i++){
        *dashed_word++ = '-';
    }

    return dashed_word;
}

int main(void) {
    char s[] = "cat";
    char *ret;
    ret = center(s,5);
    printf("%s\n", ret);
    free(ret);
    ret = center(s, 6);
    printf("%s\n", ret);
    free(ret);
    ret = center(s, 7);
    printf("%s\n", ret);
    free(ret);
    return 0;
}