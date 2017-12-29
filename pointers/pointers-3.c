#include <stdio.h>

int strlen(char *s){
    int n;

    for (n = 0; *s != '\0'; s++){
        n++;
    }

    return n;
}

int main(void){

    char s1[] = "hello, world!";
    char s2[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";

    printf("%s has lengeth %d\n", s1, strlen(s1));
    printf("%s has lengeth %d\n", s2, strlen(s2));

    return 0;
}