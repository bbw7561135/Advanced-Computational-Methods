#include <stdio.h>

int product(int a, int b, int c){

    int prod;

    prod = a * b * c;
    return prod;
}


int main(void) {
    printf("Result = %d\n", product(1, 2, 3));
    return 0;
}