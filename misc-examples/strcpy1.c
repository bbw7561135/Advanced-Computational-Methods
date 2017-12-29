#include <stdio.h>

// copy t to s
void strcpy(char *s, char *t){
    while ((*t=*s) != '\0'){
        s++;
        t++;
    }
}

// copy t to s
void strcpy(char *s, char *t){
    while ((*t++=*s++) != '\0'){
        ;
    }
}