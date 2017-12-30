#include <stdio.h>

#define MAXLINE 1000

void reverse(char *source, char *target);
long string_length(char *s);

int main(void){
    char original[] = "This is a test: can you print me in reverse order?";
    char reversed[MAXLINE];

    printf("%s\n", original);
    reverse(original, reversed);
    printf("%s\n", reversed);

    return 0;
}

long string_length(char *s){
    long n;
    
    n = 0;
    while(*s++ != '\0'){
        n++;
    }

    return n;
}

void reverse(char *source, char *target){
    int i, n;
    long len;

    len = string_length(source);

    /* len -1 to avoid the \0 at the end of source */
    for (i = len-1; i != -1; i--){
        *target++ = *(source+i);
    }

    *target++ = '\0'; /* add termination char */
}