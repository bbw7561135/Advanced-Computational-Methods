#include <stdio.h>

#define MAXLINE 1000

int getlinekr(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";  // this is the pattern to search for
char text[] = "Ah Love! could you and I with Fate conspire To graphs this sorry Scheme of Things entire, Would not we shatter it to bits -- and then Re-mould it nearer to the Heart's Desire!";

int main(void){
    char line[MAXLINE];
    int found = 0;

    while (getlinekr(line, MAXLINE) > 0){
        if (strindex(line, pattern) >= 0){
            printf("%s", line);
            found++;
        }
    }

    return found;
}

int getlinekr(char s[], int lim){
    int c, i;

    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n'){
        s[i++] = c;
    }
    if (c == '\n'){
        s[i++] = c;
    }
    s[i] = '\0';

    return i;
}

int strindex(char s[], char t[]){
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++){
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k ++){
            ;
        }
        if (k > 0 && t[k] == '\0'){
            return i;
        }
    }

    return -1;
}