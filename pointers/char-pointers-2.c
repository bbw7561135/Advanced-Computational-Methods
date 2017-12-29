#include <stdio.h>

int stringcomparearray(char *s, char *t){
    int i;

    for (i = 0; s[i] == t[i]; i++){
        if (s[i] == '\0'){
            return 0;
        }
    }
    return s[i] - t[i];
}

int stringcompare(char *s, char *t){
    for (; *s == *t; *s++, *t++){
        if (*s == '\0'){
            return 0;
        }
    }
    return *s - *t;
}

int main(void){

    char s1[] = "hello world";
    char s2[] = "hello world!";
    char s3[] = "hello World";
    char s4[] = "hello! World!";

    printf("%d\n", stringcompare(s1, s1));
    printf("%d\n", stringcompare(s1, s2));
    printf("%d\n", stringcompare(s1, s3));
    printf("%d\n", stringcompare(s1, s4));

    return 0;
}