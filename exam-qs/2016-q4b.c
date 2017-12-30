#include <stdio.h>

int sum_integers(void){

    int i, sum;

    sum = 0;
    for (i = 1; i < 11; ++i){
        sum = sum + i;
    }
    
    return sum;
}


int main(void) {
 printf("Sum = %d\n", sum_integers());
 return 0;
}