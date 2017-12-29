#include <stdio.h>

void stringcopyarray(char *s, char *t){
    int i;

    while ((s[i] = t[i]) != '\0'){
        i++;
    }
}

void stringcopy(char *s, char *t){
    while ((*s = *t) != '\0'){
        s++;
        t++;
    }
}

void stringcopy2(char *s, char *t){
    while (*s++ = *t++){
        ;
    }
}

int main(void){
    char s1[] = "hello world";
    char s2[] = "goodbye world";

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("Copying s2 to s1\n");
    stringcopy(s1, s2);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    return 0;    
}