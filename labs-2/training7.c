#include <stdlib.h>
#include <stdio.h>

void use_mix(void);
char* mix(char *s1, char *s2);

int main(void){
    use_mix();

    return 0;
}

void use_mix(void){
    char s1[] = "Hello World";
    char s2[] = "1234567890!";

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("r = %s\n", mix(s1, s2));
}

char* mix(char *s1, char *s2){
    char *r = (char *)malloc(sizeof(char) * 2 + 1);
    char *rIndex = r;  // rIndex points to element 0 in r

    while (*s1 != '\0'){
        *rIndex++ = *s1++;
        *rIndex++ = *s2++;
    }

    *rIndex++ = '\0';

    return r;
}
