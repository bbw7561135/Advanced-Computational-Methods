#include <stdio.h>
#include <string.h>

void lstrip(char *s);

int main(void){
    char test1[] = "      Hello World";

    printf("Original string reads  : |%s|\n", test1);
    lstrip(test1);
    printf("R-stripped string reads: |%s|\n", test1);

    return 0;
}

void lstrip(char *s){
    int i;

    while(*s == ' '){
        for (i = 0; i < strlen(s); i++){
            s[i] = s[i+1];
        }
    }
}