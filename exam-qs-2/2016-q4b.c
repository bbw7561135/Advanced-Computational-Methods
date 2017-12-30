#include <stdio.h>

int sum_intergers(void);

int main(void){
    printf("Sum = %d\n", sum_intergers());
    return 0;
}

int sum_intergers(void){
    int i, s;

    s = 0;
    for (i = 1; i < 11; i++){
        s += i;
    }

    return s;
}