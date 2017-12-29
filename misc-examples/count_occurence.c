#include <stdio.h>

int main(void){

    int c, i, nwhite, nother;
    int ndigit[10];

    // set all of the counters to 0
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i){
        ndigit[i] = 0;
    } 

    while ((c = getchar()) != EOF){
        // if the character value is 0-9, then update the counter for that char
        if ( c >= '0' && c <= '9'){
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }
        else{
            ++nother;
        }
    }

    printf("digits = ");
    // print the number of times a number occurs in an input
    for (i = 0; i < 10; ++i){
        printf("%d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}