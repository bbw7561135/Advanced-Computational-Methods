#include <ctype.h>

int getch(void);
int ungetch(void);

// get int: get next integer from input into *pn
int getint(int *pn){

    int c, sign;

    while (isspace(c = getch())){  // skip whitepsace 
        ;
    }
    if (!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);  // it's not a number
        return 0;
    }
    sign = (c == '-') ? -1: 1;
    
}