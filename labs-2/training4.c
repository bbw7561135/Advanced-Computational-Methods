#include <stdio.h>

long string_length(char *s);

int main(void){
    char s1[] = "Hello";
    char s2[] = "x";
    char s3[] = "line1\tline 2\n";

    printf("%20ld | %s\n", string_length(s1), s1);
    printf("%20ld | %s\n", string_length(s2), s2);
    printf("%20ld | %s\n", string_length(s3), s3);
}

long string_length(char *s){
    long n;
    
    n = 0;
    while(*s++ != '\0'){
        n++;
    }

    return n;
}