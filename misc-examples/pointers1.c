#include <stdio.h>

void swap(int *px, int *py){
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}


int main(void){

    int x = 1, y = 2, z[10];
    int *ip;  //ip is a pointer to an int

    ip = &x;        // ip now points to x
    y = *ip;        // y is now 1
    *ip = 0;        // x is now 0
    ip = &z[0];     // ip now points to z[0]

    int a = 10, b = 5;
    printf("Original values:\na = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Swapped values:\na = %d, b = %d\n", a, b);    

    return 0;
}