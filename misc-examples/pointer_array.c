#include <stdio.h>
#include <string.h>

int main(void){
    char c[] = "Hello World----";
    int i = 0;
    for (i = 0; i < strlen(c); ++i){
        printf("%c\n", c[i]);
    }
    for (i = 0; i < strlen(c); ++i){
        printf("%c\n", *(c+i));
    }
}