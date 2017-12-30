#include <stdio.h>

void rstrip(char *s);

int main(void){
    char test1[] = "Hello World      ";

    printf("Original string:   |%s|\n", test1);
    rstrip(test1);
    printf("R-stripped string: |%s|\n", test1);

    return 0;
}

void rstrip(char *s){
    int i;

    for (i = strlen(s)-1; s[i] == ' '; i--){
        s[i] = 0;
    }
}