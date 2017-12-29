#include <stdio.h>

int find_greatest(int a, int b, int c){

    if (a > b){
        if (a > c){
            return a;
        }
        return c;
    }
    
    if (b > a){
        if (b > c){
            return b;
        }
        return c;
    }
    return c;
}

int main(void){
    int a, b, c;

    a=10;
    b=8;
    c=2;

    printf("The largest of %d, %d and %d is: %d\n", a,
    b, c, find_greatest(a, b, c));
    return 0;
}