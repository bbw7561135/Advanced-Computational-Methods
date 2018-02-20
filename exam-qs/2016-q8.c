#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* center(char *s, int n);

int main(void){
    char s[] = "cat";
    char *ret;

    ret = center(s, 5);
    printf("%s\n", ret);
    free(ret);

    ret = center(s, 6);
    printf("%s\n", ret);
    free(ret);

    ret = center(s, 7);
    printf("%s\n", ret);
    free(ret);

    return 0;
}

char* center(char *s, int n){
    int i;
    char *cent = malloc(sizeof(char) * n + 1);
    char *centIndex = cent;

    if ((n % 2) == 0){
        for (i = 0; i < n; i++){
            if
        }

    } else{
        ;
    }

    return cent;
}