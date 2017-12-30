#include <stdio.h>
#include <string.h>

int main(void){
    char s1[] = "Hello World";
    char *s = s1;

    printf("%s\n", s);
    *s = *(s + (strlen(s1)-1));
    printf("%s\n", s);

    return 0;
}